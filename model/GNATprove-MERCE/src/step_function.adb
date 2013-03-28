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

package body Step_Function is
   function Min(X1, X2 : Float) return Float is
   begin
      if X1 <= X2 then return X1; else return X2; end if;
   end;

   function Get_Value(SFun : Step_Function; X: Function_Range) return Float is
   begin
      for i in Num_Delimiters_Range'First..(SFun.Number_Of_Delimiters - 1) loop
         Pragma Assert (for all j in 1..i =>
                          X >= SFun.Step(j).Delimiter);
         if X >= SFun.Step(i).Delimiter and X < SFun.Step(i + 1).Delimiter then
            return SFun.Step(i).Value;
         end if;
      end loop;

      return SFun.Step(SFun.Number_Of_Delimiters).Value;
   end Get_Value;

   procedure Index_Increment(SFun: Step_Function;
                             i: in out Num_Delimiters_Range;
                             scan: in out Boolean) is
   begin
      if i < SFun.Number_Of_Delimiters then
         i := i + 1;
      else
         scan := False;
      end if;
   end;

   procedure Restrictive_Merge(SFun1, SFun2 : in Step_Function;
                               Merge : out Step_Function) is
--     begin
--        null;
--     end;
      i1 : Num_Delimiters_Range := 0;
      i2 : Num_Delimiters_Range := 0;
      im : Num_Delimiters_Range := 0;
      scan_sfun1 : Boolean := True;
      scan_sfun2 : Boolean := True;
   begin
      while scan_sfun1 or scan_sfun2 loop

         -- im, i1 and i2 bounds
         Pragma Assert (i1 <= SFun1.Number_Of_Delimiters);
         Pragma Assert (i2 <= SFun2.Number_Of_Delimiters);
         Pragma Assert (im < Num_Delimiters_Range'Last);

         -- Merge is a valid step function until im
         Pragma Assert (for all i in 0..im-1 =>
                          Merge.Step(i).Delimiter < Merge.Step(i+1).Delimiter);

         -- All merged delimiters are coming from valid delimiter in SFun1 or
         -- SFun2
         Pragma Assert
           (for all i in 1..i1 =>
              ((for some j in 1..im =>
                  SFun1.Step(i).Delimiter = Merge.Step(j).Delimiter)));
         Pragma Assert
           (for all i in 1..i2 =>
              ((for some j in 1..im =>
                  SFun2.Step(i).Delimiter = Merge.Step(j).Delimiter)));

         -- Merged value at a delimiter is the minimum of both step functions
         Pragma Assert
           (for all i in 0..im-1 =>
              Merge.Step(i).Value =
              Min(Get_Value(SFun1, Merge.Step(i).Delimiter),
                Get_Value(SFun2, Merge.Step(i).Delimiter)));

         if scan_sfun1 and scan_sfun2 then
            -- select on delimiter from SFun1 or SFun2
            if SFun1.Step(i1).Delimiter < SFun2.Step(i2).Delimiter then
               Merge.Step(im).Delimiter := SFun1.Step(i1).Delimiter;
               Merge.Step(im).Value :=
                 Min(Get_Value(SFun1, Merge.Step(im).Delimiter),
                     Get_Value(SFun2, Merge.Step(im).Delimiter));
               Index_Increment(SFun1, i1, scan_sfun1);

            elsif SFun1.Step(i1).Delimiter > SFun2.Step(i2).Delimiter then
               Merge.Step(im).Delimiter := SFun2.Step(i2).Delimiter;
               Merge.Step(im).Value :=
                 Min(Get_Value(SFun1, Merge.Step(im).Delimiter),
                     Get_Value(SFun2, Merge.Step(im).Delimiter));
               Index_Increment(SFun2, i2, scan_sfun2);

            else -- SFun1.Step(i1).Delimiter = SFun2.Step(i2).Delimiter
               Merge.Step(im).Delimiter := SFun1.Step(i1).Delimiter;
               Merge.Step(im).Value :=
                 Min(Get_Value(SFun1, Merge.Step(im).Delimiter),
                     Get_Value(SFun2, Merge.Step(im).Delimiter));
               Index_Increment(SFun1, i1, scan_sfun1);
               Index_Increment(SFun2, i2, scan_sfun2);
            end if;
         elsif scan_sfun1 then
            -- only use SFun1 delimiter
            Merge.Step(im).Delimiter := SFun1.Step(i1).Delimiter;
            Merge.Step(im).Value :=
              Min(Get_Value(SFun1, Merge.Step(im).Delimiter),
                  Get_Value(SFun2, Merge.Step(im).Delimiter));
            Index_Increment(SFun1, i1, scan_sfun1);
         else -- scan_sfun2
              -- only use SFun2 delimiter
               Merge.Step(im).Delimiter := SFun2.Step(i2).Delimiter;
               Merge.Step(im).Value :=
                 Min(Get_Value(SFun1, Merge.Step(im).Delimiter),
                     Get_Value(SFun2, Merge.Step(im).Delimiter));
            Index_Increment(SFun2, i2, scan_sfun2);
         end if;

         if scan_sfun1 or scan_sfun2 then im := im + 1; end if;
      end loop;

      Merge.Number_Of_Delimiters := im;
   end Restrictive_Merge;

end Step_Function;
