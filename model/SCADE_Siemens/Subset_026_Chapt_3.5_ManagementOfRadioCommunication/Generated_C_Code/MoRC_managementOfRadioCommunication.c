/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-02-12T12:42:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_managementOfRadioCommunication.h"

void MoRC_managementOfRadioCommunication_reset(
  MoRC_outC_managementOfRadioCommunication *outC)
{
  outC->init = kcg_true;
  /* 1 */ MoRC_Initiate_a_Session_reset(&outC->Context_1);
  /* 1 */ MoRC_safeRadioConnectionIndication_reset(&outC->_1_Context_1);
  /* 3 */ MoRC_RisingEdge_reset_digital(&outC->Context_3);
  /* 2 */ MoRC_FallingEdge_reset_digital(&outC->Context_2);
  /* 2 */ MoRC_RisingEdge_reset_digital(&outC->_2_Context_2);
  /* 2 */ MoRC_initiateTerminatingASession_reset(&outC->_3_Context_2);
  /* 1 */ MoRC_FallingEdge_reset_digital(&outC->_4_Context_1);
  /* 1 */ MoRC_registeringToTheRadioNetwork_reset(&outC->_5_Context_1);
  /* 1 */ MoRC_maintaining_a_CommunicationSession_reset(&outC->_6_Context_1);
  /* 1 */ MoRC_terminating_a_CommunicationSession_reset(&outC->_7_Context_1);
  /* 2 */ MoRC_establish_a_CommunicationSession_reset(&outC->_8_Context_2);
  /* 1 */ MoRC_RisingEdge_reset_digital(&outC->_9_Context_1);
  /* 1 */ MoRC_terminateAndEstablishSession_reset(&outC->_10_Context_1);
}

/** Subset 096, REQ 3.5 */
/** This is the top level node of the "Management of Radio Communication" function. */
/** "Remark_1" {Description = "- Name: managementOfRadioCommunication - Description: This is the top level node of the "Management of Radio Communication" function - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* managementOfRadioCommunication */
void MoRC_managementOfRadioCommunication(
  MoRC_inC_managementOfRadioCommunication *inC,
  MoRC_outC_managementOfRadioCommunication *outC)
{
  MoRC_mobileSWCmd_Type tmp;
  /* managementOfRadioCommunication::CommunicationSession_SM::NoSession::_L38 */ kcg_bool _L38_CommunicationSession_SM_NoSession;
  /* managementOfRadioCommunication::CommunicationSession_SM::NoSession::_L37 */ kcg_bool _L37_CommunicationSession_SM_NoSession;
  /* managementOfRadioCommunication::CommunicationSession_SM::Establishing */ kcg_bool br_1_guard_CommunicationSession_SM_Establishing;
  /* managementOfRadioCommunication::CommunicationSession_SM::Establishing::_L35 */ kcg_bool _L35_CommunicationSession_SM_Establishing;
  /* managementOfRadioCommunication::CommunicationSession_SM::Establishing::_L31 */ kcg_bool _L31_CommunicationSession_SM_Establishing;
  /* managementOfRadioCommunication::CommunicationSession_SM::Establishing::_L19 */ kcg_bool _L19_CommunicationSession_SM_Establishing;
  /* managementOfRadioCommunication::CommunicationSession_SM::Establishing::_L21 */ kcg_bool _L21_CommunicationSession_SM_Establishing;
  /* managementOfRadioCommunication::CommunicationSession_SM::Establishing::_L23 */ kcg_bool _L23_CommunicationSession_SM_Establishing;
  /* managementOfRadioCommunication::CommunicationSession_SM::Establishing::_L24 */ kcg_bool _L24_CommunicationSession_SM_Establishing;
  /* managementOfRadioCommunication::CommunicationSession_SM::Establishing::_L25 */ kcg_bool _L25_CommunicationSession_SM_Establishing;
  /* managementOfRadioCommunication::CommunicationSession_SM::Maintaining */ kcg_bool br_1_guard_CommunicationSession_SM_Maintaining;
  /* managementOfRadioCommunication::CommunicationSession_SM::Maintaining::_L2 */ kcg_bool _L2_CommunicationSession_SM_Maintaining;
  /* managementOfRadioCommunication::CommunicationSession_SM::Terminating::_L12 */ kcg_bool _L12_CommunicationSession_SM_Terminating;
  /* managementOfRadioCommunication::CommunicationSession_SM::Terminating::_L1 */ kcg_bool _L1_CommunicationSession_SM_Terminating;
  /* managementOfRadioCommunication::CommunicationSession_SM::Terminating::_L3 */ kcg_bool _L3_CommunicationSession_SM_Terminating;
  /* managementOfRadioCommunication::mobileSWStatus */ MoRC_mobileSWStatus_Type last_mobileSWStatus;
  /* managementOfRadioCommunication::establishingACommunicationSessionAborted */ kcg_bool last_establishingACommunicationSessionAborted;
  /* managementOfRadioCommunication::sessionStatus */ MoRC_sessionStatus_Type last_sessionStatus;
  /* managementOfRadioCommunication::communicationSessionInitiatedFromTrackside */ kcg_bool last_communicationSessionInitiatedFromTrackside;
  /* managementOfRadioCommunication::communicationSessionInitiatedByOBU */ kcg_bool last_communicationSessionInitiatedByOBU;
  /* managementOfRadioCommunication::sessionEstablished */ kcg_bool last_sessionEstablished;
  /* managementOfRadioCommunication::CommunicationSession_SM */ MoRC_SSM_ST_CommunicationSession_SM CommunicationSession_SM_state_act;
  /* managementOfRadioCommunication::CommunicationSession_SM */ kcg_bool CommunicationSession_SM_reset_sel;
  /* managementOfRadioCommunication::initiateTermination */ kcg_bool initiateTermination;
  
  if (outC->init) {
    outC->init = kcg_false;
    CommunicationSession_SM_reset_sel = kcg_false;
    last_sessionEstablished = kcg_false;
    last_communicationSessionInitiatedByOBU = kcg_false;
    last_communicationSessionInitiatedFromTrackside = kcg_false;
    last_establishingACommunicationSessionAborted = kcg_false;
    br_1_guard_CommunicationSession_SM_Maintaining = kcg_false;
    MoRC_kcg_copy_mobileSWStatus_Type(
      &last_mobileSWStatus,
      (MoRC_mobileSWStatus_Type *) &MoRC_cInvalidMobileSWStatus);
    last_sessionStatus = MoRC_morc_st_inactive;
    CommunicationSession_SM_state_act =
      MoRC_SSM_st_NoSession_CommunicationSession_SM;
  }
  else {
    br_1_guard_CommunicationSession_SM_Maintaining =
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection;
    MoRC_kcg_copy_mobileSWStatus_Type(
      &last_mobileSWStatus,
      &outC->mobileSWStatus);
    last_establishingACommunicationSessionAborted =
      outC->establishingACommunicationSessionAborted;
    last_sessionStatus = outC->sessionStatus;
    last_communicationSessionInitiatedFromTrackside =
      outC->communicationSessionInitiatedFromTrackside;
    last_communicationSessionInitiatedByOBU =
      outC->communicationSessionInitiatedByOBU;
    last_sessionEstablished = outC->sessionEstablished;
    CommunicationSession_SM_state_act = outC->CommunicationSession_SM_state_nxt;
    CommunicationSession_SM_reset_sel = outC->CommunicationSession_SM_reset_nxt;
  }
  switch (CommunicationSession_SM_state_act) {
    case MoRC_SSM_st_NoSession_CommunicationSession_SM :
      outC->sessionStatus = MoRC_morc_st_inactive;
      break;
    case MoRC_SSM_st_Establishing_CommunicationSession_SM :
      outC->sessionStatus = MoRC_morc_st_establishing;
      break;
    case MoRC_SSM_st_Maintaining_CommunicationSession_SM :
      outC->sessionStatus = MoRC_morc_st_maintaining;
      break;
    case MoRC_SSM_st_Terminating_CommunicationSession_SM :
      outC->sessionStatus = MoRC_morc_st_terminating;
      break;
    
  }
  /* 1 */
  MoRC_terminateAndEstablishSession(
    &inC->orderReceivedFromTrackside,
    outC->sessionStatus,
    inC->OBU_hasToEstablishANewSession,
    &outC->_10_Context_1);
  switch (CommunicationSession_SM_state_act) {
    case MoRC_SSM_st_Terminating_CommunicationSession_SM :
      initiateTermination = kcg_false;
      _L37_CommunicationSession_SM_NoSession = kcg_false;
      if (CommunicationSession_SM_reset_sel) {
        /* 1 */
        MoRC_terminating_a_CommunicationSession_reset(&outC->_7_Context_1);
      }
      /* 1 */
      MoRC_terminating_a_CommunicationSession(
        kcg_true,
        (kcg_bool) (MoRC_morc_st_maintaining == last_sessionStatus),
        inC->acknowledgementOfTerminationOfCommunicationSessionReceived,
        (kcg_bool) (last_sessionStatus == MoRC_morc_st_establishing),
        inC->actualTime,
        last_establishingACommunicationSessionAborted,
        &outC->_7_Context_1);
      _L1_CommunicationSession_SM_Terminating =
        outC->_7_Context_1.sendATerminationOfCommunicationMessage;
      _L3_CommunicationSession_SM_Terminating =
        outC->_7_Context_1.ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession;
      _L12_CommunicationSession_SM_Terminating =
        outC->_7_Context_1.communicationSessionTerminated;
      if (outC->_7_Context_1.requestReleaseOfSafeRadioConnectionWithTrackside) {
        MoRC_kcg_copy_mobileSWCmd_Type(
          &tmp,
          (MoRC_mobileSWCmd_Type *) &MoRC_cTerminateSafeRadioConnectionCmd);
      }
      else {
        MoRC_kcg_copy_mobileSWCmd_Type(
          &tmp,
          (MoRC_mobileSWCmd_Type *) &MoRC_cInvalidMobileSWCmd);
      }
      _L38_CommunicationSession_SM_NoSession = kcg_false;
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection =
        br_1_guard_CommunicationSession_SM_Maintaining;
      break;
    case MoRC_SSM_st_Maintaining_CommunicationSession_SM :
      initiateTermination = kcg_false;
      _L37_CommunicationSession_SM_NoSession = kcg_false;
      br_1_guard_CommunicationSession_SM_Establishing =
        last_mobileSWStatus.connectionStatus == MoRC_mswc_connected;
      if (CommunicationSession_SM_reset_sel) {
        /* 1 */
        MoRC_maintaining_a_CommunicationSession_reset(&outC->_6_Context_1);
      }
      /* 1 */
      MoRC_maintaining_a_CommunicationSession(
        last_sessionEstablished,
        (kcg_bool)
          (last_mobileSWStatus.valid &&
            br_1_guard_CommunicationSession_SM_Establishing),
        (kcg_bool)
          (last_mobileSWStatus.valid &&
            !br_1_guard_CommunicationSession_SM_Establishing),
        kcg_false,
        inC->trainFrontInsideInAnAnnouncedRadioHole,
        inC->actualTime,
        &outC->_6_Context_1);
      _L2_CommunicationSession_SM_Maintaining =
        outC->_6_Context_1.informTheDriverThatNoConnectionWasSetup;
      if (outC->_6_Context_1.requestsToSetupTheSafeRadioConnectionStopped) {
        MoRC_kcg_copy_mobileSWCmd_Type(
          &tmp,
          (MoRC_mobileSWCmd_Type *) &MoRC_cTerminateSafeRadioConnectionCmd);
      }
      else if (outC->_6_Context_1.tryToSetupANewSafeRadioConnection) {
        MoRC_kcg_copy_mobileSWCmd_Type(
          &tmp,
          (MoRC_mobileSWCmd_Type *) &MoRC_cEstablishSafeRadioConnectionCmd);
      }
      else {
        MoRC_kcg_copy_mobileSWCmd_Type(
          &tmp,
          (MoRC_mobileSWCmd_Type *) &MoRC_cInvalidMobileSWCmd);
      }
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection =
        outC->_6_Context_1.finalAttemptToSetupTheSafeRadioConnectionFailed;
      _L38_CommunicationSession_SM_NoSession =
        outC->_6_Context_1.firstRequestToSetupASafeRadioConnection;
      break;
    case MoRC_SSM_st_Establishing_CommunicationSession_SM :
      if (CommunicationSession_SM_reset_sel) {
        /* 1 */ MoRC_RisingEdge_reset_digital(&outC->_9_Context_1);
        /* 2 */
        MoRC_establish_a_CommunicationSession_reset(&outC->_8_Context_2);
      }
      /* 1 */
      MoRC_RisingEdge_digital(
        (kcg_bool)
          (last_mobileSWStatus.valid && last_mobileSWStatus.connectionStatus ==
            MoRC_mswc_connected),
        &outC->_9_Context_1);
      /* 2 */
      MoRC_establish_a_CommunicationSession(
        inC->isPartOfAnOngoingStartOfMissionProcedure,
        outC->_9_Context_1.RE_Output,
        last_mobileSWStatus.settingUpConnectionHasFailed,
        inC->endOfMissionIsExecuted,
        inC->trainPassesALevelTransitionBorder,
        &outC->_10_Context_1.newOrderToEstablishASession_out,
        &inC->orderToEstablishACommunicationSession_fromOBU,
        inC->orderDoesNotRequestToContactAnAcceptingRBC,
        inC->trainPassesA_RBC_RBC_border_WithItsFrontEnd,
        inC->systemVersionFromTracksideSupported,
        inC->systemVersionReceived,
        last_communicationSessionInitiatedFromTrackside,
        last_communicationSessionInitiatedByOBU,
        last_communicationSessionInitiatedFromTrackside,
        &outC->_8_Context_2);
      _L19_CommunicationSession_SM_Establishing =
        outC->_8_Context_2.InformTheDriverThatNoConnectionWasSetup;
      _L21_CommunicationSession_SM_Establishing =
        outC->_8_Context_2.sendTheMessageInitiationOfCommunicationSessionToTrackside;
      _L23_CommunicationSession_SM_Establishing =
        outC->_8_Context_2.sendMessage_NoCompatibleVersionSupported;
      _L24_CommunicationSession_SM_Establishing =
        outC->_8_Context_2.terminateTheCommunicationSession;
      _L25_CommunicationSession_SM_Establishing =
        outC->_8_Context_2.sendASessionEstablishedReportToTrackside;
      _L31_CommunicationSession_SM_Establishing =
        outC->_8_Context_2.sessionSuccessfullyEstablished;
      _L35_CommunicationSession_SM_Establishing =
        outC->_8_Context_2.establishingACommunicationSessionAborted;
      _L37_CommunicationSession_SM_NoSession =
        outC->_8_Context_2.requestsToSetupTheSafeRadioConnectionStopped;
      initiateTermination =
        outC->_8_Context_2.requestTheSetupOfASafeRadioConnection;
      MoRC_kcg_copy_mobileSWCmd_Type(
        &tmp,
        (MoRC_mobileSWCmd_Type *) &MoRC_cInvalidMobileSWCmd);
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection =
        outC->_8_Context_2.finalAttemptToSetupTheSafeRadioConnectionFailed;
      _L38_CommunicationSession_SM_NoSession =
        outC->_8_Context_2.firstRequestToSetupASafeRadioConnection;
      break;
    case MoRC_SSM_st_NoSession_CommunicationSession_SM :
      initiateTermination = kcg_false;
      _L37_CommunicationSession_SM_NoSession = kcg_false;
      MoRC_kcg_copy_mobileSWCmd_Type(
        &tmp,
        (MoRC_mobileSWCmd_Type *) &MoRC_cInvalidMobileSWCmd);
      _L38_CommunicationSession_SM_NoSession = kcg_false;
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection =
        br_1_guard_CommunicationSession_SM_Maintaining;
      break;
    
  }
  /* 1 */
  MoRC_registeringToTheRadioNetwork(
    inC->atPowerUp,
    inC->afterDriverEntryOfANewRadioNetworkID,
    inC->etcs_level,
    initiateTermination,
    _L37_CommunicationSession_SM_NoSession,
    inC->atPowerOff,
    &inC->RadioNetworkID_memorized,
    &inC->RadioNetworkID_fromDriver,
    &inC->RadioNetworkID_fromTrackside,
    inC->triggerDecisionThatNoRadioNetworkIDAvailable,
    &inC->mobileHWStatus,
    &tmp,
    &inC->RadioNetworkID_Default,
    &outC->_5_Context_1);
  outC->orderTheRegistrationOfItsConnectedMobiles =
    outC->_5_Context_1.orderTheRegistrationOfItsConnectedMobiles;
  outC->memorizeTheLastRadioNetworkID =
    outC->_5_Context_1.memorizeTheLastRadioNetworkID;
  MoRC_kcg_copy_validRadioNetworkID_Type(
    &outC->actualRadioNetworkID,
    &outC->_5_Context_1.actualRadioNetworkID);
  outC->rejectOrderToContactRBC_or_RIU =
    outC->_5_Context_1.rejectOrderToContactRBC_or_RIU;
  MoRC_kcg_copy_mobileHWCmd_Type(
    &outC->mobileHWCmd,
    &outC->_5_Context_1.mobileHWCmd);
  MoRC_kcg_copy_mobileSWStatus_Type(
    &outC->mobileSWStatus,
    &outC->_5_Context_1.mobileSWStatus);
  br_1_guard_CommunicationSession_SM_Establishing =
    outC->mobileSWStatus.connectionStatus == MoRC_mswc_connected;
  /* 1 */
  MoRC_FallingEdge_digital(
    (kcg_bool) (inC->etcs_level == MoRC_ETCS_Level_1),
    &outC->_4_Context_1);
  /* 2 */
  MoRC_initiateTerminatingASession(
    &inC->orderReceivedFromTrackside,
    inC->errorConditionRequiringTerminationDetected,
    inC->trainIsRejectedByRBC_duringStartOfMission,
    inC->driverClosesTheDeskduringStartOfMission,
    inC->trainExitedFromAnRBCArea,
    &inC->orderReceivedFromTrackside,
    inC->actualTime,
    inC->isInCommunicationSessionWithAnRIU,
    outC->_4_Context_1.FE_Output,
    inC->endOfMissionIsExecuted,
    &outC->_3_Context_2);
  outC->sendAPositionReport = outC->_3_Context_2.sendAPositionReport;
  initiateTermination = outC->_3_Context_2.initiateTermination ||
    outC->_10_Context_1.initiateTermination;
  /* 2 */
  MoRC_RisingEdge_digital(
    br_1_guard_CommunicationSession_SM_Establishing,
    &outC->_2_Context_2);
  /* 2 */
  MoRC_FallingEdge_digital(
    br_1_guard_CommunicationSession_SM_Establishing,
    &outC->Context_2);
  /* 3 */
  MoRC_RisingEdge_digital(
    (kcg_bool)
      (outC->mobileSWStatus.connectionStatus == MoRC_mswc_unregistered),
    &outC->Context_3);
  /* 1 */
  MoRC_safeRadioConnectionIndication(
    inC->startOfMissionProcedureIsGoingOn,
    outC->prevSessionTerminatedDueToLossOfSafeRadioConnection,
    outC->prevSessionTerminatedDueToLossOfSafeRadioConnection,
    _L37_CommunicationSession_SM_NoSession,
    (kcg_bool) (outC->mobileSWStatus.valid && outC->_2_Context_2.RE_Output),
    (kcg_bool) (outC->mobileSWStatus.valid && outC->Context_2.FE_Output),
    (kcg_bool) (outC->mobileSWStatus.valid && outC->Context_3.RE_Output),
    inC->trainFrontInsideInAnAnnouncedRadioHole,
    inC->actualTime,
    _L38_CommunicationSession_SM_NoSession,
    _L38_CommunicationSession_SM_NoSession,
    inC->connectionStatusTimerInterval,
    &outC->_1_Context_1);
  MoRC_kcg_copy_safeRadioConnectionStatusValid_Type(
    &outC->safeRadionConnectionStatus_toDriver,
    &outC->_1_Context_1.connectionStatus);
  switch (CommunicationSession_SM_state_act) {
    case MoRC_SSM_st_NoSession_CommunicationSession_SM :
      outC->InformTheDriverThatNoConnectionWasSetup = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->sendASessionEstablishedReportToTrackside = kcg_false;
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        kcg_false;
      _L38_CommunicationSession_SM_NoSession = /* 2 */
        MoRC_isOrderToEstablishConnection(
          &inC->orderReceivedFromRadio_InfillUnit);
      _L37_CommunicationSession_SM_NoSession = /* 1 */
        MoRC_isOrderToEstablishConnection(&inC->orderReceivedFromRBC);
      if (CommunicationSession_SM_reset_sel) {
        /* 1 */ MoRC_Initiate_a_Session_reset(&outC->Context_1);
      }
      /* 1 */
      MoRC_Initiate_a_Session(
        /* isOrderToEstablishConnection */
        MoRC_isOrderToEstablishConnection(
          &inC->orderToEstablishACommunicationSession_fromOBU),
        _L37_CommunicationSession_SM_NoSession,
        _L38_CommunicationSession_SM_NoSession,
        inC->etcs_level,
        inC->atStartOfMission,
        (kcg_bool)
          (_L37_CommunicationSession_SM_NoSession ||
            _L38_CommunicationSession_SM_NoSession),
        inC->etcs_mode,
        inC->modeChangeHasToBeReportedToRBC,
        inC->driverHasManuallyChangedLevel,
        inC->trainFrontReachesEndOfAnnouncedRadioHole,
        outC->prevSessionTerminatedDueToLossOfSafeRadioConnection,
        inC->startOfMissionProcedureCompleted,
        kcg_true,
        outC->_10_Context_1.initiateEstablishingNewSession,
        &outC->Context_1);
      outC->CommunicationSession_SM_reset_nxt =
        outC->Context_1.initiate_a_communicationSession_Request;
      if (outC->Context_1.initiate_a_communicationSession_Request) {
        outC->CommunicationSession_SM_state_nxt =
          MoRC_SSM_st_Establishing_CommunicationSession_SM;
      }
      else {
        outC->CommunicationSession_SM_state_nxt =
          MoRC_SSM_st_NoSession_CommunicationSession_SM;
      }
      outC->establishingACommunicationSessionAborted =
        last_establishingACommunicationSessionAborted;
      outC->communicationSessionInitiatedFromTrackside =
        outC->Context_1.communicationSessionInitiatedFromTrackside_;
      outC->communicationSessionInitiatedByOBU =
        outC->Context_1.communicationSessionInitiatedByOBU_;
      outC->sessionEstablished = last_sessionEstablished;
      break;
    case MoRC_SSM_st_Establishing_CommunicationSession_SM :
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        kcg_false;
      br_1_guard_CommunicationSession_SM_Establishing =
        _L24_CommunicationSession_SM_Establishing || initiateTermination;
      if (br_1_guard_CommunicationSession_SM_Establishing) {
        outC->CommunicationSession_SM_reset_nxt = kcg_true;
        outC->CommunicationSession_SM_state_nxt =
          MoRC_SSM_st_Terminating_CommunicationSession_SM;
      }
      else {
        outC->CommunicationSession_SM_reset_nxt =
          _L31_CommunicationSession_SM_Establishing;
        if (_L31_CommunicationSession_SM_Establishing) {
          outC->CommunicationSession_SM_state_nxt =
            MoRC_SSM_st_Maintaining_CommunicationSession_SM;
        }
        else {
          outC->CommunicationSession_SM_state_nxt =
            MoRC_SSM_st_Establishing_CommunicationSession_SM;
        }
      }
      outC->establishingACommunicationSessionAborted =
        _L35_CommunicationSession_SM_Establishing;
      outC->communicationSessionInitiatedFromTrackside =
        last_communicationSessionInitiatedFromTrackside;
      outC->communicationSessionInitiatedByOBU =
        last_communicationSessionInitiatedByOBU;
      outC->sessionEstablished = _L31_CommunicationSession_SM_Establishing;
      outC->sendASessionEstablishedReportToTrackside =
        _L25_CommunicationSession_SM_Establishing;
      outC->sendMessage_NoCompatibleVersionSupported =
        _L23_CommunicationSession_SM_Establishing;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        _L21_CommunicationSession_SM_Establishing;
      outC->InformTheDriverThatNoConnectionWasSetup =
        _L19_CommunicationSession_SM_Establishing;
      break;
    case MoRC_SSM_st_Maintaining_CommunicationSession_SM :
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->sendASessionEstablishedReportToTrackside = kcg_false;
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        kcg_false;
      br_1_guard_CommunicationSession_SM_Maintaining = kcg_false ||
        initiateTermination;
      outC->CommunicationSession_SM_reset_nxt =
        br_1_guard_CommunicationSession_SM_Maintaining;
      if (br_1_guard_CommunicationSession_SM_Maintaining) {
        outC->CommunicationSession_SM_state_nxt =
          MoRC_SSM_st_Terminating_CommunicationSession_SM;
      }
      else {
        outC->CommunicationSession_SM_state_nxt =
          MoRC_SSM_st_Maintaining_CommunicationSession_SM;
      }
      outC->establishingACommunicationSessionAborted =
        last_establishingACommunicationSessionAborted;
      outC->communicationSessionInitiatedFromTrackside =
        last_communicationSessionInitiatedFromTrackside;
      outC->communicationSessionInitiatedByOBU =
        last_communicationSessionInitiatedByOBU;
      outC->sessionEstablished = last_sessionEstablished;
      outC->InformTheDriverThatNoConnectionWasSetup =
        _L2_CommunicationSession_SM_Maintaining;
      break;
    case MoRC_SSM_st_Terminating_CommunicationSession_SM :
      outC->InformTheDriverThatNoConnectionWasSetup = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->sendASessionEstablishedReportToTrackside = kcg_false;
      outC->CommunicationSession_SM_reset_nxt =
        _L12_CommunicationSession_SM_Terminating;
      if (_L12_CommunicationSession_SM_Terminating) {
        outC->CommunicationSession_SM_state_nxt =
          MoRC_SSM_st_NoSession_CommunicationSession_SM;
      }
      else {
        outC->CommunicationSession_SM_state_nxt =
          MoRC_SSM_st_Terminating_CommunicationSession_SM;
      }
      outC->establishingACommunicationSessionAborted =
        last_establishingACommunicationSessionAborted;
      outC->communicationSessionInitiatedFromTrackside =
        last_communicationSessionInitiatedFromTrackside;
      outC->communicationSessionInitiatedByOBU =
        last_communicationSessionInitiatedByOBU;
      outC->sessionEstablished = last_sessionEstablished;
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        _L3_CommunicationSession_SM_Terminating;
      outC->sendATerminationOfCommunicationMessage =
        _L1_CommunicationSession_SM_Terminating;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_managementOfRadioCommunication.c
** Generation date: 2013-02-12T12:42:24
*************************************************************$ */

