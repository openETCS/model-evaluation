with Step_Function;

procedure Step_Function_Test is
   SFun1 : Step_Function.Step_Function :=
     (Default_Value => 3.0,
      Number_Of_Delimiters => 2,
      Step => ((Delimiter => 3, Value => 2.0),
               (Delimiter => 5, Value => 5.0),
               others => (Delimiter => 0, Value => 0.0)));

   SFun2 : Step_Function.Step_Function :=
     (Default_Value => 1.0,
      Number_Of_Delimiters => 2,
      Step => ((Delimiter => 3, Value => 1.0),
               (Delimiter => 5, Value => 3.0),
               others => (Delimiter => 0, Value => 0.0)));
begin
   Pragma Assert (Step_Function.Is_Valid_Step_Function(SFun1));

   Pragma Assert (Step_Function.Get_Value(SFun1, 0) = 3.0);
   Pragma Assert (Step_Function.Get_Value(SFun1, 1) = 3.0);
   Pragma Assert (Step_Function.Get_Value(SFun1, 3) = 2.0);
   Pragma Assert (Step_Function.Get_Value(SFun1, 4) = 2.0);
   Pragma Assert (Step_Function.Get_Value(SFun1, 5) = 5.0);
   Pragma Assert (Step_Function.Get_Value(SFun1,
     Step_Function.Function_Range'Last) = 5.0);

   Pragma Assert (Step_Function.Has_Same_Delimiters(SFun1, SFun2));
end;
