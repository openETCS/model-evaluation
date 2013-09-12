/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */
#ifndef _MoRC_withSimplified_IF_H_
#define _MoRC_withSimplified_IF_H_

#include "kcg_types.h"
#include "FallingEdge_digital.h"
#include "managementOfRadioCommunication.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_MESSAGE_Type /* MoRC_withSimplified_IF::messageToRBC */ messageToRBC;
  kcg_bool /* MoRC_withSimplified_IF::safeRadioCommunication_requestSetUp */ safeRadioCommunication_requestSetUp;
  kcg_bool /* MoRC_withSimplified_IF::safeRadioCommunication_releaseSetUp */ safeRadioCommunication_releaseSetUp;
  kcg_bool /* MoRC_withSimplified_IF::radioComSesssionEstablished */ radioComSesssionEstablished;
  radioNetworkID_Type /* MoRC_withSimplified_IF::actualRadioNetworkID */ actualRadioNetworkID;
  mobileHWAction_Type /* MoRC_withSimplified_IF::mobileHWCmd */ mobileHWCmd;
  kcg_bool /* MoRC_withSimplified_IF::memorizeTheLastRadioNetworkID */ memorizeTheLastRadioNetworkID;
  mobileSWConnectionStatus_Type /* MoRC_withSimplified_IF::mobileSWStatus */ mobileSWStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FallingEdge_digital /* 1 */ _1_Context_1;
  outC_managementOfRadioCommunication /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_MoRC_withSimplified_IF;

/* ===========  node initialization and cycle functions  =========== */
/** "Remark_1" {Description = "- Name: managementOfRadioCommunication - Description: This a interface adapter at the top level of the "Management of Radio Communication" function - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* MoRC_withSimplified_IF */
extern void MoRC_withSimplified_IF(
  /* MoRC_withSimplified_IF::messageFromRBC */NID_MESSAGE_Type messageFromRBC,
  /* MoRC_withSimplified_IF::safeRadioCommunication_setUpEstablished */kcg_bool safeRadioCommunication_setUpEstablished,
  /* MoRC_withSimplified_IF::NID_RBC_ID */NID_RBC_Type NID_RBC_ID,
  /* MoRC_withSimplified_IF::radioHole_status */radioHoleStatus_Type radioHole_status,
  /* MoRC_withSimplified_IF::orderFromOnBoard */onBoardOrder_Type orderFromOnBoard,
  /* MoRC_withSimplified_IF::systemVersionIsCompatible */kcg_bool systemVersionIsCompatible,
  /* MoRC_withSimplified_IF::M_Level */M_LEVEL_Type M_Level,
  /* MoRC_withSimplified_IF::M_Mode */M_MODE_Type M_Mode,
  /* MoRC_withSimplified_IF::actualTime */time_Type actualTime,
  /* MoRC_withSimplified_IF::RadioNetworkID_memorized */radioNetworkID_Type RadioNetworkID_memorized,
  /* MoRC_withSimplified_IF::RadioNetworkID_fromDriver */radioNetworkID_Type RadioNetworkID_fromDriver,
  /* MoRC_withSimplified_IF::RadioNetworkID_fromTrackside */radioNetworkID_Type RadioNetworkID_fromTrackside,
  /* MoRC_withSimplified_IF::powerAvailable */kcg_bool powerAvailable,
  /* MoRC_withSimplified_IF::mobileHWConnectionStatus */mobileHWConnectionStatus_Type mobileHWConnectionStatus,
  outC_MoRC_withSimplified_IF *outC);

extern void MoRC_withSimplified_IF_reset(outC_MoRC_withSimplified_IF *outC);

#endif /* _MoRC_withSimplified_IF_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_withSimplified_IF.h
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

