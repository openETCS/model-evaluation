/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-04-10T10:44:31
*************************************************************$ */
#ifndef _MoRC_initiateTerminatingASession_H_
#define _MoRC_initiateTerminatingASession_H_

#include "kcg_types.h"
#include "MoRC_waitAndRepeatTimer.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* initiateTerminatingASession::initiateTermination */ initiateTermination;
  kcg_bool /* initiateTerminatingASession::sendAPositionReport */ sendAPositionReport;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MoRC_SSM_ST_TrainExitedFromRBCArea_SM /* initiateTerminatingASession::TrainExitedFromRBCArea_SM */ TrainExitedFromRBCArea_SM_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  MoRC_outC_waitAndRepeatTimer /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_initiateTerminatingASession;

/* ===========  node initialization and cycle functions  =========== */
/** Subset 096, REQ 3.5.5.1 */
/** Initiates and processes the termination of a communication session. */
/** "Remark_1" {Description = "- Name: initiateTerminatingASession - Description: Initiates and processes the termination of a communication session.  - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* initiateTerminatingASession */
extern void MoRC_initiateTerminatingASession(
  /* initiateTerminatingASession::orderReceivedFromTrackside */MoRC_orderToContactAnRBC_Type *orderReceivedFromTrackside,
  /* initiateTerminatingASession::errorConditionRequiringTerminationDetected */kcg_bool errorConditionRequiringTerminationDetected,
  /* initiateTerminatingASession::trainIsRejectedByRBC_duringStartOfMission */kcg_bool trainIsRejectedByRBC_duringStartOfMission,
  /* initiateTerminatingASession::driverClosesTheDeskduringStartOfMission */kcg_bool driverClosesTheDeskduringStartOfMission,
  /* initiateTerminatingASession::trainExitedFromAnRBCArea */kcg_bool trainExitedFromAnRBCArea,
  /* initiateTerminatingASession::receivedOrderToTerminateTheSession */MoRC_orderToContactAnRBC_Type *receivedOrderToTerminateTheSession,
  /* initiateTerminatingASession::actualTime */MoRC_time_Type actualTime,
  /* initiateTerminatingASession::isInCommunicationSessionWithAnRIU */kcg_bool isInCommunicationSessionWithAnRIU,
  /* initiateTerminatingASession::level_1_isLeft */kcg_bool level_1_isLeft,
  /* initiateTerminatingASession::endOfMissionIsExecuted */kcg_bool endOfMissionIsExecuted,
  MoRC_outC_initiateTerminatingASession *outC);

extern void MoRC_initiateTerminatingASession_reset(
  MoRC_outC_initiateTerminatingASession *outC);

#endif /* _MoRC_initiateTerminatingASession_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_initiateTerminatingASession.h
** Generation date: 2013-04-10T10:44:31
*************************************************************$ */

