/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "terminating_a_CommunicationSession.h"

void terminating_a_CommunicationSession_reset(
  outC_terminating_a_CommunicationSession *outC)
{
  outC->init = kcg_true;
  /* 1 */ waitAndRepeatTimer_reset(&outC->Context_1);
}

/** Subset 096, REQ 3.5.5.2 */
/** Implements the termination of a communication session. */
/** "Remark_1" {Description = "- Name: terminating_a_CommunicationSession - Description: Terminates the communication session.  - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* terminating_a_CommunicationSession */
void terminating_a_CommunicationSession(
  /* terminating_a_CommunicationSession::initiateTermination */kcg_bool initiateTermination,
  /* terminating_a_CommunicationSession::aSessionIsEstablished */kcg_bool aSessionIsEstablished,
  /* terminating_a_CommunicationSession::acknowledgementOfTerminationOfCommunicationSessionReceived */kcg_bool acknowledgementOfTerminationOfCommunicationSessionReceived,
  /* terminating_a_CommunicationSession::aSessionIsCurrentlyBeingEstablished */kcg_bool aSessionIsCurrentlyBeingEstablished,
  /* terminating_a_CommunicationSession::actualTime */time_Type actualTime,
  /* terminating_a_CommunicationSession::establishingACommunicationSessionAborted */kcg_bool establishingACommunicationSessionAborted,
  outC_terminating_a_CommunicationSession *outC)
{
  /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM::WaitForAcknowledgementMessage::_L1 */ kcg_bool _L1_TerminateTheCommunicationSession_SM_WaitForAcknowledgementMessage;
  /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM::WaitForAcknowledgementMessage */ kcg_bool WaitForAcknowledgementMessage_weakb_clock_TerminateTheCommunicationSession_SM;
  /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM::WaitForAcknowledgementMessage */ kcg_bool br_1_guard_TerminateTheCommunicationSession_SM_WaitForAcknowledgementMessage;
  /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM::EstablishingACommunicationSessionAborted */ kcg_bool EstablishingACommunicationSessionAborted_weakb_clock_TerminateTheCommunicationSession_SM;
  /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM::EstablishingACommunicationSessionAborted */ kcg_bool br_1_guard_TerminateTheCommunicationSession_SM_EstablishingACommunicationSessionAborted;
  /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM::Idle */ kcg_bool br_1_guard_TerminateTheCommunicationSession_SM_Idle;
  /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */ SSM_ST_TerminateTheCommunicationSession_SM TerminateTheCommunicationSession_SM_state_sel;
  /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */ SSM_ST_TerminateTheCommunicationSession_SM TerminateTheCommunicationSession_SM_state_act;
  /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */ kcg_bool TerminateTheCommunicationSession_SM_reset_act;
  /* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */ SSM_TR_TerminateTheCommunicationSession_SM TerminateTheCommunicationSession_SM_fired_strong;
  /* terminating_a_CommunicationSession::initiateTerminationOfEstablishingSession */ kcg_bool initiateTerminationOfEstablishingSession;
  
  initiateTerminationOfEstablishingSession = initiateTermination &
    aSessionIsCurrentlyBeingEstablished;
  if (outC->init) {
    TerminateTheCommunicationSession_SM_state_sel =
      SSM_st_Idle_TerminateTheCommunicationSession_SM;
  }
  else {
    TerminateTheCommunicationSession_SM_state_sel =
      outC->TerminateTheCommunicationSession_SM_state_nxt;
  }
  switch (TerminateTheCommunicationSession_SM_state_sel) {
    case SSM_st_Idle_TerminateTheCommunicationSession_SM :
      br_1_guard_TerminateTheCommunicationSession_SM_Idle =
        initiateTermination & aSessionIsEstablished;
      if (br_1_guard_TerminateTheCommunicationSession_SM_Idle) {
        TerminateTheCommunicationSession_SM_state_act =
          SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM;
        TerminateTheCommunicationSession_SM_fired_strong =
          SSM_TR_Idle_1_TerminateTheCommunicationSession_SM;
      }
      else if (initiateTerminationOfEstablishingSession) {
        TerminateTheCommunicationSession_SM_state_act =
          SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM;
        TerminateTheCommunicationSession_SM_fired_strong =
          SSM_TR_Idle_2_TerminateTheCommunicationSession_SM;
      }
      else {
        TerminateTheCommunicationSession_SM_state_act =
          SSM_st_Idle_TerminateTheCommunicationSession_SM;
        TerminateTheCommunicationSession_SM_fired_strong =
          SSM_TR_no_trans_TerminateTheCommunicationSession_SM;
      }
      break;
    case SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM :
      TerminateTheCommunicationSession_SM_state_act =
        SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM;
      TerminateTheCommunicationSession_SM_fired_strong =
        SSM_TR_no_trans_TerminateTheCommunicationSession_SM;
      break;
    case SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM :
      TerminateTheCommunicationSession_SM_state_act =
        SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM;
      TerminateTheCommunicationSession_SM_fired_strong =
        SSM_TR_no_trans_TerminateTheCommunicationSession_SM;
      break;
    case SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM :
      TerminateTheCommunicationSession_SM_state_act =
        SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM;
      TerminateTheCommunicationSession_SM_fired_strong =
        SSM_TR_no_trans_TerminateTheCommunicationSession_SM;
      break;
    
  }
  switch (TerminateTheCommunicationSession_SM_state_act) {
    case SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM :
      WaitForAcknowledgementMessage_weakb_clock_TerminateTheCommunicationSession_SM =
        TerminateTheCommunicationSession_SM_fired_strong !=
        SSM_TR_no_trans_TerminateTheCommunicationSession_SM;
      break;
    
  }
  switch (TerminateTheCommunicationSession_SM_state_sel) {
    case SSM_st_Idle_TerminateTheCommunicationSession_SM :
      if (br_1_guard_TerminateTheCommunicationSession_SM_Idle) {
        TerminateTheCommunicationSession_SM_reset_act = kcg_true;
      }
      else {
        TerminateTheCommunicationSession_SM_reset_act =
          initiateTerminationOfEstablishingSession;
      }
      break;
    case SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM :
      TerminateTheCommunicationSession_SM_reset_act = kcg_false;
      break;
    case SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM :
      TerminateTheCommunicationSession_SM_reset_act = kcg_false;
      break;
    case SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM :
      TerminateTheCommunicationSession_SM_reset_act = kcg_false;
      break;
    
  }
  switch (TerminateTheCommunicationSession_SM_state_act) {
    case SSM_st_Idle_TerminateTheCommunicationSession_SM :
      outC->TerminateTheCommunicationSession_SM_state_nxt =
        SSM_st_Idle_TerminateTheCommunicationSession_SM;
      outC->communicationSessionTerminated = kcg_false;
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        kcg_false;
      break;
    case SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM :
      if (TerminateTheCommunicationSession_SM_reset_act) {
        /* 1 */ waitAndRepeatTimer_reset(&outC->Context_1);
      }
      /* 1 */
      waitAndRepeatTimer(
        actualTime,
        kcg_false,
        kcg_false,
        cTerminationOfCommunicationSessionRepetitionInterval,
        cTerminationOfCommunicationSession_MaxNoOfRepetitions,
        &outC->Context_1);
      _L1_TerminateTheCommunicationSession_SM_WaitForAcknowledgementMessage =
        outC->Context_1.triggerAction;
      if (WaitForAcknowledgementMessage_weakb_clock_TerminateTheCommunicationSession_SM) {
        outC->TerminateTheCommunicationSession_SM_state_nxt =
          SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM;
      }
      else {
        br_1_guard_TerminateTheCommunicationSession_SM_WaitForAcknowledgementMessage =
          acknowledgementOfTerminationOfCommunicationSessionReceived |
          outC->Context_1.elapsed;
        if (br_1_guard_TerminateTheCommunicationSession_SM_WaitForAcknowledgementMessage) {
          outC->TerminateTheCommunicationSession_SM_state_nxt =
            SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM;
        }
        else {
          outC->TerminateTheCommunicationSession_SM_state_nxt =
            SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM;
        }
      }
      outC->communicationSessionTerminated = kcg_false;
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        kcg_true;
      break;
    case SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM :
      outC->TerminateTheCommunicationSession_SM_state_nxt =
        SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM;
      outC->communicationSessionTerminated = kcg_true;
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        kcg_false;
      break;
    case SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM :
      EstablishingACommunicationSessionAborted_weakb_clock_TerminateTheCommunicationSession_SM =
        TerminateTheCommunicationSession_SM_fired_strong !=
        SSM_TR_no_trans_TerminateTheCommunicationSession_SM;
      if (EstablishingACommunicationSessionAborted_weakb_clock_TerminateTheCommunicationSession_SM) {
        outC->TerminateTheCommunicationSession_SM_state_nxt =
          SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM;
      }
      else {
        br_1_guard_TerminateTheCommunicationSession_SM_EstablishingACommunicationSessionAborted =
          establishingACommunicationSessionAborted;
        if (br_1_guard_TerminateTheCommunicationSession_SM_EstablishingACommunicationSessionAborted) {
          outC->TerminateTheCommunicationSession_SM_state_nxt =
            SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM;
        }
        else {
          outC->TerminateTheCommunicationSession_SM_state_nxt =
            SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM;
        }
      }
      outC->communicationSessionTerminated = kcg_false;
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        kcg_false;
      break;
    
  }
  switch (TerminateTheCommunicationSession_SM_state_sel) {
    case SSM_st_Idle_TerminateTheCommunicationSession_SM :
      if (br_1_guard_TerminateTheCommunicationSession_SM_Idle) {
        outC->abortEstablishingACommunicationSession = kcg_false;
      }
      else if (initiateTerminationOfEstablishingSession) {
        outC->abortEstablishingACommunicationSession = kcg_true;
      }
      else {
        outC->abortEstablishingACommunicationSession = kcg_false;
      }
      break;
    case SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM :
      outC->abortEstablishingACommunicationSession = kcg_false;
      break;
    case SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM :
      outC->abortEstablishingACommunicationSession = kcg_false;
      break;
    case SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM :
      outC->abortEstablishingACommunicationSession = kcg_false;
      break;
    
  }
  switch (TerminateTheCommunicationSession_SM_state_act) {
    case SSM_st_Idle_TerminateTheCommunicationSession_SM :
      outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      break;
    case SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM :
      if (WaitForAcknowledgementMessage_weakb_clock_TerminateTheCommunicationSession_SM) {
        outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      }
      else if (br_1_guard_TerminateTheCommunicationSession_SM_WaitForAcknowledgementMessage) {
        outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_true;
      }
      else {
        outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      }
      outC->sendATerminationOfCommunicationMessage =
        _L1_TerminateTheCommunicationSession_SM_WaitForAcknowledgementMessage;
      break;
    case SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM :
      outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      break;
    case SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM :
      if (EstablishingACommunicationSessionAborted_weakb_clock_TerminateTheCommunicationSession_SM) {
        outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      }
      else if (br_1_guard_TerminateTheCommunicationSession_SM_EstablishingACommunicationSessionAborted) {
        outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_true;
      }
      else {
        outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      }
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      break;
    
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** terminating_a_CommunicationSession.c
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

