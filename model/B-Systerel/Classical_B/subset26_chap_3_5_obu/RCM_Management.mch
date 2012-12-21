/* RCM_Management
 * Author: Marielle Petit-Doche <marielle.doche@systerel.fr> --Systerel
 * Creation date: 17/12/12

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
    RCM_Management
    
SEES
    RCM_types
    
CONCRETE_VARIABLES
    connected_equipment,
    connection_state,
    communication_session_requested
    
INVARIANT
    
  
    //3.5.2.1 Each communication session managed by an entity shall allow the exchange of data with only one other entity.
    // => We suppose that the equipment can communicate with several equipments in the same time, however each communication channel can be use only between two equipments. This is specified in B by construction :  the current equipment is connected to a set of other equipment. This shall be validated during the integration phase of this function in the whole system.
    connected_equipment <: t_equipment &
    
  	// => We suppose that each equipment does not communicate with itself
  	c_current_equipment /: connected_equipment &
  	
    //3.5.3.3 Note: Only communication sessions between an ERTMS/ETCS on-board equipment and a trackside equipment (RBC or Radio Infill Unit) are considered here.
    connected_equipment <: dom(equipment_class |>{RBC, RIU }) &
    
    connection_state : t_equipment --> t_communication_state &
    connection_state(c_equipment_undef) = no_connection &
    connection_state[dom(equipment_class |>{OBU}) ] <:  {no_connection} &


//3.5.3.4 The on-board shall establish a communication session...
    communication_session_requested :  BOOL
  
//3.5.2 General

//3.5.2.2 Note: in the following sections reference is made to safe radio connections, whose definition and management is contained in Euroradio specification.
//3.5.2.3 The information Initiation of a Communication Session and Version not Compatible (see sections 3.5.3 and 3.1.17) shall be the same in every system version.


INITIALISATION
    connected_equipment := {} ||
    connection_state := t_equipment * {no_connection} ||
    
    //3.5.3.4 The on-board shall establish a communication session
//a) At Start of Mission (only if level 2 or 3).
    communication_session_requested := TRUE
    
OPERATIONS
    
    manage_communication = 
    BEGIN
        connected_equipment,
        connection_state,
        communication_session_requested :(
            connected_equipment <: t_equipment &
            c_current_equipment /: connected_equipment &
            connected_equipment <: dom(equipment_class |>{RBC, RIU }) &
            connection_state : t_equipment --> t_communication_state &
    		connection_state(c_equipment_undef) = no_connection &
   			connection_state[dom(equipment_class |>{OBU}) ] <:  {no_connection} 

        )    
        END
        ;
        
 

//3.5.7 Safe Radio Connection Indication
//3.5.7.1 The ERTMS/ETCS on-board equipment shall inform the driver about the status of the safe radio connection. To that purpose, the following indication statuses of the safe radio connection are defined: “No Connection”, “Connection Lost/Set-Up failed”, “Connection Up”.
//3.5.7.2 In addition, the ERTMS/ETCS on-board equipment shall use a “connection status” timer (see Appendix A.3.1), in order to manage properly the transitions to the indication status “Connection Lost/Set-Up failed”.
//3.5.7.2.1 Note: The purpose of the “connection status” timer is to avoid distracting the driver for any short disturbance of the safe radio connection.
//3.5.7.3 The ERTMS/ETCS on-board equipment shall start the “connection status” timer as soon as the first request to set-up a safe radio connection with the relevant RBC/RIU is sent:
//a) for what regards the session establishment, see items b), c), d), e) in 3.5.3.4.
//b) for what regards maintaining a communication session, see 3.5.4.2 and 3.5.4.4
//3.5.7.4 If the “connection status” timer is ongoing, it shall be stopped if the requests to set-up a safe radio connection are stopped with the relevant RBC/RIU.
//3.5.7.5 The ERTMS/ETCS on-board equipment shall execute the transitions between the different indication statuses of the safe radio connection with the relevant RBC/RIU as described in Table 1 according to the conditions in Table 2 (see section 4.6.1 for details about the symbols).
//No Connection
//< 3
//-p2-
//< 5, 6, 7
//-p1-
//1, 2 >
//-p2-
//Connection Lost /
//Set-Up failed
//<2
//-p2-
//4 >
//-p1-
//4 >
//-p1-
//Connection Up
//Table 1: Transitions between the indication statuses of the safe radio connection
//
//Condition Id
//Content of the conditions
//[1]
//(a Start of mission procedure is on-going) AND (the final attempt to set-up the safe radio connection failed)
//[2]
//(the “connection status” timer expires)
//[3]
//(no Start of mission procedure is on-going) AND (the requests to set-up a safe radio connection are stopped with the relevant RBC/RIU for reason other than the successful set-up)
//[4]
//(the safe radio connection is set-up)
//[5]
//(the safe radio connection is released)
//[6]
//(the safe radio connection is lost) AND (the requests to set-up a safe radio connection are stopped with the relevant RBC/RIU for reason other than the successful set-up)
//[7]
//(the safe radio connection is lost) AND (the train front is inside an announced radio hole)
//Table 2: Transition conditions for the indication statuses of the safe radio connection
//3.5.7.6 For the case of an RBC/RBC transition, the safe radio connection indicated to the driver shall switch from the indication status of the safe radio connection with the Handing over RBC to the one with the Accepting RBC as soon as one of the following conditions is met:
//a) the ERTMS/ETCS on-board equipment sends a position report directly to the Accepting RBC with its maximum safe front end having passed the border, see 3.15.1.3.5 (i.e. the Accepting RBC becomes the supervising RBC),
//b) the safe radio connection is released with the Handing over RBC and the minimum safe rear end of the train has crossed the border, see 3.5.5.1 e) and 3.15.1.2.7.
//3.5.7.6.1 Note: During an RBC/RBC handover procedure, an indication status transition table and a connection status timer might have to be managed at the same time, for each RBC.
//3.5.7.7 For the case of safe radio connection with RIU’s, the safe radio connection indicated to the driver shall be the one related to the current infill area.

    manage_safe_indication = 
    BEGIN
        skip
    END
    
    

END
