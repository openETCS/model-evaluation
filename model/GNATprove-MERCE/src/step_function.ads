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

package Step_Function is
   type Num_Delimiters_Range is range 0 .. 10;

   type Function_Range is new Natural;

   type Delimiter_Entry is record
      Delimiter : Function_Range;
      Value : Float;
   end record;

   type Delimiter_Values is array (1..Num_Delimiters_Range'Last)
     of Delimiter_Entry;

   type Step_Function is record
      Default_Value : Float;
      Number_Of_Delimiters : Num_Delimiters_Range;
      Step : Delimiter_Values;
   end record;

   function Is_Valid_Step_Function(SFun : Step_Function) return Boolean is
     (for all i in 1..(SFun.Number_Of_Delimiters - 1) =>
        (SFun.Step(i+1).Delimiter > SFun.Step(i).Delimiter));

   function Has_Same_Delimiters(SFun1, SFun2 : Step_Function) return Boolean is
     (SFun1.Number_Of_Delimiters = SFun2.Number_Of_Delimiters
      and (for all i in 1.. SFun1.Number_Of_Delimiters =>
           SFun1.Step(i).Delimiter = SFun2.Step(i).Delimiter));

   function Get_Value(SFun : Step_Function; X: Function_Range) return Float
   with Pre => Is_Valid_Step_Function(SFun),
   Post => ((if SFun.Number_Of_Delimiters = 0 then
             Get_Value'Result = SFun.Default_Value)
            and
              (if SFun.Number_Of_Delimiters > 0 then
                 ((X < SFun.Step(1).Delimiter
                   and Get_Value'Result = SFun.Default_Value)
                  or
                    (for some i in 1..(SFun.Number_Of_Delimiters - 1) =>
                       (SFun.Step(i).Delimiter <= X
                        and X < SFun.Step(i+1).Delimiter
                        and Get_Value'Result = SFun.Step(i).Value))
                  or
                    (X >= SFun.Step(SFun.Number_Of_Delimiters).Delimiter
                     and Get_Value'Result
                     = SFun.Step(SFun.Number_Of_Delimiters).Value))));

end Step_Function;




