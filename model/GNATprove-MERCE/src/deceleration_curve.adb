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
with Ada.Numerics.Generic_Elementary_Functions;
with GNAT.IO; use GNAT.IO;

package body Deceleration_Curve is
   Minimum_Valid_Speed : constant Speed_t := 0.1; -- m/s

   function Distance_To_Speed(Initial_Speed, Final_Speed: Speed_t;
                              Acceleration: Acceleration_t)
                              return Distance_t is
      speed : Speed_t := Initial_Speed;
      delta_speed : Speed_t;
      distance : Distance_t := 0;
   begin
      while speed > final_speed and speed > Minimum_Valid_Speed loop
         Pragma Assert (Minimum_Valid_Acceleration <= Acceleration
                        and Acceleration < 0.0);
         Pragma Assert (Minimum_Valid_Speed < speed and speed <= Initial_Speed);
         Pragma Assert (0.0 < 1.0/speed and 1.0/speed < 1.0 / Minimum_Valid_Speed);
         Pragma assert
           ((Speed_t(Minimum_Valid_Acceleration) / Minimum_Valid_Speed)
            <= Speed_t(Acceleration) / speed);
         Pragma assert
           ((Speed_t(Minimum_Valid_Acceleration) / Minimum_Valid_Speed)
              * Speed_t(Distance_Resolution)
            <= (Speed_t(Acceleration) / speed) * Speed_t(Distance_Resolution));

         delta_speed := (Speed_t(Acceleration) / speed)
           * Speed_t(Distance_Resolution);

         Pragma Assert
           ((Speed_t(Minimum_Valid_Acceleration) / Minimum_Valid_Speed)
            * Speed_t(Distance_Resolution) <= delta_speed
            and
              delta_speed < 0.0);

         speed := speed + delta_speed;

         distance := distance + Distance_Resolution;
      end loop;

      return distance;
   end;

   procedure Curve_From_Target(Target : Target_t;
                               Breaking_Curve : out Braking_Curve_t) is
      package Speed_Math is
        new Ada.Numerics.Generic_Elementary_Functions(Speed_t);
      use Speed_Math;

      speed : Speed_t := Target.speed;
      location : Distance_t := Target.location;
      a : constant Deceleration_t := 1.0;
   begin
      Breaking_Curve(Braking_Curve_Range'First).location := location;
      Breaking_Curve(Braking_Curve_Range'First).speed := speed;

      for i in
        Braking_Curve_Range'First + 1
          .. Braking_Curve_Range(Target.location / Distance_Resolution) loop

         speed :=
           (speed + Sqrt(speed * speed
            + Speed_t(4.0) * Speed_t(a) * Speed_t(Distance_Resolution))) / 2.0;
         if speed > Maximum_Valid_Speed then
            speed := Maximum_Valid_Speed;
         end if;

         location := Target.location - Distance_t(i) * Distance_Resolution;

         Breaking_Curve(i).location := location;
         Breaking_Curve(i).speed := speed;
      end loop;
   end Curve_From_Target;

   procedure Print_Curve(Breaking_Curve : Braking_Curve_t) is
   begin
      for i in Braking_Curve_Range loop
         Put(Distance_t'Image(Breaking_Curve(i).location));
         Put(",   ");
         Put(Speed_km_per_h_t'Image(
           km_per_h_From_m_per_s(Breaking_Curve(i).speed)));
         New_Line;

         if Breaking_Curve(i).location = 0 then exit; end if;
end loop;
   end Print_Curve;
end Deceleration_Curve;
