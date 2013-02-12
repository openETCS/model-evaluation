/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-02-12T12:42:24
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

/* ========================  input structure  ====================== */
typedef struct {
  MoRC_time_Type /* managementOfRadioCommunication::actualTime */ actualTime;
  kcg_bool /* managementOfRadioCommunication::acknowledgementOfTerminationOfCommunicationSessionReceived */ acknowledgementOfTerminationOfCommunicationSessionReceived;
  MoRC_orderToContactAnRBC_Type /* managementOfRadioCommunication::orderReceivedFromTrackside */ orderReceivedFromTrackside;
  MoRC_orderToContactAnRBC_Type /* managementOfRadioCommunication::orderReceivedFromRBC */ orderReceivedFromRBC;
  MoRC_orderToContactAnRBC_Type /* managementOfRadioCommunication::orderReceivedFromRadio_InfillUnit */ orderReceivedFromRadio_InfillUnit;
  kcg_bool /* managementOfRadioCommunication::errorConditionRequiringTerminationDetected */ errorConditionRequiringTerminationDetected;
  kcg_bool /* managementOfRadioCommunication::trainIsRejectedByRBC_duringStartOfMission */ trainIsRejectedByRBC_duringStartOfMission;
  kcg_bool /* managementOfRadioCommunication::driverClosesTheDeskduringStartOfMission */ driverClosesTheDeskduringStartOfMission;
  kcg_bool /* managementOfRadioCommunication::trainExitedFromAnRBCArea */ trainExitedFromAnRBCArea;
  kcg_bool /* managementOfRadioCommunication::endOfMissionIsExecuted */ endOfMissionIsExecuted;
  kcg_bool /* managementOfRadioCommunication::isInCommunicationSessionWithAnRIU */ isInCommunicationSessionWithAnRIU;
  kcg_bool /* managementOfRadioCommunication::atPowerUp */ atPowerUp;
  kcg_bool /* managementOfRadioCommunication::atPowerOff */ atPowerOff;
  MoRC_ETCS_Level_Type /* managementOfRadioCommunication::etcs_level */ etcs_level;
  MoRC_validRadioNetworkID_Type /* managementOfRadioCommunication::RadioNetworkID_memorized */ RadioNetworkID_memorized;
  MoRC_validRadioNetworkID_Type /* managementOfRadioCommunication::RadioNetworkID_fromDriver */ RadioNetworkID_fromDriver;
  MoRC_validRadioNetworkID_Type /* managementOfRadioCommunication::RadioNetworkID_fromTrackside */ RadioNetworkID_fromTrackside;
  kcg_bool /* managementOfRadioCommunication::afterDriverEntryOfANewRadioNetworkID */ afterDriverEntryOfANewRadioNetworkID;
  kcg_bool /* managementOfRadioCommunication::triggerDecisionThatNoRadioNetworkIDAvailable */ triggerDecisionThatNoRadioNetworkIDAvailable;
  MoRC_mobileHWStatus_Type /* managementOfRadioCommunication::mobileHWStatus */ mobileHWStatus;
  kcg_bool /* managementOfRadioCommunication::isPartOfAnOngoingStartOfMissionProcedure */ isPartOfAnOngoingStartOfMissionProcedure;
  kcg_bool /* managementOfRadioCommunication::trainPassesALevelTransitionBorder */ trainPassesALevelTransitionBorder;
  MoRC_orderToContactAnRBC_Type /* managementOfRadioCommunication::orderToEstablishACommunicationSession_fromOBU */ orderToEstablishACommunicationSession_fromOBU;
  kcg_bool /* managementOfRadioCommunication::orderDoesNotRequestToContactAnAcceptingRBC */ orderDoesNotRequestToContactAnAcceptingRBC;
  kcg_bool /* managementOfRadioCommunication::trainPassesA_RBC_RBC_border_WithItsFrontEnd */ trainPassesA_RBC_RBC_border_WithItsFrontEnd;
  kcg_bool /* managementOfRadioCommunication::systemVersionFromTracksideSupported */ systemVersionFromTracksideSupported;
  kcg_bool /* managementOfRadioCommunication::systemVersionReceived */ systemVersionReceived;
  MoRC_ETCS_Mode_Type /* managementOfRadioCommunication::etcs_mode */ etcs_mode;
  kcg_bool /* managementOfRadioCommunication::atStartOfMission */ atStartOfMission;
  kcg_bool /* managementOfRadioCommunication::modeChangeHasToBeReportedToRBC */ modeChangeHasToBeReportedToRBC;
  kcg_bool /* managementOfRadioCommunication::driverHasManuallyChangedLevel */ driverHasManuallyChangedLevel;
  kcg_bool /* managementOfRadioCommunication::trainFrontReachesEndOfAnnouncedRadioHole */ trainFrontReachesEndOfAnnouncedRadioHole;
  kcg_bool /* managementOfRadioCommunication::startOfMissionProcedureCompleted */ startOfMissionProcedureCompleted;
  kcg_bool /* managementOfRadioCommunication::trainFrontInsideInAnAnnouncedRadioHole */ trainFrontInsideInAnAnnouncedRadioHole;
  kcg_bool /* managementOfRadioCommunication::OBU_hasToEstablishANewSession */ OBU_hasToEstablishANewSession;
  kcg_bool /* managementOfRadioCommunication::startOfMissionProcedureIsGoingOn */ startOfMissionProcedureIsGoingOn;
  MoRC_validRadioNetworkID_Type /* managementOfRadioCommunication::RadioNetworkID_Default */ RadioNetworkID_Default;
  MoRC_time_Type /* managementOfRadioCommunication::connectionStatusTimerInterval */ connectionStatusTimerInterval;
} MoRC_inC_managementOfRadioCommunication;

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
  MoRC_safeRadioConnectionStatusValid_Type /* managementOfRadioCommunication::safeRadionConnectionStatus_toDriver */ safeRadionConnectionStatus_toDriver;
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
  MoRC_outC_terminateAndEstablishSession /* 1 */ _10_Context_1;
  MoRC_outC_RisingEdge_digital /* 1 */ _9_Context_1;
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
  MoRC_inC_managementOfRadioCommunication *inC,
  MoRC_outC_managementOfRadioCommunication *outC);

extern void MoRC_managementOfRadioCommunication_reset(
  MoRC_outC_managementOfRadioCommunication *outC);

#endif /* _MoRC_managementOfRadioCommunication_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_managementOfRadioCommunication.h
** Generation date: 2013-02-12T12:42:24
*************************************************************$ */

