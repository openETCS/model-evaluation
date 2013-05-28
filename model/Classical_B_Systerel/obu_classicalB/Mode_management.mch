/* Mode_management
 * Author: Marielle Petit-Doche <marielle.doche@systerel.fr> --Systerel
 * Creation date: 14/05/13
 
  * Licensed under the EUPL V.1.1 or - as soon they will be approved by
 * the European Commission - subsequent versions of the EUPL (the
 * "Licence");
 * You may not use this work except in compliance with the Licence.

 * You may obtain a copy of the Licence at:
 *   http://joinup.ec.europa.eu/software/page/eupl/licence-eupl

 * Unless required by applicable law or agreed to in writing, software
 * distributed under the Licence is distributed on an "AS IS" basis,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
 * implied.

 * See the Licence for the specific language governing permissions and
 * limitations under the Licence.
 */
MACHINE
    Mode_management
    
SEES
    obu_types,
    obu_inputs
    
    
DEFINITIONS
    // Condition 1 :  The driver isolates the ERTMS/ETCS on-board equipment.
    condition_1 == (driver_isolate =  TRUE)
    ;
    // Condition 5 : (train is at standstill) AND (ERTMS/ETCS level is 0 or NTC or 1) AND 
    //		(driver selects Shunting mode)

    condition_5(v_train, ll) == ( v_train = 0 & ll : {level_0, level_NTC, level_1} & driver_ask_SH = TRUE)
    ;
    // Condition 6 : (train is at standstill) AND (ERTMS/ETCS level is 2 or 3) AND 
    //		(reception of the information “Shunting granted by RBC”, due to a Shunting request from the driver)

    condition_6(v_train, ll) == ( v_train = 0  & ll : {level_2, level_3} & driver_ask_SH =  TRUE) 
    ;
    // Condition 10 : (valid Train Data is stored on board) AND (MA + SSP +gradient are on-board) AND
    //		(no specific mode is required by a Mode Profile)

	condition_10 == ( Valid_Train_Data =  TRUE & Valid_MA =  TRUE & Valid_SSP =  TRUE & 
    						Valid_Grad =  TRUE & M_MAMODE =  ma_unknown)
    ;
    // Condition 50 : (An ackn. request for Shunting is displayed to the driver) AND 
    // (the driver acknowledges) 
    // {5} The request to acknowledge Shunting is displayed to the driver only if certain conditions are
	// fulfilled. These conditions are not specified here. See the “Entry in Shunting” procedure and the
	// “Start Of Mission” procedure of SRS-§5.

    condition_50 == (SH_request_accepted =  TRUE & driver_ack =  TRUE)
    

OPERATIONS
    
    // §4.6.2 High priority modelling : 
    // Transitions  :
    // from SB to SH
    // from SB to FS
    // from SB to IS
    mm, ll, pr <-- manage_mode(pm, pl, vv, ppr) =
    PRE
        pm :  t_mode &
        pl :  t_level &
        vv :  VITESSE &
        mm : t_mode &
        ll : t_level &
        pr : t_procedure &
        ppr : t_procedure &
        // ASSERTIONS on inputs (see obu_inputs) to ensure mutual  exclusion on the conditions of the same priority
    	// conditions 5, 6 and 50  are not TRUE in the same time
   	 	not ( (condition_5(vv, pl) or condition_6(vv, pl)) & condition_50 ) &
	    // conditions 5, 6, 10 are not TRUE in the same time
	    not( (condition_5(vv, pl) or condition_6(vv, pl)) & condition_10  ) &
	    // conditions 50, 10 are not TRUE in the same time
	    not( condition_50 & condition_10  )

    THEN
        mm,
        ll, 
        pr  :(
            // output types
            mm : t_mode &
            ll : t_level &
            pr : t_procedure &
            
// priority  1
            ( condition_1  => ( mm = ISo & ll = pl & pr = ppr) ) &
            ( not(condition_1) => (
// priority 7
                // from SB to SH
                ( ( condition_5(vv, pl) or condition_6(vv, pl) ) 	
                	& pm = SB => ( mm = SH & ll = pl & pr = ppr) ) &
                ( condition_50 
                	& pm = SB => ( mm = SH  & ll = pl & pr = SHInitiatedByDriver) ) &
                // from SB to FS
                ( condition_10 
                	& pm = SB => ( mm = FS & ll = pl & pr = ppr) ) &
                // from SB but other conditions :  case not covered, mode is unchanged
                ( not(condition_5(vv, pl) or condition_6(vv, pl) or condition_50 or condition_10) 
                	& pm = SB => ( mm = pm & ll = pl & pr = ppr) ) &
                // from other modes :  case not covered, mode is unchanged
                (not(pm=SB) => ( mm = pm & ll = pl & pr = ppr) )
                ) ) &
        	( pm = ISo => mm = ISo )     &
		    // PROPERTY_4.6.2_01 : 
		    // OBU shall never enter in isolated mode if not requested by the driver
		    ( (driver_isolate = FALSE & pm /= ISo) =>  mm /= ISo )        
            )
    END
        

END
