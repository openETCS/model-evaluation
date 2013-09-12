/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-09T16:35:22
*************************************************************$ */
#ifndef _terminating_a_Communicati_H_
#define _terminating_a_Communicati_H_

#include "kcg_types.h"
#include "waitAndRepeatTimer.h"

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
  SSM_ST_TerminateTheCommunicationSession_SM /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */ TerminateTheCommunicationSession_SM_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_waitAndRepeatTimer /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_terminating_a_Communicati;

/* ===========  node initialization and cycle functions  =========== */
/** Subset 096, REQ 3.5.5.2 */
/** Implements the termination of a communication session. */
/** "Remark_1" {Description = "- Name: terminating_a_CommunicationSession - Description: Terminates the communication session.  - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* terminating_a_CommunicationSession */
extern void terminating_a_Communicati(
  /* terminating_a_CommunicationSession::initiateTermination */kcg_bool initiateTermination,
  /* terminating_a_CommunicationSession::aSessionIsEstablished */kcg_bool aSessionIsEstablished,
  /* terminating_a_CommunicationSession::acknowledgementOfTerminationOfCommunicationSessionReceived */kcg_bool acknowledgementOfTerminationOfCommunicationSessionReceived,
  /* terminating_a_CommunicationSession::aSessionIsCurrentlyBeingEstablished */kcg_bool aSessionIsCurrentlyBeingEstablished,
  /* terminating_a_CommunicationSession::actualTime */time_Type actualTime,
  /* terminating_a_CommunicationSession::establishingACommunicationSessionAborted */kcg_bool establishingACommunicationSessionAborted,
  outC_terminating_a_Communicati *outC);

extern void terminating_a_Communicati_reset(
  outC_terminating_a_Communicati *outC);

#endif /* _terminating_a_Communicati_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** terminating_a_Communicati.h
** Generation date: 2013-09-09T16:35:22
*************************************************************$ */

