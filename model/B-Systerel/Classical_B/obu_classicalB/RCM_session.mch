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
    RCM_types
    
   
OPERATIONS
    
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
//3.5.4.1 When a communication session is established, in case of a loss of the safe radio connection, i.e., if the disconnection has not been ordered (see 3.5.5.1), the involved entities shall consider the communication session still established for a defined time. The defined time shall start as soon as EURORADIO has indicated the loss of the safe radio connection.
//3.5.4.2 When EURORADIO indicates the loss of the safe radio connection, the ERTMS/ETCS on-board equipment shall immediately try to set-up a new safe radio connection.
//3.5.4.2.1 If the safe radio connection is not re-established after the defined time (as defined in A3.1), both, on-board equipment and trackside, shall consider the session as terminated.
//3.5.4.3 The attempts shall be repeated, until at least one of the following conditions is met:
//The safe radio connection is set-up.
//The session is considered as terminated.
//The train passes the location indicated in the RIU order “Terminate the communication session”
//3.5.4.3.1 Note: if the session is considered as terminated due to 3.5.4.2.1, the attempts will be resumed immediately according to 3.5.3.4 f).
//3.5.4.4 Exception to 3.5.4.2 and 3.5.4.3: the on-board equipment shall not try to set up a new safe radio connection and shall stop any on-going attempts if the train front is inside an announced radio hole (see 3.12.1.3). The on-board equipment shall try to set it up again when the train front reaches the end of the radio hole.
//3.5.4.5 In case a message has to be sent during the loss of the safe radio connection, this message shall be considered as sent.

    maintain_communication(p_equip) =
    PRE
        p_equip :  t_equipment
    THEN
        skip
    END 
    ;
    
    
//3.5.5 Terminating a communication session
//3.5.5.1 The termination of a communication session shall be initiated only by the on-board and in the following cases:
//a) If an order is received from trackside (RBC, RIU or balise groups) (see sections 3.5.3.5 and 3.5.3.6 concerning the content of the order).
//b) If an error condition requiring the termination of the communication session is detected on-board (e.g., not compatible system versions between on-board and trackside).
//c) The train is rejected by RBC during Start of Mission.
//d) If the driver closes the desk during Start of Mission.
//e) In case the train has reported having exited from an RBC area and no order to terminate the session is received within a fixed waiting time (see Appendix A.3.1) from the time the position report was sent, the ERTMS/ETCS on-board equipment shall repeatedly send a position report with the fixed waiting time after each repetition, until the order to terminate the session is received, or the defined number of repetitions (see Appendix A.3.1) has been reached. If no reply is received within the fixed waiting time after the last repetition, the ERTMS/ETCS on-board equipment shall terminate the communication session.
//f) In case of communication session with an RIU: the Level 1 is left, or, an End of Mission is executed.
//3.5.5.2 In case a session is established, the on-board equipment shall terminate the communication session according to the following steps:
//a) The on-board equipment shall send a Termination of communication session message. 
//b) As soon as this information is received, the trackside shall consider the communication session terminated and send an acknowledgement to the on-board.
//c) When the acknowledgement is received the on-board shall consider the communication session terminated and request the release of the safe radio connection with trackside.
//
//
//Figure 3: Termination of a communication session
//
//3.5.5.3 No further message shall be sent by the on-board after the message Termination of communication session.
//3.5.5.3.1 Exception: In case a communication session is established and no acknowledgement is received within a fixed waiting time (see Appendix A.3.1) after sending the “Termination of communication session” message, the message shall be repeated with the fixed waiting time after each repetition.
//3.5.5.3.2 After a defined number of repetitions (see Appendix A.3.1), and if no acknowledgment is received within the fixed waiting time from the time of the last sending of “Termination of communication session”, the ERTMS/ETCS onboard equipment shall consider the communication session terminated.
//3.5.5.4 No further message shall be sent by the trackside after the message Acknowledgement of the termination of communication session.
//3.5.5.5 The information Termination of Communication Session and corresponding Acknowledgement shall be the same in every system version.
//3.5.5.6 Messages from the RBC received onboard after the message “Termination of communication session” has been sent shall be ignored with the exception of the Acknowledgement of the termination of communication session.
//3.5.5.7 In case an order to terminate the communication session is received, while the communication session is currently being established, the on-board shall abort the process of establishing it and shall release the safe radio connection.

    terminate_communication(p_equip) =
    PRE
        p_equip :  t_equipment
    THEN
        skip
    END 
    

END
