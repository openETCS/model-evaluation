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

package body Deceleration_Curve is
   Distance_Resolution : constant Distance_t := 10; -- m
   Maximim_Valid_Speed : constant Speed_t :=
     m_per_s_From_km_per_h(Maximum_Valid_Speed_km_per_h);

   function Distance_To_Speed(Initial_Speed, Final_Speed: Speed_t;
                              Acceleration: Acceleration_t)
                              return Distance_t is
      speed : Speed_t := Initial_Speed;
      distance : Distance_t := 0;
   begin
      loop
         Pragma Assert (speed > 0.0);
         speed := speed + (Speed_t(Acceleration) / speed)
           * Speed_t(Distance_Resolution);

         distance := distance + Distance_Resolution;

         exit when speed <= final_speed;
      end loop;

      return distance;
   end;
end Deceleration_Curve;
