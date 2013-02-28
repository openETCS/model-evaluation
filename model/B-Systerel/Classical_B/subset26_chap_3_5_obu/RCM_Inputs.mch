/* RCM_Inputs
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
    RCM_Inputs
    
VARIABLES
    M_LEVEL, // §7.5.1.65 : Current Operating Level
    M_LEVEL_TR, // §7.5.1.67 : Required level
    M_VERSION, // §7.5.... : Version of ETCS system
    NID_MN, // §7.5.11.91.1 : Identity of Radio Network
    NID_RADIO, // §7.5.1.95 : Radio subscriber number.
    NID_RBC, // §7.5.1.96 : RBC ETCS identity number
	NID_RIU, // §7.5.1.97 : Identity of radio infill unit
	Q_RBC, // §7.5.1.127 : Qualifier for communication session order
	Q_RIU //§7.5.1.128 : Qualifier for communication session order


    
INVARIANT
    
    M_LEVEL : 0..7 &
    M_LEVEL_TR : 0..7 &
    M_VERSION : 0..127 &
    NID_MN : 0..999999 & 
    NID_RADIO  : NAT &
    NID_RBC : 0..16383 & // 16383 : Contact last known RBC 
    NID_RIU : 0..16383 &
    Q_RBC : 0..1 &
    Q_RIU : 0..1
    
INITIALISATION
    M_LEVEL := 0 ||
    M_LEVEL_TR := 0 ||
    M_VERSION := 0 ||
    NID_MN := 0 || 
    NID_RADIO  := 0 ||
    NID_RBC := 0 || 
    NID_RIU := 0 ||
    Q_RBC := 0 ||
    Q_RIU := 0 
    
    
OPERATIONS
    
    read_inputs =
    BEGIN
        skip
    END
    





END
