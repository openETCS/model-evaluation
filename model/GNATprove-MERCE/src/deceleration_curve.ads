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

with Units; use Units;

package Deceleration_Curve is
   Maximum_Valid_Speed : constant Speed_t :=
     m_per_s_From_km_per_h(Maximum_Valid_Speed_km_per_h);
   Minimum_Valid_Acceleration : constant Acceleration_t := -10.0; -- FIXME: realistic value?

   function Distance_To_Speed(Initial_Speed, Final_Speed: Speed_t;
                              Acceleration: Acceleration_t)
                              return Distance_t
   with
     Pre => (Initial_Speed > 0.0 and Final_Speed >= 0.0
             and
               Initial_Speed <= Maximum_Valid_Speed
             and
               Initial_Speed > Final_Speed
             and
               Acceleration < 0.0
             and
               Acceleration >= Minimum_Valid_Acceleration);
end Deceleration_Curve;
