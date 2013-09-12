/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */
#ifndef _maintaining_a_CommunicationSession_H_
#define _maintaining_a_CommunicationSession_H_

#include "kcg_types.h"
#include "countDownTimer.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* maintaining_a_CommunicationSession::tryToSetupANewSafeRadioConnection */ tryToSetupANewSafeRadioConnection;
  kcg_bool /* maintaining_a_CommunicationSession::informTheDriverThatNoConnectionWasSetup */ informTheDriverThatNoConnectionWasSetup;
  kcg_bool /* maintaining_a_CommunicationSession::firstRequestToSetupASafeRadioConnection */ firstRequestToSetupASafeRadioConnection;
  kcg_bool /* maintaining_a_CommunicationSession::finalAttemptToSetupTheSafeRadioConnectionFailed */ finalAttemptToSetupTheSafeRadioConnectionFailed;
  kcg_bool /* maintaining_a_CommunicationSession::requestsToSetupTheSafeRadioConnectionStopped */ requestsToSetupTheSafeRadioConnectionStopped;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished /* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */ RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished;
  SSM_ST_Maintaining_SM /* maintaining_a_CommunicationSession::Maintaining_SM */ Maintaining_SM_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countDownTimer /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_maintaining_a_CommunicationSession;

/* ===========  node initialization and cycle functions  =========== */
/** Subset 096, REQ 3.5.4 */
/** Maintains an established communcation session. */
/** "Remark_1" {Description = "- Name: maintaining_a_CommunicationSession - Description: Maintains an established communcation session.   - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* maintaining_a_CommunicationSession */
extern void maintaining_a_CommunicationSession(
  /* maintaining_a_CommunicationSession::communicationSessionEstablished */kcg_bool communicationSessionEstablished,
  /* maintaining_a_CommunicationSession::safeRadioConnectionReestablished */kcg_bool safeRadioConnectionReestablished,
  /* maintaining_a_CommunicationSession::lossOfTheSafeRadioConnection */kcg_bool lossOfTheSafeRadioConnection,
  /* maintaining_a_CommunicationSession::disconnectionHasNotBeenOrdered */kcg_bool disconnectionHasNotBeenOrdered,
  /* maintaining_a_CommunicationSession::trainFrontInsideInAnAnnouncedRadioHole */kcg_bool trainFrontInsideInAnAnnouncedRadioHole,
  /* maintaining_a_CommunicationSession::actualTime */time_Type actualTime,
  outC_maintaining_a_CommunicationSession *outC);

extern void maintaining_a_CommunicationSession_reset(
  outC_maintaining_a_CommunicationSession *outC);

#endif /* _maintaining_a_CommunicationSession_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** maintaining_a_CommunicationSession.h
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

