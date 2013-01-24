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

package body Section_3_5_3 is
   procedure Initiate_Communication_Session(destination : RBC_RIU_ID_t) is
   begin
      null;
   end;

   procedure Contact_RBC(RBC_identity : RBC_RIU_ID_t;
                         RBC_number : Telephone_Number_t;
                         Action : RBC_Contact_Action_t;
                         Apply_To_Sleeping_Units : Boolean) is
   begin
      null;
   end;

end;
