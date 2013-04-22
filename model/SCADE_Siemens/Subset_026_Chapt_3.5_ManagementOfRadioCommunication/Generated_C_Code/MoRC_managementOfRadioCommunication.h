/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-04-22T16:56:47
*************************************************************$ */
#ifndef _MoRC_managementOfRadioCommunication_H_
#define _MoRC_managementOfRadioCommunication_H_

#include "kcg_types.h"
#include "MoRC_isOrderToEstablishConnection.h"
#include "MoRC_Initiate_a_Session.h"
#include "MoRC_maintaining_a_CommunicationSession.h"
#include "MoRC_initiateTerminatingASession.h"
#include "MoRC_terminating_a_CommunicationSession.h"
#include "MoRC_registeringToTheRadioNetwork.h"
#include "MoRC_safeRadioConnectionIndication.h"
#include "MoRC_establish_a_CommunicationSession.h"
#include "MoRC_terminateAndEstablishSession.h"
#include "MoRC_FallingEdge_digital.h"
#include "MoRC_RisingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* managementOfRadioCommunication::sendAPositionReport */ sendAPositionReport;
  MoRC_mobileHWCmd_Type /* managementOfRadioCommunication::mobileHWCmd */ mobileHWCmd;
  kcg_bool /* managementOfRadioCommunication::memorizeTheLastRadioNetworkID */ memorizeTheLastRadioNetworkID;
  MoRC_validRadioNetworkID_Type /* managementOfRadioCommunication::actualRadioNetworkID */ actualRadioNetworkID;
  kcg_bool /* managementOfRadioCommunication::orderTheRegistrationOfItsConnectedMobiles */ orderTheRegistrationOfItsConnectedMobiles;
  kcg_bool /* managementOfRadioCommunication::rejectOrderToContactRBC_or_RIU */ rejectOrderToContactRBC_or_RIU;
  kcg_bool /* managementOfRadioCommunication::InformTheDriverThatNoConnectionWasSetup */ InformTheDriverThatNoConnectionWasSetup;
  kcg_bool /* managementOfRadioCommunication::sendTheMessageInitiationOfCommunicationSessionToTrackside */ sendTheMessageInitiationOfCommunicationSessionToTrackside;
  kcg_bool /* managementOfRadioCommunication::sendMessage_NoCompatibleVersionSupported */ sendMessage_NoCompatibleVersionSupported;
  kcg_bool /* managementOfRadioCommunication::sendASessionEstablishedReportToTrackside */ sendASessionEstablishedReportToTrackside;
  kcg_bool /* managementOfRadioCommunication::sendATerminationOfCommunicationMessage */ sendATerminationOfCommunicationMessage;
  kcg_bool /* managementOfRadioCommunication::ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession */ ignoreMessagesFromRBC_exceptAckOfTerminationOfCommunicationSession;
  MoRC_safeRadioConnectionStatusValid_Type /* managementOfRadioCommunication::safeRadioConnectionStatus_toDriver */ safeRadioConnectionStatus_toDriver;
  kcg_bool /* managementOfRadioCommunication::sessionSuccessfullyEstablished */ sessionSuccessfullyEstablished;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MoRC_SSM_ST_CommunicationSession_SM /* managementOfRadioCommunication::CommunicationSession_SM */ CommunicationSession_SM_state_nxt;
  kcg_bool /* managementOfRadioCommunication::CommunicationSession_SM */ CommunicationSession_SM_reset_nxt;
  kcg_bool /* managementOfRadioCommunication::sessionEstablished */ sessionEstablished;
  kcg_bool /* managementOfRadioCommunication::communicationSessionInitiatedByOBU */ communicationSessionInitiatedByOBU;
  kcg_bool /* managementOfRadioCommunication::communicationSessionInitiatedFromTrackside */ communicationSessionInitiatedFromTrackside;
  MoRC_sessionStatus_Type /* managementOfRadioCommunication::sessionStatus */ sessionStatus;
  kcg_bool /* managementOfRadioCommunication::establishingACommunicationSessionAborted */ establishingACommunicationSessionAborted;
  MoRC_mobileSWStatus_Type /* managementOfRadioCommunication::mobileSWStatus */ mobileSWStatus;
  kcg_bool /* managementOfRadioCommunication::prevSessionTerminatedDueToLossOfSafeRadioConnection */ prevSessionTerminatedDueToLossOfSafeRadioConnection;
  /* ---------------------  sub nodes' contexts  --------------------- */
  MoRC_outC_terminateAndEstablishSession /* 1 */ _9_Context_1;
  MoRC_outC_establish_a_CommunicationSession /* 2 */ _8_Context_2;
  MoRC_outC_terminating_a_CommunicationSession /* 1 */ _7_Context_1;
  MoRC_outC_maintaining_a_CommunicationSession /* 1 */ _6_Context_1;
  MoRC_outC_registeringToTheRadioNetwork /* 1 */ _5_Context_1;
  MoRC_outC_FallingEdge_digital /* 1 */ _4_Context_1;
  MoRC_outC_initiateTerminatingASession /* 2 */ _3_Context_2;
  MoRC_outC_RisingEdge_digital /* 2 */ _2_Context_2;
  MoRC_outC_FallingEdge_digital /* 2 */ Context_2;
  MoRC_outC_RisingEdge_digital /* 3 */ Context_3;
  MoRC_outC_safeRadioConnectionIndication /* 1 */ _1_Context_1;
  MoRC_outC_Initiate_a_Session /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_managementOfRadioCommunication;

/* ===========  node initialization and cycle functions  =========== */
/** Subset 096, REQ 3.5 */
/** This is the top level node of the "Management of Radio Communication" function. */
/** "Remark_1" {Description = "- Name: managementOfRadioCommunication - Description: This is the top level node of the "Management of Radio Communication" function - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* managementOfRadioCommunication */
extern void MoRC_managementOfRadioCommunication(
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
  MoRC_outC_managementOfRadioCommunication *outC);

extern void MoRC_managementOfRadioCommunication_reset(
  MoRC_outC_managementOfRadioCommunication *outC);

#endif /* _MoRC_managementOfRadioCommunication_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_managementOfRadioCommunication.h
** Generation date: 2013-04-22T16:56:47
*************************************************************$ */

