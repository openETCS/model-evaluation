/* obu_types
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
    obu_types
    
SETS
    
    /* List of possible ETCS modes - Subset 026 §  4.3.2
    4.3.2.1 List of the modes:
    Full Supervision (FS)
    Limited Supervision (LS)
	On Sight (OS)
	Staff Responsible (SR)
	Shunting (SH)
	Unfitted (UN)
	Passive Shunting (PS)
	Sleeping (SL)
	Stand By (SB)
	Trip (TR)
	Post Trip (PT)
	System Failure (SF)
	Isolation (IS) -> ISo  to avoid clash with B  keyword
	No Power (NP)
	Non Leading (NL)
	National System (SN)
	Reversing (RV)
*/
t_mode = {FS, LS, OS, SR, SH, UN, PS, SL, SB, TR, PT, SF, ISo, NP, NL, SN, RV}
;
t_mamode = {ma_OS, ma_SH, ma_LS, ma_unknown}
;
t_level = {level_0, level_1, level_2, level_3, level_NTC}
;
t_procedure = {NoProcedure, StartOfMission, EndOfMission, SHInitiatedByDriver, SHOrderFromTrackside, Override, OnSight, LevelTransitions, TrainTrip, ChangeTrainOrientation, TrainReversing, Joining, Splitting, RBCHandover, LevelCrossing, ChangingTrainData, TrackConditions, LimitedSupervision}

CONSTANTS
    VITESSE
    
PROPERTIES
    VITESSE <: NAT &
    VITESSE = 0..600

END
