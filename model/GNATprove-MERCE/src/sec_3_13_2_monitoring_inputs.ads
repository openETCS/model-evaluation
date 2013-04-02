--  copyright 2013 David MENTRE <d.mentre@fr.merce.mee.com>
--                                 -- Mitsubishi Electric R&D Centre Europe
--
--  Licensed under the EUPL V.1.1 or - as soon they will be approved by
--  the European Commission - subsequent versions of the EUPL (the
--  "Licence");
--  You may not use this work except in compliance with the Licence.
--
--  You may obtain a copy of the Licence at:
--
--    http://joinup.ec.europa.eu/software/page/eupl/licence-eupl
--
--  Unless required by applicable law or agreed to in writing, software
--  distributed under the Licence is distributed on an "AS IS" basis,
--  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
--  implied.
--
--  See the Licence for the specific language governing permissions and
--  limitations under the Licence.

-- Reference: UNISIG SUBSET-026-3 v3.3.0

with Units; use Units;
with Step_Function; use Step_Function;

package sec_3_13_2_monitoring_inputs is
   -- ** section 3.13.2.2.1 Introduction **

   -- SUBSET-026-3.13.2.2.1.1 not formalized (description)

   -- SUBSET-026-3.13.2.2.1.2 not formalized

   -- SUBSET-026-3.13.2.2.1.3
   type Breaking_Model_t is (Train_Data_Model, Conversion_Model);
   -- Only Train Data model is modelized
   Breaking_Model : constant Breaking_Model_t := Train_Data_Model;


   -- ** section 3.13.2.2.2 Traction model **

   -- SUBSET-026-3.13.2.2.2.1
   T_traction_cut_off : constant Time_t := 10.0; -- s -- FIXME: realistic value?

   -- SUBSET-026-3.13.2.2.2.2 not formalized (Note)


   -- ** section 3.13.2.2.3 Braking Models **

   -- SUBSET-026-3.13.2.2.3.1.1
   A_brake : Step_Function_t;

   -- SUBSET-026-3.13.2.2.3.1.2
   function Is_Valid_Deceleration_Model(S : Step_Function_t) return Boolean is
     (S.Number_Of_Delimiters <= 6); -- 6 delimiters for 7 steps

end sec_3_13_2_monitoring_inputs;

