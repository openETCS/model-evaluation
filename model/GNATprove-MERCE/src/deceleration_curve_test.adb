with GNAT.IO; use GNAT.IO;
with Units; use Units;
with Deceleration_Curve; use Deceleration_Curve;

procedure Deceleration_Curve_Test is
   initial_speed : Speed_t := m_per_s_From_km_per_h(160.0); -- 160 km/h
begin
--        Put (Distance_t'Image(Distance_To_Speed(initial_speed, 0.0, -1.0)));
--        New_line;
   pragma Assert (Distance_To_Speed(initial_speed, 0.0, -1.0) = 1010);
end;
