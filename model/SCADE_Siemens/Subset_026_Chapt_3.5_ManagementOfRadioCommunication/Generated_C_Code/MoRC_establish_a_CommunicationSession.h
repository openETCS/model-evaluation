/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-02-12T12:42:24
*************************************************************$ */
#ifndef _MoRC_establish_a_CommunicationSession_H_
#define _MoRC_establish_a_CommunicationSession_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* establish_a_CommunicationSession::InformTheDriverThatNoConnectionWasSetup */ InformTheDriverThatNoConnectionWasSetup;
  kcg_bool /* establish_a_CommunicationSession::requestTheSetupOfASafeRadioConnection */ requestTheSetupOfASafeRadioConnection;
  kcg_bool /* establish_a_CommunicationSession::sendTheMessageInitiationOfCommunicationSessionToTrackside */ sendTheMessageInitiationOfCommunicationSessionToTrackside;
  kcg_bool /* establish_a_CommunicationSession::sendMessage_NoCompatibleVersionSupported */ sendMessage_NoCompatibleVersionSupported;
  kcg_bool /* establish_a_CommunicationSession::terminateTheCommunicationSession */ terminateTheCommunicationSession;
  kcg_bool /* establish_a_CommunicationSession::sendASessionEstablishedReportToTrackside */ sendASessionEstablishedReportToTrackside;
  kcg_bool /* establish_a_CommunicationSession::firstRequestToSetupASafeRadioConnection */ firstRequestToSetupASafeRadioConnection;
  kcg_bool /* establish_a_CommunicationSession::finalAttemptToSetupTheSafeRadioConnectionFailed */ finalAttemptToSetupTheSafeRadioConnectionFailed;
  kcg_bool /* establish_a_CommunicationSession::requestsToSetupTheSafeRadioConnectionStopped */ requestsToSetupTheSafeRadioConnectionStopped;
  kcg_bool /* establish_a_CommunicationSession::sessionSuccessfullyEstablished */ sessionSuccessfullyEstablished;
  kcg_bool /* establish_a_CommunicationSession::establishingACommunicationSessionAborted */ establishingACommunicationSessionAborted;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init3;
  kcg_bool init2;
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MoRC_SSM_ST_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */ RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
  MoRC_SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfSta /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission::RepeatSetupConnection_SM */ RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart;
  MoRC_SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartO /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM */ RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM;
  kcg_int /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::_L3 */ _L3_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission;
  MoRC_SSM_ST_EstablishmentOfACommunicationSession_SM /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM */ EstablishmentOfACommunicationSession_SM_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_establish_a_CommunicationSession;

/* ===========  node initialization and cycle functions  =========== */
/** Subset 096, REQ 3.5.3 */
/** Implements the establishing process of a communication session */
/** "Remark_1" {Description = "- Name: establish_a_CommunicationSession - Description: Implements the establishing process of a communication session - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* establish_a_CommunicationSession */
extern void MoRC_establish_a_CommunicationSession(
  /* establish_a_CommunicationSession::isPartOfAnOngoingStartOfMissionProcedure */kcg_bool isPartOfAnOngoingStartOfMissionProcedure,
  /* establish_a_CommunicationSession::connectionSuccessfullyEstablished */kcg_bool connectionSuccessfullyEstablished,
  /* establish_a_CommunicationSession::settingUpSafeConnectionHasFailed */kcg_bool settingUpSafeConnectionHasFailed,
  /* establish_a_CommunicationSession::endOfMissionIsPerformed */kcg_bool endOfMissionIsPerformed,
  /* establish_a_CommunicationSession::trainPassesALevelTransitionBorder */kcg_bool trainPassesALevelTransitionBorder,
  /* establish_a_CommunicationSession::orderToEstablishACommunicationSession_fromTrackside */MoRC_orderToContactAnRBC_Type *orderToEstablishACommunicationSession_fromTrackside,
  /* establish_a_CommunicationSession::orderToEstablishACommunicationSession_fromOBU */MoRC_orderToContactAnRBC_Type *orderToEstablishACommunicationSession_fromOBU,
  /* establish_a_CommunicationSession::orderDoesNotRequestToContactAnAcceptingRBC */kcg_bool orderDoesNotRequestToContactAnAcceptingRBC,
  /* establish_a_CommunicationSession::trainPassesA_RBC_RBC_border_WithItsFrontEnd */kcg_bool trainPassesA_RBC_RBC_border_WithItsFrontEnd,
  /* establish_a_CommunicationSession::systemVersionFromTracksideSupported */kcg_bool systemVersionFromTracksideSupported,
  /* establish_a_CommunicationSession::systemVersionReceived */kcg_bool systemVersionReceived,
  /* establish_a_CommunicationSession::initiationOfACommunicationSession_receivedFromTrackside */kcg_bool initiationOfACommunicationSession_receivedFromTrackside,
  /* establish_a_CommunicationSession::communicationSessionInitiatedByOBU_ */kcg_bool communicationSessionInitiatedByOBU_,
  /* establish_a_CommunicationSession::communicationSessionInitiatedFromTrackside_ */kcg_bool communicationSessionInitiatedFromTrackside_,
  MoRC_outC_establish_a_CommunicationSession *outC);

extern void MoRC_establish_a_CommunicationSession_reset(
  MoRC_outC_establish_a_CommunicationSession *outC);

#endif /* _MoRC_establish_a_CommunicationSession_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_establish_a_CommunicationSession.h
** Generation date: 2013-02-12T12:42:24
*************************************************************$ */

