/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */
#ifndef _RadioManagement_MoRC_System_Architecture_H_
#define _RadioManagement_MoRC_System_Architecture_H_

#include "kcg_types.h"
#include "MoRC_withSimplified_IF.h"

/* ========================  input structure  ====================== */
typedef struct {
  tOB_Status_MoRC_System_Architecture /* MoRC_System::Architecture::RadioManagement::OB_Status */ OB_Status;
  tOrderToRM_MoRC_System_Architecture /* MoRC_System::Architecture::RadioManagement::OrderToRM */ OrderToRM;
  tRadioNetworkIDs_toRM_MoRC_System_Architecture /* MoRC_System::Architecture::RadioManagement::RadioNetworkIDs */ RadioNetworkIDs;
  tSafeRadioCommStatus_MoRC_System_Architecture /* MoRC_System::Architecture::RadioManagement::SafeRadioComStatus */ SafeRadioComStatus;
} inC_RadioManagement_MoRC_System_Architecture;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  tRM_Status_MoRC_System_Architecture /* MoRC_System::Architecture::RadioManagement::RM_Status */ RM_Status;
  tOrderToRBC_MoRC_System_Architecture /* MoRC_System::Architecture::RadioManagement::OrderToRBC */ OrderToRBC;
  tSafeRadioCommCmd_MoRC_System_Architecture /* MoRC_System::Architecture::RadioManagement::SafeRadioComCmd */ SafeRadioComCmd;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MoRC_withSimplified_IF /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_RadioManagement_MoRC_System_Architecture;

/* ===========  node initialization and cycle functions  =========== */
/** Top level operator for the "Management of Radio Commiunication". */
/** The operator was generated from the accompanied "MoRC_System" SysML model and incorporates the existing MoRC SCADE model. */
/** By this way it serves as an encapsulation of "MoRC_withSimplified_IF" in that model. */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2013-09-12", DateM = "Modified : 2013-09-12", Version = "00.00.01"} */
/** "Remark_1" {Description = "- Name: RadioManagement - Description: Implements SUBSET-026-3, ISSUE : 3.3.0, "3.5 Management of Radio Communication" - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.   THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/* MoRC_System::Architecture::RadioManagement */
extern void RadioManagement_MoRC_System_Architecture(
  inC_RadioManagement_MoRC_System_Architecture *inC,
  outC_RadioManagement_MoRC_System_Architecture *outC);

extern void RadioManagement_reset_MoRC_System_Architecture(
  outC_RadioManagement_MoRC_System_Architecture *outC);

#endif /* _RadioManagement_MoRC_System_Architecture_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioManagement_MoRC_System_Architecture.h
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

