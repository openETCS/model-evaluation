/* RCM_types
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
    RCM_types
    
SETS
   
    t_equipment_class = {OBU, RBC,RIU} ;
    t_communication_state = {no_connection, on_board_requested, system_version_received, connection_etablished, termination_requested} 
    

CONCRETE_CONSTANTS
    t_equipment,
    equipment_class,
    c_equipment_undef,
    c_current_equipment,
    c_max_equipment,
    
    t_RNidentity,
    c_default_RNidentity
    
PROPERTIES
    
    c_max_equipment : NAT1 &
    t_equipment <: NAT &
    t_equipment = 0..c_max_equipment &
    c_equipment_undef : t_equipment &
    c_equipment_undef = 0 &
    
    c_current_equipment : t_equipment &
    c_current_equipment /=  c_equipment_undef &
    
    equipment_class : t_equipment +-> t_equipment_class &
    dom(equipment_class) = t_equipment - {c_equipment_undef} &
    
    equipment_class(c_current_equipment) = OBU &
    
    t_RNidentity = 0..999999 &
    c_default_RNidentity : t_RNidentity &
    c_default_RNidentity = 999999
    
    
OPERATIONS
    
    p_res <-- lire_t_equipment (p_equipment) =
    PRE
        p_equipment : t_equipment
    THEN
        p_res := bool(p_equipment : t_equipment- {c_equipment_undef} )
    END
    
END
