/* RCM_communication
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
    RCM_communication
    
    
SEES
    RCM_types
    

ABSTRACT_VARIABLES
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
    
    connection_state : t_equipment +-> t_communication_state &
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
    
    // 3.5.3, 3.5.4, 3.5.5 Establishing, Maintaining and terminating
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
    		connection_state[dom(equipment_class |>{OBU}) ] <:  {no_connection} &
    		communication_session_requested :  BOOL

        )    
     END
     ;
     
// 3.5.6 Registering to  the Radio Network
    register_to_radio_network = 
    BEGIN
        // out of the scope of benchmark activities
        skip
    END
    ;
 

// 3.5.7 Safe Radio Connection Indication
    manage_safe_indication = 
    BEGIN
        // out of the scope of benchmark activities
        skip
    END

END
