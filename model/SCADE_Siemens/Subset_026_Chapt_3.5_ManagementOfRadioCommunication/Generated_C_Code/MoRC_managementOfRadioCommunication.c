/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-08-01T09:52:22
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
  /* 1 */ MoRC_terminateAndEstablishSession_reset(&outC->_9_Context_1);
}

/** Subset 096, REQ 3.5 */
/** This is the top level node of the "Management of Radio Communication" function. */
/** "Remark_1" {Description = "- Name: managementOfRadioCommunication - Description: This is the top level node of the "Management of Radio Communication" function - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* managementOfRadioCommunication */
void MoRC_managementOfRadioCommunication(
  /* managementOfRadioCommunication::actualTime */MoRC_time_Type actualTime,
  /* managementOfRadioCommunication::acknowledgementOfTerminationOfCommunicationSessionReceived */kcg_bool acknowledgementOfTerminationOfCommunicationSessionReceived,
  /* managementOfRadioCommunication::orderReceivedFromTrackside */MoRC_orderToContactAnRBC_Type *orderReceivedFromTrackside,
  /* managementOfRadioCommunication::orderReceivedFromRBC */MoRC_orderToContactAnRBC_Type *orderReceivedFromRBC,
  /* managementOfRadioCommunication::orderReceivedFromRadio_InfillUnit */MoRC_orderToContactAnRBC_Type *orderReceivedFromRadio_InfillUnit,
  /* managementOfRadioCommunication::errorConditionRequiringTerminationDetected */kcg_bool errorConditionRequiringTerminationDetected,
  /* managementOfRadioCommunication::trainIsRejectedByRBC_duringStartOfMission */kcg_bool trainIsRejectedByRBC_duringStartOfMission,
  /* managementOfRadioCommunication::driverClosesTheDeskduringStartOfMission */kcg_bool driverClosesTheDeskduringStartOfMission,
  /* managementOfRadioCommunication::trainExitedFromAnRBCArea */kcg_bool trainExitedFromAnRBCArea,
  /* managementOfRadioCommunication::endOfMissionIsExecuted */kcg_bool endOfMissionIsExecuted,
  /* managementOfRadioCommunication::isInCommunicationSessionWithAnRIU */kcg_bool isInCommunicationSessionWithAnRIU,
  /* managementOfRadioCommunication::atPowerUp */kcg_bool atPowerUp,
  /* managementOfRadioCommunication::atPowerOff */kcg_bool atPowerOff,
  /* managementOfRadioCommunication::M_LEVEL */MoRC_M_LEVEL_Type M_LEVEL,
  /* managementOfRadioCommunication::RadioNetworkID_memorized */MoRC_validRadioNetworkID_Type *RadioNetworkID_memorized,
  /* managementOfRadioCommunication::RadioNetworkID_fromDriver */MoRC_validRadioNetworkID_Type *RadioNetworkID_fromDriver,
  /* managementOfRadioCommunication::RadioNetworkID_fromTrackside */MoRC_validRadioNetworkID_Type *RadioNetworkID_fromTrackside,
  /* managementOfRadioCommunication::afterDriverEntryOfANewRadioNetworkID */kcg_bool afterDriverEntryOfANewRadioNetworkID,
  /* managementOfRadioCommunication::triggerDecisionThatNoRadioNetworkIDAvailable */kcg_bool triggerDecisionThatNoRadioNetworkIDAvailable,
  /* managementOfRadioCommunication::mobileHWStatus */MoRC_mobileHWStatus_Type *mobileHWStatus,
  /* managementOfRadioCommunication::isPartOfAnOngoingStartOfMissionProcedure */kcg_bool isPartOfAnOngoingStartOfMissionProcedure,
  /* managementOfRadioCommunication::trainPassesALevelTransitionBorder */kcg_bool trainPassesALevelTransitionBorder,
  /* managementOfRadioCommunication::orderToEstablishACommunicationSession_fromOBU */MoRC_orderToContactAnRBC_Type *orderToEstablishACommunicationSession_fromOBU,
  /* managementOfRadioCommunication::orderDoesNotRequestToContactAnAcceptingRBC */kcg_bool orderDoesNotRequestToContactAnAcceptingRBC,
  /* managementOfRadioCommunication::trainPassesA_RBC_RBC_border_WithItsFrontEnd */kcg_bool trainPassesA_RBC_RBC_border_WithItsFrontEnd,
  /* managementOfRadioCommunication::systemVersionFromTracksideSupported */kcg_bool systemVersionFromTracksideSupported,
  /* managementOfRadioCommunication::systemVersionReceived */kcg_bool systemVersionReceived,
  /* managementOfRadioCommunication::M_MODE */MoRC_M_MODE_Type M_MODE,
  /* managementOfRadioCommunication::atStartOfMission */kcg_bool atStartOfMission,
  /* managementOfRadioCommunication::modeChangeHasToBeReportedToRBC */kcg_bool modeChangeHasToBeReportedToRBC,
  /* managementOfRadioCommunication::driverHasManuallyChangedLevel */kcg_bool driverHasManuallyChangedLevel,
  /* managementOfRadioCommunication::trainFrontReachesEndOfAnnouncedRadioHole */kcg_bool trainFrontReachesEndOfAnnouncedRadioHole,
  /* managementOfRadioCommunication::startOfMissionProcedureCompleted */kcg_bool startOfMissionProcedureCompleted,
  /* managementOfRadioCommunication::trainFrontInsideInAnAnnouncedRadioHole */kcg_bool trainFrontInsideInAnAnnouncedRadioHole,
  /* managementOfRadioCommunication::OBU_hasToEstablishANewSession */kcg_bool OBU_hasToEstablishANewSession,
  /* managementOfRadioCommunication::startOfMissionProcedureIsGoingOn */kcg_bool startOfMissionProcedureIsGoingOn,
  /* managementOfRadioCommunication::RadioNetworkID_Default */MoRC_validRadioNetworkID_Type *RadioNetworkID_Default,
  /* managementOfRadioCommunication::connectionStatusTimerInterval */MoRC_time_Type connectionStatusTimerInterval,
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
  /* managementOfRadioCommunication::CommunicationSession_SM::Maintaining::_L2 */ kcg_bool _L2_CommunicationSession_SM_Maintaining;
  /* managementOfRadioCommunication::CommunicationSession_SM::Terminating::_L12 */ kcg_bool _L12_CommunicationSession_SM_Terminating;
  /* managementOfRadioCommunication::CommunicationSession_SM::Terminating::_L1 */ kcg_bool _L1_CommunicationSession_SM_Terminating;
  /* managementOfRadioCommunication::CommunicationSession_SM::Terminating::_L2 */ kcg_bool _L2_CommunicationSession_SM_Terminating;
  /* managementOfRadioCommunication::CommunicationSession_SM::Terminating::_L3 */ kcg_bool _L3_CommunicationSession_SM_Terminating;
  /* managementOfRadioCommunication::mobileSWStatus_loc */ MoRC_mobileSWStatus_Type last_mobileSWStatus_loc;
  /* managementOfRadioCommunication::establishingACommunicationSessionAborted */ kcg_bool last_establishingACommunicationSessionAborted;
  /* managementOfRadioCommunication::sessionStatus */ MoRC_sessionStatus_Type last_sessionStatus;
  /* managementOfRadioCommunication::communicationSessionInitiatedFromTrackside */ kcg_bool last_communicationSessionInitiatedFromTrackside;
  /* managementOfRadioCommunication::communicationSessionInitiatedByOBU */ kcg_bool last_communicationSessionInitiatedByOBU;
  /* managementOfRadioCommunication::sessionEstablished */ kcg_bool last_sessionEstablished;
  /* managementOfRadioCommunication::sessionSuccessfullyEstablished */ kcg_bool last_sessionSuccessfullyEstablished;
  /* managementOfRadioCommunication::CommunicationSession_SM */ MoRC_SSM_ST_CommunicationSession_SM CommunicationSession_SM_state_act;
  /* managementOfRadioCommunication::CommunicationSession_SM */ kcg_bool CommunicationSession_SM_reset_sel;
  /* managementOfRadioCommunication::initiateTermination */ kcg_bool initiateTermination;
  /* managementOfRadioCommunication::_L85 */ kcg_bool _L85;
  
  if (outC->init) {
    last_sessionSuccessfullyEstablished = kcg_false;
    last_sessionEstablished = kcg_false;
    last_communicationSessionInitiatedByOBU = kcg_false;
    last_communicationSessionInitiatedFromTrackside = kcg_false;
    last_establishingACommunicationSessionAborted = kcg_false;
    _L85 = kcg_false;
    MoRC_kcg_copy_mobileSWStatus_Type(
      &last_mobileSWStatus_loc,
      (MoRC_mobileSWStatus_Type *) &MoRC_cInvalidMobileSWStatus);
    last_sessionStatus = MoRC_morc_st_inactive;
    CommunicationSession_SM_state_act =
      MoRC_SSM_st_NoSession_CommunicationSession_SM;
    outC->init = kcg_false;
    CommunicationSession_SM_reset_sel = kcg_false;
  }
  else {
    _L85 = outC->prevSessionTerminatedDueToLossOfSafeRadioConnection;
    MoRC_kcg_copy_mobileSWStatus_Type(
      &last_mobileSWStatus_loc,
      &outC->mobileSWStatus);
    last_establishingACommunicationSessionAborted =
      outC->establishingACommunicationSessionAborted;
    last_sessionStatus = outC->sessionStatus;
    last_communicationSessionInitiatedFromTrackside =
      outC->communicationSessionInitiatedFromTrackside;
    last_communicationSessionInitiatedByOBU =
      outC->communicationSessionInitiatedByOBU;
    last_sessionEstablished = outC->sessionEstablished;
    last_sessionSuccessfullyEstablished = outC->sessionSuccessfullyEstablished;
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
    orderReceivedFromTrackside,
    outC->sessionStatus,
    OBU_hasToEstablishANewSession,
    &outC->_9_Context_1);
  switch (CommunicationSession_SM_state_act) {
    case MoRC_SSM_st_Terminating_CommunicationSession_SM :
      _L38_CommunicationSession_SM_NoSession = kcg_false;
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      if (CommunicationSession_SM_reset_sel) {
        /* 1 */
        MoRC_terminating_a_CommunicationSession_reset(&outC->_7_Context_1);
      }
      /* 1 */
      MoRC_terminating_a_CommunicationSession(
        kcg_true,
        (kcg_bool) (MoRC_morc_st_maintaining == last_sessionStatus),
        acknowledgementOfTerminationOfCommunicationSessionReceived,
        (kcg_bool) (last_sessionStatus == MoRC_morc_st_establishing),
        actualTime,
        last_establishingACommunicationSessionAborted,
        &outC->_7_Context_1);
      _L1_CommunicationSession_SM_Terminating =
        outC->_7_Context_1.sendATerminationOfCommunicationMessage;
      _L2_CommunicationSession_SM_Terminating =
        outC->_7_Context_1.requestReleaseOfSafeRadioConnectionWithTrackside;
      _L3_CommunicationSession_SM_Terminating =
        outC->_7_Context_1.ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession;
      _L12_CommunicationSession_SM_Terminating =
        outC->_7_Context_1.communicationSessionTerminated;
      if (_L2_CommunicationSession_SM_Terminating) {
        MoRC_kcg_copy_mobileSWCmd_Type(
          &tmp,
          (MoRC_mobileSWCmd_Type *) &MoRC_cTerminateSafeRadioConnectionCmd);
      }
      else {
        MoRC_kcg_copy_mobileSWCmd_Type(
          &tmp,
          (MoRC_mobileSWCmd_Type *) &MoRC_cInvalidMobileSWCmd);
      }
      br_1_guard_CommunicationSession_SM_Establishing = kcg_false;
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection = _L85;
      break;
    case MoRC_SSM_st_Maintaining_CommunicationSession_SM :
      _L38_CommunicationSession_SM_NoSession = kcg_false;
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      if (CommunicationSession_SM_reset_sel) {
        /* 1 */
        MoRC_maintaining_a_CommunicationSession_reset(&outC->_6_Context_1);
      }
      /* 1 */
      MoRC_maintaining_a_CommunicationSession(
        last_sessionEstablished,
        (kcg_bool)
          (last_mobileSWStatus_loc.valid && MoRC_mswc_registered ==
            last_mobileSWStatus_loc.connectionStatus),
        (kcg_bool)
          (last_mobileSWStatus_loc.valid &&
            last_mobileSWStatus_loc.connectionStatus == MoRC_mswc_unregistered),
        kcg_true,
        trainFrontInsideInAnAnnouncedRadioHole,
        actualTime,
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
          (MoRC_mobileSWCmd_Type *) &MoRC_cRegisterSafeRadioConnectionCmd);
      }
      else {
        MoRC_kcg_copy_mobileSWCmd_Type(
          &tmp,
          (MoRC_mobileSWCmd_Type *) &MoRC_cInvalidMobileSWCmd);
      }
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection =
        outC->_6_Context_1.finalAttemptToSetupTheSafeRadioConnectionFailed;
      br_1_guard_CommunicationSession_SM_Establishing =
        outC->_6_Context_1.firstRequestToSetupASafeRadioConnection;
      break;
    case MoRC_SSM_st_Establishing_CommunicationSession_SM :
      if (CommunicationSession_SM_reset_sel) {
        /* 2 */
        MoRC_establish_a_CommunicationSession_reset(&outC->_8_Context_2);
      }
      /* 2 */
      MoRC_establish_a_CommunicationSession(
        isPartOfAnOngoingStartOfMissionProcedure,
        (kcg_bool)
          (last_mobileSWStatus_loc.valid &&
            last_mobileSWStatus_loc.connectionStatus == MoRC_mswc_registered),
        last_mobileSWStatus_loc.settingUpConnectionHasFailed,
        endOfMissionIsExecuted,
        trainPassesALevelTransitionBorder,
        &outC->_9_Context_1.newOrderToEstablishASession_out,
        orderToEstablishACommunicationSession_fromOBU,
        orderDoesNotRequestToContactAnAcceptingRBC,
        trainPassesA_RBC_RBC_border_WithItsFrontEnd,
        systemVersionFromTracksideSupported,
        systemVersionReceived,
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
      outC->requestTheSetupOfASafeRadioConnection =
        outC->_8_Context_2.requestTheSetupOfASafeRadioConnection;
      _L38_CommunicationSession_SM_NoSession =
        outC->_8_Context_2.requestsToSetupTheSafeRadioConnectionStopped;
      MoRC_kcg_copy_mobileSWCmd_Type(
        &tmp,
        (MoRC_mobileSWCmd_Type *) &MoRC_cInvalidMobileSWCmd);
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection =
        outC->_8_Context_2.finalAttemptToSetupTheSafeRadioConnectionFailed;
      br_1_guard_CommunicationSession_SM_Establishing =
        outC->_8_Context_2.firstRequestToSetupASafeRadioConnection;
      break;
    case MoRC_SSM_st_NoSession_CommunicationSession_SM :
      _L38_CommunicationSession_SM_NoSession = kcg_false;
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      MoRC_kcg_copy_mobileSWCmd_Type(
        &tmp,
        (MoRC_mobileSWCmd_Type *) &MoRC_cInvalidMobileSWCmd);
      br_1_guard_CommunicationSession_SM_Establishing = kcg_false;
      outC->prevSessionTerminatedDueToLossOfSafeRadioConnection = _L85;
      break;
    
  }
  /* 1 */
  MoRC_registeringToTheRadioNetwork(
    atPowerUp,
    afterDriverEntryOfANewRadioNetworkID,
    M_LEVEL,
    outC->requestTheSetupOfASafeRadioConnection,
    _L38_CommunicationSession_SM_NoSession,
    atPowerOff,
    RadioNetworkID_memorized,
    RadioNetworkID_fromDriver,
    RadioNetworkID_fromTrackside,
    triggerDecisionThatNoRadioNetworkIDAvailable,
    mobileHWStatus,
    &tmp,
    RadioNetworkID_Default,
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
  _L85 = outC->mobileSWStatus.connectionStatus == MoRC_mswc_registered;
  /* 1 */
  MoRC_FallingEdge_digital(
    (kcg_bool) (M_LEVEL == MoRC_ETCS_Level_1),
    &outC->_4_Context_1);
  /* 2 */
  MoRC_initiateTerminatingASession(
    orderReceivedFromTrackside,
    errorConditionRequiringTerminationDetected,
    trainIsRejectedByRBC_duringStartOfMission,
    driverClosesTheDeskduringStartOfMission,
    trainExitedFromAnRBCArea,
    orderReceivedFromTrackside,
    actualTime,
    isInCommunicationSessionWithAnRIU,
    outC->_4_Context_1.FE_Output,
    endOfMissionIsExecuted,
    &outC->_3_Context_2);
  outC->sendAPositionReport = outC->_3_Context_2.sendAPositionReport;
  initiateTermination = outC->_3_Context_2.initiateTermination ||
    outC->_9_Context_1.initiateTermination;
  /* 2 */ MoRC_RisingEdge_digital(_L85, &outC->_2_Context_2);
  /* 2 */ MoRC_FallingEdge_digital(_L85, &outC->Context_2);
  /* 3 */
  MoRC_RisingEdge_digital(
    (kcg_bool)
      (outC->mobileSWStatus.connectionStatus == MoRC_mswc_unregistered),
    &outC->Context_3);
  /* 1 */
  MoRC_safeRadioConnectionIndication(
    startOfMissionProcedureIsGoingOn,
    outC->prevSessionTerminatedDueToLossOfSafeRadioConnection,
    outC->prevSessionTerminatedDueToLossOfSafeRadioConnection,
    _L38_CommunicationSession_SM_NoSession,
    (kcg_bool) (outC->mobileSWStatus.valid && outC->_2_Context_2.RE_Output),
    (kcg_bool) (outC->mobileSWStatus.valid && outC->Context_2.FE_Output),
    (kcg_bool) (outC->mobileSWStatus.valid && outC->Context_3.RE_Output),
    trainFrontInsideInAnAnnouncedRadioHole,
    actualTime,
    br_1_guard_CommunicationSession_SM_Establishing,
    br_1_guard_CommunicationSession_SM_Establishing,
    connectionStatusTimerInterval,
    &outC->_1_Context_1);
  MoRC_kcg_copy_safeRadioConnectionStatusValid_Type(
    &outC->safeRadioConnectionStatus_toDriver,
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
      outC->sessionSuccessfullyEstablished = kcg_false;
      outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      outC->sessionEstablished = kcg_false;
      _L38_CommunicationSession_SM_NoSession = /* 2 */
        MoRC_isOrderToEstablishConnection(orderReceivedFromRadio_InfillUnit);
      _L37_CommunicationSession_SM_NoSession = /* 1 */
        MoRC_isOrderToEstablishConnection(orderReceivedFromRBC);
      if (CommunicationSession_SM_reset_sel) {
        /* 1 */ MoRC_Initiate_a_Session_reset(&outC->Context_1);
      }
      /* 1 */
      MoRC_Initiate_a_Session(
        /* isOrderToEstablishConnection */
        MoRC_isOrderToEstablishConnection(
          orderToEstablishACommunicationSession_fromOBU),
        _L37_CommunicationSession_SM_NoSession,
        _L38_CommunicationSession_SM_NoSession,
        M_LEVEL,
        atStartOfMission,
        (kcg_bool)
          (_L37_CommunicationSession_SM_NoSession ||
            _L38_CommunicationSession_SM_NoSession),
        M_MODE,
        modeChangeHasToBeReportedToRBC,
        driverHasManuallyChangedLevel,
        trainFrontReachesEndOfAnnouncedRadioHole,
        outC->prevSessionTerminatedDueToLossOfSafeRadioConnection,
        startOfMissionProcedureCompleted,
        kcg_true,
        outC->_9_Context_1.initiateEstablishingNewSession,
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
      break;
    case MoRC_SSM_st_Establishing_CommunicationSession_SM :
      outC->sendATerminationOfCommunicationMessage = kcg_false;
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        kcg_false;
      outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
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
      outC->sessionSuccessfullyEstablished =
        _L31_CommunicationSession_SM_Establishing;
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
      outC->requestReleaseOfSafeRadioConnectionWithTrackside = kcg_false;
      _L85 = kcg_false || initiateTermination;
      outC->CommunicationSession_SM_reset_nxt = _L85;
      if (_L85) {
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
      outC->sessionSuccessfullyEstablished =
        last_sessionSuccessfullyEstablished;
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
      outC->requestReleaseOfSafeRadioConnectionWithTrackside =
        _L2_CommunicationSession_SM_Terminating;
      outC->sessionSuccessfullyEstablished =
        last_sessionSuccessfullyEstablished;
      outC->ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession =
        _L3_CommunicationSession_SM_Terminating;
      outC->sendATerminationOfCommunicationMessage =
        _L1_CommunicationSession_SM_Terminating;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_managementOfRadioCommunication.c
** Generation date: 2013-08-01T09:52:22
*************************************************************$ */

