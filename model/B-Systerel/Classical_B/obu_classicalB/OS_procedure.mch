/* OS_procedure
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
    OS_procedure
    
    SEES
    obu_types
    
OPERATIONS
        
    mm <-- procedure_on_sight(cm, pm, pl) =
    PRE
        cm :  t_mode &
        pm :  t_mode &
        pl :  t_level &
        mm :  t_mode
    THEN
        mm :(
            mm : t_mode 
            )
    END
        
END
