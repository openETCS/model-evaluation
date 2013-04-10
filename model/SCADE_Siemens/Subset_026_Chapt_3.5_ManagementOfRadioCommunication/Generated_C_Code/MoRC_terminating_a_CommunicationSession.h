/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-04-10T10:44:31
*************************************************************$ */
#ifndef _MoRC_terminating_a_CommunicationSession_H_
#define _MoRC_terminating_a_CommunicationSession_H_

#include "kcg_types.h"
#include "MoRC_waitAndRepeatTimer.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* terminating_a_CommunicationSession::sendATerminationOfCommunicationMessage */ sendATerminationOfCommunicationMessage;
  kcg_bool /* terminating_a_CommunicationSession::requestReleaseOfSafeRadioConnectionWithTrackside */ requestReleaseOfSafeRadioConnectionWithTrackside;
  kcg_bool /* terminating_a_CommunicationSession::ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession */ ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession;
  kcg_bool /* terminating_a_CommunicationSession::abortEstablishingACommunicationSession */ abortEstablishingACommunicationSession;
  kcg_bool /* terminating_a_CommunicationSession::communicationSessionTerminated */ communicationSessionTerminated;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MoRC_SSM_ST_TerminateTheCommunicationSession_SM /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */ TerminateTheCommunicationSession_SM_state_nxt;
  kcg_bool /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */ TerminateTheCommunicationSession_SM_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  MoRC_outC_waitAndRepeatTimer /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_terminating_a_CommunicationSession;

/* ===========  node initialization and cycle functions  =========== */
/** Subset 096, REQ 3.5.5.2 */
/** Implements the termination of a communication session. */
/** "Remark_1" {Description = "- Name: terminating_a_CommunicationSession - Description: Terminates the communication session.  - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* terminating_a_CommunicationSession */
extern void MoRC_terminating_a_CommunicationSession(
  /* terminating_a_CommunicationSession::initiateTermination */kcg_bool initiateTermination,
  /* terminating_a_CommunicationSession::aSessionIsEstablished */kcg_bool aSessionIsEstablished,
  /* terminating_a_CommunicationSession::acknowledgementOfTerminationOfCommunicationSessionReceived */kcg_bool acknowledgementOfTerminationOfCommunicationSessionReceived,
  /* terminating_a_CommunicationSession::aSessionIsCurrentlyBeingEstablished */kcg_bool aSessionIsCurrentlyBeingEstablished,
  /* terminating_a_CommunicationSession::actualTime */MoRC_time_Type actualTime,
  /* terminating_a_CommunicationSession::establishingACommunicationSessionAborted */kcg_bool establishingACommunicationSessionAborted,
  MoRC_outC_terminating_a_CommunicationSession *outC);

extern void MoRC_terminating_a_CommunicationSession_reset(
  MoRC_outC_terminating_a_CommunicationSession *outC);

#endif /* _MoRC_terminating_a_CommunicationSession_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_terminating_a_CommunicationSession.h
** Generation date: 2013-04-10T10:44:31
*************************************************************$ */

