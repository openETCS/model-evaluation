/* main_obu
 * Author: Marielle Petit-Doche <marielle.doche@systerel.fr> --Systerel
 * Creation date: 07/05/2013

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
    main_obu
    
    /*  This Machine specifies the main sequencer of the on-board unit software.
    Two operations are defined : 
    - power_up launched when the system is powered on
    - cycle the main operation called by the hardware at each applicative cycle.
    */
    
    OPERATIONS
    
    power_up =
    BEGIN
        skip
    END ;
    
    cycle =
    BEGIN
        skip
    END



END
