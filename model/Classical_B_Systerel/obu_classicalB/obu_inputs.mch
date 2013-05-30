/* obu_inputs
 * Author: Marielle Petit-Doche <marielle.doche@systerel.fr> --Systerel
 * Creation date: 07/05/13
 
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
    obu_inputs
    
SEES
    obu_types
    
ABSTRACT_CONSTANTS
    c_last_known_RBC
    
ABSTRACT_VARIABLES
    
    // for §4.6.2 Transition Table
    Valid_Train_Data,
    Valid_MA, Valid_SSP, Valid_Grad,
    M_MAMODE,
    driver_isolate, driver_ask_SH, driver_ack,
    SH_request_accepted
    
    ,
    // For § 3.5.3 Communication Session
    NID_C, NID_RBC, NID_RIU
    
PROPERTIES
    c_last_known_RBC = 16383
    
INVARIANT
    Valid_Train_Data :  BOOL &
    // MA received in Packet 12 or Packet 15 is valid and stored
    Valid_MA : BOOL &
    // SSP received in Packet 27 is valid and stored
    Valid_SSP : BOOL &
    // Gradient received in Packet 21 or Packet 141 is valid and stored
    Valid_Grad :  BOOL &
    // Mode Profile requested in Packet 80
    M_MAMODE : t_mamode &
    // Driver commands
    driver_isolate : BOOL &
    driver_ask_SH : BOOL &
    driver_ack : BOOL &
    // SH_request is accepted according message 27 or message 28
    SH_request_accepted : BOOL
    &
    NID_C : 0..1023 &
    NID_RBC : 0..c_last_known_RBC &
    NID_RIU : 0..16383 

INITIALISATION
    Valid_Train_Data :=  FALSE ||
    Valid_MA := FALSE ||
    Valid_SSP := FALSE ||
    Valid_Grad :=  FALSE ||
    M_MAMODE :=  ma_unknown ||
    driver_isolate := FALSE ||
    driver_ask_SH := FALSE ||
    driver_ack := FALSE ||
    SH_request_accepted :=  FALSE ||
    NID_C := 0 ||
    NID_RBC := 0 ||
    NID_RIU := 0
    
OPERATIONS
    
    initial_read_inputs =
    BEGIN
        Valid_Train_Data,
        Valid_MA,
        Valid_SSP,
        Valid_Grad,
        M_MAMODE,
        driver_isolate,
        driver_ask_SH,
        driver_ack,
        SH_request_accepted :(
            Valid_Train_Data :  BOOL &
        	Valid_MA : BOOL &
    		Valid_SSP : BOOL &
    		Valid_Grad :  BOOL &
    		M_MAMODE :  t_mamode &
    		driver_isolate : BOOL &
    		driver_ask_SH : BOOL &
    		driver_ack : BOOL &
    		SH_request_accepted : BOOL
        )
    END
    ; 
    
    read_inputs =
    BEGIN
        Valid_Train_Data,
        Valid_MA,
        Valid_SSP,
        Valid_Grad,
        M_MAMODE,
        driver_isolate,
        driver_ask_SH,
        driver_ack,
        SH_request_accepted :(
            Valid_Train_Data :  BOOL &
        	Valid_MA : BOOL &
    		Valid_SSP : BOOL &
    		Valid_Grad :  BOOL &
    		M_MAMODE :  t_mamode &
    		driver_isolate : BOOL &
    		driver_ask_SH : BOOL &
    		driver_ack : BOOL &
    		SH_request_accepted : BOOL
        )
    END
       
    ;
    
    vtd <-- get_Valid_Train_Data = 
    BEGIN
        vtd:(
            vtd = Valid_Train_Data
            )
    END
    ;
    
    vma <-- get_Valid_MA = 
    BEGIN
        vma :(
            vma = Valid_MA
            )
    END
    ;
    
    vssp <-- get_Valid_SSP = 
    BEGIN
        vssp :(
            vssp = Valid_SSP
            )
    END
    ;
    
    vg <-- get_Valid_Grad = 
    BEGIN
        vg :(
            vg = Valid_Grad
            )
    END
    ;
    
    mma <-- get_M_MAMODE = 
    BEGIN
        mma :(
            mma = M_MAMODE
            )
    END

    ;
    
    di <-- get_driver_isolate = 
    BEGIN
        di :(
            di = driver_isolate
            )
    END
        ;
    
    daSH <-- get_driver_ask_SH = 
    BEGIN
        daSH :(
            daSH = driver_ask_SH
            )
    END
    
    ;
    
    da <-- get_driver_ack = 
    BEGIN
        da :(
            da = driver_ack
            )
    END
        ;
    
    SHra <-- get_SH_request_accepted = 
    BEGIN
        SHra :(
            SHra = SH_request_accepted
            )
    END
    



END
