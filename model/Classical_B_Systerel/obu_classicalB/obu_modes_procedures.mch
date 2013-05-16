/* obu_modes_procedures
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
    obu_modes_procedures
    
SEES
    obu_types
    
VARIABLES
    
    M_mode, previous_mode
    ,
    M_level, previous_level
    ,
    procedure
    
INVARIANT
    
    M_mode : t_mode
    &
    previous_mode : t_mode
    &
    M_level : t_level
    &
    previous_level : t_level
    &
    procedure : t_procedure
    
    //&
    // PROPERTY_4.6.2_02 :
    // OBU shall never leave Isolated mode (no transition from Isolation is specified)
	// previous_mode = ISo => M_mode = ISo
    
    
INITIALISATION
    
    M_mode := NP
    ||
    previous_mode := NP
    ||
    M_level := level_0
    ||
    previous_level := level_0
    ||
    procedure := NoProcedure
    
OPERATIONS
    
    intialize_mode =
    BEGIN
        M_mode,
        M_level :(
            M_mode : t_mode &
          	M_level : t_level
            )
    END
    ; 
    
    modes_procedures_management(vv) =
    PRE
        vv : VITESSE &
        M_mode : t_mode &
    	previous_mode : t_mode &
    	M_level : t_level &
    	previous_level : t_level &
    	procedure : t_procedure
    THEN
        M_mode,
        previous_mode,
        M_level,
        previous_level,
        procedure :(
        	M_mode : t_mode &
    		previous_mode : t_mode &
    		M_level : t_level &
    		previous_level : t_level &
    		procedure : t_procedure
            )
        END
        
    ; 
    mm <--   lire_mode = 
    BEGIN
        mm :(
            mm = M_mode
            )
    END
    
    ; 
    ll <--   lire_level = 
    BEGIN
        ll :(
            ll = M_level
            )
    END
        
END
