/* obu_principles
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
    obu_principles
    
SEES
    obu_types
    
ABSTRACT_VARIABLES
    V_TRAIN
    
INVARIANT
    V_TRAIN :  VITESSE
    
INITIALISATION
    
    V_TRAIN := 0
       
OPERATIONS
    
    initialize_data =
    BEGIN
        V_TRAIN :(
            V_TRAIN : VITESSE
            )
    END
    ; 
    
    principles_management =
    BEGIN
        V_TRAIN :(
            V_TRAIN : VITESSE
            )
    END
        
    ; 
    vv <--   lire_V_train = 
    BEGIN
        vv :(
            vv = V_TRAIN
            )
    END
        
END
