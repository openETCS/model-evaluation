/* RCM_session
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
    RCM_session
    
     
 SEES
     obu_types, 
    RCM_types,
    obu_modes_procedures
    
   
OPERATIONS
  
       //3.5.3.4 The on-board shall establish a communication session
    requested_comm <-- check_communication_conditions(p_equip, active_comm) =
    PRE
        p_equip :  t_equipment &
        equipment_class(p_equip) = RBC &
        active_comm : BOOL &
        requested_comm : BOOL 
    THEN
        requested_comm :(
            requested_comm : BOOL &
            //a) At Start of Mission (only if level 2 or 3).
            ( ( active_comm =  FALSE & procedure = StartOfMission & M_level : {level_2, level_3} ) => requested_comm =  TRUE )
                &
                //b) If ordered from trackside.
            
//c) If a mode change, not considered as an End of Mission, has to be reported to the RBC (only if level 2 or 3)
//d) If the driver has manually changed the level to 2 or 3
//e) When the train front reaches the end of an announced radio hole
//f) When the previous communication session is considered as terminated due to loss of safe radio connection (refer to 3.5.4.2.1)
//g) When a Start of Mission procedure, during which no communication session could be established, is completed in level 2 or 3

//3.5.3.4.1 In respect of a), b), c), d) and e) of 3.5.3.4, the on-board shall not establish a new communication session with an RBC/RIU in case a communication session is currently being established or is already established with this RBC/RIU.

			( requested_comm = bool(active_comm = FALSE) )

            
            )
    END 
    ;
        
    //3.5.3.5 The order to contact an RBC shall include
//a) The identity of the RBC.
//b) The telephone number of the RBC.
//c) The action to be performed (establish/terminate the session).
//d) Whether this applies also to Sleeping units.
//3.5.3.5.1 See table at the end of section 3.5.3. 
//3.5.3.5.2 If the ERTMS/ETCS on-board equipment has to establish a communication session with an RBC whilst in session with another RBC, the existing communication session shall be terminated (see 3.5.5.2 for details) and the new one shall be established. Exception: the order to contact an Accepting RBC shall not terminate the communication session with the Handing Over RBC.
//3.5.3.5.3 The order to contact an Accepting RBC shall be part of the RBC transition order and shall include:
//a) The identity of the Accepting RBC.
//b) The telephone number of the Accepting RBC.
//c) Whether this applies also to Sleeping unit.


//3.5.3.7 If the establishment of a communication session is initiated by the on-board, it shall be performed according to the following steps: 
//a) The on-board shall request the set-up of a safe radio connection with the trackside. If this request is part of an on-going Start of Mission procedure, it shall be repeated until successful or a defined number of times (see Appendix A3.1).
//If this request is not part of an on-going Start of Mission procedure, it shall be repeated until at least one of the following conditions is met:
//Safe radio connection is set up
//End of Mission is performed
//Order to terminate communication session is received from trackside
//The train passes a level transition border (from level 2/3 to level 0, NTC, 1) with its front end.
//Order to establish communication session with a different RBC is received from trackside and the order does not request to contact an Accepting RBC.
//The train passes a RBC/RBC border with its front end.
//The train front passes the start of an announced radio hole
//Regards RIUs only: Level 1 is left
//A request shall be repeated immediately after EURORADIO has indicated that setting up the safe radio connection has failed.
//b) As soon as the safe radio connection is set-up, the on-board shall send the message Initiation of communication session to the trackside. 
//c) As soon as the trackside receives the information, it shall send the system version. 
//3.5.3.8 When the on-board receives the system version it shall consider the communication session established and:
//a) If one of its supported system versions is compatible with the one sent by trackside, it shall send a session established report, including its telephone numbers, to the trackside.
//b) If none of its supported system versions is compatible with the one sent by trackside, it shall send a version independent message indicating “No compatible version supported”. It shall inform the driver and shall terminate the communication session.
//3.5.3.9 When the trackside receives the session established report or the information that no compatible system version is supported by the on-board, it shall consider the communication session established.
//3.5.3.9.1 Intentionally deleted.
//
//Figure 1: Establishment initiated by on-board

//3.5.3.13 An order to contact the RBC may contain a special value for the RBC identity indicating that the on-board shall contact the last known RBC (i.e., using the stored RBC ID/phone number, if any); the phone number indicated in the order shall be ignored by the on-board equipment.
//3.5.3.13.1 If there is no RBC ID/ phone number stored on-board, the order to contact the RBC shall be ignored.
//3.5.3.14 Note: If a short number is used (considering trackside call routing), that number can be programmed into the balise instead of the normal phone number.
//3.5.3.15 An order to contact the RBC may contain a special value for the RBC phone number indicating that the on-board shall use the on-board short number.
//3.5.3.15.1 Note: The on-board stored short number for calling the RBC is defined by EIRENE.
//3.5.3.16 
//Option
//Balise data content
//Train reaction
//1
//Order to contact RBC
//Special value for RBC ID:
//Contact last known RBC
//RBC Phone number irrelevant
//Contact last known RBC (order is ignored in case no RBC ID/ phone number is stored on-board)
//2
//Order to contact RBC
//RBC ID
//  Special value for RBC phone number: use on-board stored short number
//Contact given RBC by using RBC ID and the on-board short number.
//Note: If the short number does not direct to the RBC with the given RBC ID, the connection will be terminated (EURORADIO functionality).
//3
//Order to contact RBC
//RBC ID + RBC phone number
//Contact given RBC by using RBC ID and the RBC phone number
//

    establish_communication_to_RBC(p_equip) =
    PRE
        p_equip :  t_equipment &
        equipment_class(p_equip) = RBC
    THEN
        skip
    END 
    ;
    
    
    //3.5.3.10 If the establishment of a communication session is initiated by the RBC, it shall be performed according to the following steps: 
//a) The trackside shall request the set-up of a safe radio connection with the on-board.
//b) As soon as the safe radio connection is set-up, the trackside shall send the message Initiation of communication session to the on-board. 
//c) When the on-board receives the information, it shall consider the communication session established and send a session established report to the trackside.
//d) When the trackside receives the session established report, it shall consider the communication session established.
//
//
//
//Figure 2: Establishment initiated by the RBC

//3.5.3.11 In case the RBC is the initiator, the first message from RBC to on-board shall have the time-stamp and the LRBG identity set to "unknown".
//3.5.3.12 Note: In the case the RBC is the initiator, there is no need to verify the compatibility of the system versions and for the on-board to send its telephone numbers, because the on-board is obviously already known to the RBC.

    establish_communication_from_RBC(p_equip) =
    PRE
        p_equip :  t_equipment &
        equipment_class(p_equip) = RBC
    THEN
        skip
    END 
    ;
    
    establish_communication_to_Accepting_RBC(p_equip) =
    PRE
        p_equip :  t_equipment &
        equipment_class(p_equip) = RBC
    THEN
        skip
    END 
    ;
    
    //3.5.3.6 The order to contact a Radio Infill Unit shall include
//a) The identity of the Radio Infill Unit
//b) The telephone number of the Radio Infill Unit
//c) The action to be performed (establish/terminate the session).
    establish_communication_to_RIU(p_equip) =
    PRE
        p_equip :  t_equipment &
        equipment_class(p_equip) = RIU
    THEN
        skip
    END 
    ;
    
    

//3.5.4 Maintaining a communication session

    maintain_communication(p_equip) =
    PRE
        p_equip :  t_equipment
    THEN
        // out of the scope of benchmark activities
        skip
    END 
    ;
    
    
//3.5.5 Terminating a communication session

    terminate_communication(p_equip) =
    PRE
        p_equip :  t_equipment
    THEN
        // out of the scope of benchmark activities
        skip
    END 
    

END
