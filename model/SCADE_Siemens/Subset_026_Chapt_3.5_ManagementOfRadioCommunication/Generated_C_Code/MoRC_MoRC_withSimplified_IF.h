/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-04-10T10:44:31
*************************************************************$ */
#ifndef _MoRC_MoRC_withSimplified_IF_H_
#define _MoRC_MoRC_withSimplified_IF_H_

#include "kcg_types.h"
#include "MoRC_managementOfRadioCommunication.h"

/* ========================  input structure  ====================== */
typedef struct {
  MoRC_NID_MESSAGE_Type /* MoRC_withSimplified_IF::messageFromRBC */ messageFromRBC;
  kcg_bool /* MoRC_withSimplified_IF::safeRadioCommunication_setUpEstablished */ safeRadioCommunication_setUpEstablished;
  MoRC_NID_RBC_Type /* MoRC_withSimplified_IF::NID_RBC_ID */ NID_RBC_ID;
  MoRC_radioHoleStatus_Type /* MoRC_withSimplified_IF::radioHole_status */ radioHole_status;
  MoRC_onBoardOrder_Type /* MoRC_withSimplified_IF::orderFromOnBoard */ orderFromOnBoard;
  kcg_bool /* MoRC_withSimplified_IF::systemVersionIsCompatible */ systemVersionIsCompatible;
  MoRC_M_LEVEL_Type /* MoRC_withSimplified_IF::M_Level */ M_Level;
  MoRC_M_MODE_Type /* MoRC_withSimplified_IF::M_Mode */ M_Mode;
  MoRC_time_Type /* MoRC_withSimplified_IF::actualTime */ actualTime;
} MoRC_inC_MoRC_withSimplified_IF;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MoRC_NID_MESSAGE_Type /* MoRC_withSimplified_IF::messageToRBC */ messageToRBC;
  kcg_bool /* MoRC_withSimplified_IF::safeRadioCommunication_requestSetUp */ safeRadioCommunication_requestSetUp;
  kcg_bool /* MoRC_withSimplified_IF::safeRadioCommunication_releaseSetUp */ safeRadioCommunication_releaseSetUp;
  kcg_bool /* MoRC_withSimplified_IF::radioComSesssionEstablished */ radioComSesssionEstablished;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  MoRC_outC_managementOfRadioCommunication /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_MoRC_withSimplified_IF;

/* ===========  node initialization and cycle functions  =========== */
/** "Remark_1" {Description = "- Name: managementOfRadioCommunication - Description: This a interface adapter at the top level of the "Management of Radio Communication" function - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* MoRC_withSimplified_IF */
extern void MoRC_MoRC_withSimplified_IF(
  MoRC_inC_MoRC_withSimplified_IF *inC,
  MoRC_outC_MoRC_withSimplified_IF *outC);

extern void MoRC_MoRC_withSimplified_IF_reset(
  MoRC_outC_MoRC_withSimplified_IF *outC);

#endif /* _MoRC_MoRC_withSimplified_IF_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_MoRC_withSimplified_IF.h
** Generation date: 2013-04-10T10:44:31
*************************************************************$ */

