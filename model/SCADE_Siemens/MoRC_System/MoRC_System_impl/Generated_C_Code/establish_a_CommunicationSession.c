/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "establish_a_CommunicationSession.h"

void establish_a_CommunicationSession_reset(
  outC_establish_a_CommunicationSession *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
}

/** Subset 096, REQ 3.5.3 */
/** Implements the establishing process of a communication session */
/** "Remark_1" {Description = "- Name: establish_a_CommunicationSession - Description: Implements the establishing process of a communication session - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* establish_a_CommunicationSession */
void establish_a_CommunicationSession(
  /* establish_a_CommunicationSession::isPartOfAnOngoingStartOfMissionProcedure */kcg_bool isPartOfAnOngoingStartOfMissionProcedure,
  /* establish_a_CommunicationSession::connectionSuccessfullyEstablished */kcg_bool connectionSuccessfullyEstablished,
  /* establish_a_CommunicationSession::settingUpSafeConnectionHasFailed */kcg_bool settingUpSafeConnectionHasFailed,
  /* establish_a_CommunicationSession::endOfMissionIsPerformed */kcg_bool endOfMissionIsPerformed,
  /* establish_a_CommunicationSession::trainPassesALevelTransitionBorder */kcg_bool trainPassesALevelTransitionBorder,
  /* establish_a_CommunicationSession::orderToEstablishACommunicationSession_fromTrackside */orderToContactAnRBC_Type *orderToEstablishACommunicationSession_fromTrackside,
  /* establish_a_CommunicationSession::orderToEstablishACommunicationSession_fromOBU */orderToContactAnRBC_Type *orderToEstablishACommunicationSession_fromOBU,
  /* establish_a_CommunicationSession::orderDoesNotRequestToContactAnAcceptingRBC */kcg_bool orderDoesNotRequestToContactAnAcceptingRBC,
  /* establish_a_CommunicationSession::trainPassesA_RBC_RBC_border_WithItsFrontEnd */kcg_bool trainPassesA_RBC_RBC_border_WithItsFrontEnd,
  /* establish_a_CommunicationSession::systemVersionFromTracksideSupported */kcg_bool systemVersionFromTracksideSupported,
  /* establish_a_CommunicationSession::systemVersionReceived */kcg_bool systemVersionReceived,
  /* establish_a_CommunicationSession::initiationOfACommunicationSession_receivedFromTrackside */kcg_bool initiationOfACommunicationSession_receivedFromTrackside,
  /* establish_a_CommunicationSession::communicationSessionInitiatedByOBU_ */kcg_bool communicationSessionInitiatedByOBU_,
  /* establish_a_CommunicationSession::communicationSessionInitiatedFromTrackside_ */kcg_bool communicationSessionInitiatedFromTrackside_,
  outC_establish_a_CommunicationSession *outC)
{
  SSM_TR_EstablishmentOfACommunicationSession_SM tmp6;
  kcg_int tmp5;
  kcg_int tmp4;
  kcg_bool tmp3;
  kcg_bool tmp2;
  kcg_bool tmp1;
  kcg_bool tmp;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */ SSM_TR_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */ SSM_ST_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */ SSM_ST_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU RequestConnectionWithTrackSide_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU */ kcg_bool RequestSetupOfASafeRadioConnection_initiatedByOBU_weakb_clock_EstablishmentOfACommunicationSession_SM;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission */ kcg_bool br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission::RepeatSetupConnection_SM::Start */ kcg_bool br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupCon;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission */ kcg_bool TryToEstablishConnection_isNotPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission::RepeatSetupConnection_SM */ SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfM RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission::RepeatSetupConnection_SM */ SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfM RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission */ kcg_bool br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM::Start */ kcg_bool br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConnec;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission */ kcg_bool TryToEstablishConnection_isPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM */ SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMiss RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM */ SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMiss RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU */ kcg_bool br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::Idle */ kcg_bool br_1_guard_EstablishmentOfACommunicationSession_SM_Idle;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU */ kcg_bool br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::WaitForSystemVersionFromTrackSide */ kcg_bool br_2_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::WaitForSystemVersionFromTrackSide */ kcg_bool br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::WaitForMessage_InitiationOfCommunicationSession_FromTrackside */ kcg_bool br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForMessage_InitiationOfCommunicationSession_FromTrackside;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM */ SSM_ST_EstablishmentOfACommunicationSession_SM EstablishmentOfACommunicationSession_SM_state_sel;
  /* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM */ SSM_ST_EstablishmentOfACommunicationSession_SM EstablishmentOfACommunicationSession_SM_state_act;
  
  if (outC->init) {
    EstablishmentOfACommunicationSession_SM_state_sel =
      SSM_st_Idle_EstablishmentOfACommunicationSession_SM;
  }
  else {
    EstablishmentOfACommunicationSession_SM_state_sel =
      outC->EstablishmentOfACommunicationSession_SM_state_nxt;
  }
  switch (EstablishmentOfACommunicationSession_SM_state_sel) {
    case SSM_st_Idle_EstablishmentOfACommunicationSession_SM :
      br_1_guard_EstablishmentOfACommunicationSession_SM_Idle =
        communicationSessionInitiatedByOBU_;
      if (br_1_guard_EstablishmentOfACommunicationSession_SM_Idle) {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM;
      }
      else if (communicationSessionInitiatedFromTrackside_) {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM;
      }
      else {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_Idle_EstablishmentOfACommunicationSession_SM;
      }
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM :
      br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
        connectionSuccessfullyEstablished;
      if (br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM;
      }
      else {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM;
      }
      break;
    case SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM :
      br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide =
        systemVersionFromTracksideSupported & systemVersionReceived;
      br_2_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide =
        systemVersionReceived & !systemVersionFromTracksideSupported;
      if (br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide) {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM;
      }
      else if (br_2_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide) {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM;
      }
      else {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM;
      }
      break;
    case SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      EstablishmentOfACommunicationSession_SM_state_act =
        SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM;
      break;
    case SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      tmp1 = kcg_true;
      if (tmp1) {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM;
      }
      else {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM;
      }
      break;
    case SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM :
      EstablishmentOfACommunicationSession_SM_state_act =
        SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM :
      if (connectionSuccessfullyEstablished) {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM;
      }
      else {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM;
      }
      break;
    case SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM :
      br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForMessage_InitiationOfCommunicationSession_FromTrackside =
        initiationOfACommunicationSession_receivedFromTrackside;
      if (br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForMessage_InitiationOfCommunicationSession_FromTrackside) {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM;
      }
      else {
        EstablishmentOfACommunicationSession_SM_state_act =
          SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM;
      }
      break;
    case SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM :
      EstablishmentOfACommunicationSession_SM_state_act =
        SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM;
      break;
    
  }
  switch (EstablishmentOfACommunicationSession_SM_state_act) {
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM :
      switch (EstablishmentOfACommunicationSession_SM_state_sel) {
        case SSM_st_Idle_EstablishmentOfACommunicationSession_SM :
          if (br_1_guard_EstablishmentOfACommunicationSession_SM_Idle) {
            tmp6 = SSM_TR_Idle_1_EstablishmentOfACommunicationSession_SM;
          }
          else if (communicationSessionInitiatedFromTrackside_) {
            tmp6 = SSM_TR_Idle_2_EstablishmentOfACommunicationSession_SM;
          }
          else {
            tmp6 = SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
          }
          break;
        case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM :
          if (br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
            tmp6 =
              SSM_TR_RequestSetupOfASafeRadioConnection_initiatedByOBU_1_EstablishmentOfACommunicationSession_SM;
          }
          else {
            tmp6 = SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
          }
          break;
        case SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM :
          if (br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide) {
            tmp6 =
              SSM_TR_WaitForSystemVersionFromTrackSide_1_EstablishmentOfACommunicationSession_SM;
          }
          else if (br_2_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide) {
            tmp6 =
              SSM_TR_WaitForSystemVersionFromTrackSide_2_EstablishmentOfACommunicationSession_SM;
          }
          else {
            tmp6 = SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
          }
          break;
        case SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
          tmp6 = SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
          break;
        case SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
          if (tmp1) {
            tmp6 =
              SSM_TR_NoCompatibleSystemVersionSupported_1_EstablishmentOfACommunicationSession_SM;
          }
          else {
            tmp6 = SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
          }
          break;
        case SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM :
          tmp6 = SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
          break;
        case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM :
          if (connectionSuccessfullyEstablished) {
            tmp6 =
              SSM_TR_RequestSetupOfASafeRadioConnection_initiatedByTrackside_1_EstablishmentOfACommunicationSession_SM;
          }
          else {
            tmp6 = SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
          }
          break;
        case SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM :
          if (br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForMessage_InitiationOfCommunicationSession_FromTrackside) {
            tmp6 =
              SSM_TR_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_1_EstablishmentOfACommunicationSession_SM;
          }
          else {
            tmp6 = SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
          }
          break;
        case SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM :
          tmp6 = SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
          break;
        
      }
      RequestSetupOfASafeRadioConnection_initiatedByOBU_weakb_clock_EstablishmentOfACommunicationSession_SM =
        tmp6 != SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM;
      break;
    
  }
  switch (EstablishmentOfACommunicationSession_SM_state_sel) {
    case SSM_st_Idle_EstablishmentOfACommunicationSession_SM :
      if (br_1_guard_EstablishmentOfACommunicationSession_SM_Idle) {
        tmp = kcg_true;
      }
      else {
        tmp = communicationSessionInitiatedFromTrackside_;
      }
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM :
      tmp =
        br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
      break;
    case SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM :
      if (br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide) {
        tmp = kcg_true;
      }
      else {
        tmp =
          br_2_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide;
      }
      break;
    case SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      tmp = kcg_false;
      break;
    case SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      tmp = tmp1;
      break;
    case SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM :
      tmp = kcg_false;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM :
      tmp = connectionSuccessfullyEstablished;
      break;
    case SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM :
      tmp =
        br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForMessage_InitiationOfCommunicationSession_FromTrackside;
      break;
    case SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM :
      tmp = kcg_false;
      break;
    
  }
  switch (EstablishmentOfACommunicationSession_SM_state_act) {
    case SSM_st_Idle_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM :
      if (tmp) {
        outC->init1 = kcg_true;
      }
      if (outC->init1) {
        RequestConnectionWithTrackSide_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
          SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
      }
      else {
        RequestConnectionWithTrackSide_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
          outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
      }
      switch (RequestConnectionWithTrackSide_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          if (isPartOfAnOngoingStartOfMissionProcedure) {
            RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_TR_Start_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          }
          else {
            RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_TR_Start_2_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          }
          break;
        case SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          if (connectionSuccessfullyEstablished) {
            RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_TR_TryToEstablishConnection_isPartOfStartOfMission_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          }
          else {
            RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          }
          break;
        case SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          break;
        case SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          break;
        case SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          if (connectionSuccessfullyEstablished) {
            RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_TR_TryToEstablishConnection_isNotPartOfStartOfMission_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          }
          else {
            RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          }
          break;
        
      }
      switch (RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        case SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          TryToEstablishConnection_isPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM =
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU !=
            SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          break;
        
      }
      switch (RequestConnectionWithTrackSide_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          tmp2 = kcg_true;
          break;
        case SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          tmp2 = connectionSuccessfullyEstablished;
          break;
        case SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          tmp2 = kcg_false;
          break;
        case SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          tmp2 = kcg_false;
          break;
        case SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          tmp2 = connectionSuccessfullyEstablished;
          break;
        
      }
      switch (RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        case SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          if (tmp2) {
            outC->init3 = kcg_true;
          }
          break;
        
      }
      if (tmp) {
        outC->init3 = kcg_true;
      }
      switch (RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        case SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          if (outC->init3) {
            RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM =
              SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn;
          }
          else {
            RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM =
              outC->RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM;
          }
          switch (RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM) {
            case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn :
              br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConnec =
                kcg_true;
              break;
            case SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn :
              tmp3 = settingUpSafeConnectionHasFailed;
              break;
            
          }
          break;
        case SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          if (tmp2) {
            outC->init2 = kcg_true;
          }
          break;
        
      }
      if (tmp) {
        outC->init2 = kcg_true;
      }
      switch (RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          outC->requestTheSetupOfASafeRadioConnection = kcg_false;
          break;
        case SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          switch (RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM) {
            case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn :
              if (br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConnec) {
                outC->requestTheSetupOfASafeRadioConnection =
                  br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConnec;
              }
              else {
                outC->requestTheSetupOfASafeRadioConnection = kcg_false;
              }
              break;
            case SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn :
              if (tmp3) {
                outC->requestTheSetupOfASafeRadioConnection = kcg_true;
              }
              else {
                outC->requestTheSetupOfASafeRadioConnection = kcg_false;
              }
              break;
            
          }
          if (outC->requestTheSetupOfASafeRadioConnection) {
            tmp5 = 1;
          }
          else {
            tmp5 = 0;
          }
          if (outC->init3) {
            tmp4 = 0;
          }
          else {
            tmp4 =
              outC->_L3_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission;
          }
          outC->_L3_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission =
            tmp5 + tmp4;
          if (TryToEstablishConnection_isPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM) {
          }
          else {
            br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission =
              outC->_L3_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission >=
              cMaxNoOfConnectionRetries;
          }
          break;
        case SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          outC->requestTheSetupOfASafeRadioConnection = kcg_false;
          break;
        case SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          outC->requestTheSetupOfASafeRadioConnection = kcg_false;
          break;
        case SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          if (outC->init2) {
            RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
              SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC;
          }
          else {
            RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
              outC->RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart;
          }
          switch (RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart) {
            case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC :
              br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupCon =
                kcg_true;
              if (br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupCon) {
                outC->requestTheSetupOfASafeRadioConnection =
                  br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupCon;
              }
              else {
                outC->requestTheSetupOfASafeRadioConnection = kcg_false;
              }
              break;
            case SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC :
              if (settingUpSafeConnectionHasFailed) {
                outC->requestTheSetupOfASafeRadioConnection = kcg_true;
              }
              else {
                outC->requestTheSetupOfASafeRadioConnection = kcg_false;
              }
              break;
            
          }
          TryToEstablishConnection_isNotPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM =
            RequestConnectionWithTrackSide_SM_fired_strong_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU !=
            SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
          if (TryToEstablishConnection_isNotPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM) {
          }
          else {
            br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission =
              endOfMissionIsPerformed | trainPassesALevelTransitionBorder |
              trainPassesA_RBC_RBC_border_WithItsFrontEnd |
              ((morc_rbca_terminateSesssion ==
                  (*orderToEstablishACommunicationSession_fromTrackside).actionToBePerformed) &
                (*orderToEstablishACommunicationSession_fromTrackside).valid) |
              ((*orderToEstablishACommunicationSession_fromTrackside).valid &
                ((*orderToEstablishACommunicationSession_fromTrackside).rbc_id !=
                  (*orderToEstablishACommunicationSession_fromOBU).rbc_id) &
                ((*orderToEstablishACommunicationSession_fromTrackside).actionToBePerformed ==
                  morc_rbca_establishSession) &
                (*orderToEstablishACommunicationSession_fromOBU).valid &
                ((*orderToEstablishACommunicationSession_fromOBU).actionToBePerformed ==
                  morc_rbca_establishSession) &
                orderDoesNotRequestToContactAnAcceptingRBC);
          }
          break;
        
      }
      if (RequestSetupOfASafeRadioConnection_initiatedByOBU_weakb_clock_EstablishmentOfACommunicationSession_SM) {
      }
      else {
        switch (RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
          case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
            br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              kcg_false;
            break;
          case SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
            if (TryToEstablishConnection_isPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM) {
              br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                kcg_false;
            }
            else if (br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission) {
              br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                kcg_true;
            }
            else {
              br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                kcg_false;
            }
            break;
          case SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
            br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              kcg_false;
            break;
          case SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
            br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              kcg_false;
            break;
          case SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
            if (TryToEstablishConnection_isNotPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM) {
              br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                kcg_false;
            }
            else if (br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission) {
              br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                kcg_true;
            }
            else {
              br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
                kcg_false;
            }
            break;
          
        }
      }
      break;
    case SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      break;
    case SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      break;
    case SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      break;
    case SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      break;
    case SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      break;
    case SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM :
      outC->requestTheSetupOfASafeRadioConnection = kcg_false;
      break;
    
  }
  switch (EstablishmentOfACommunicationSession_SM_state_sel) {
    case SSM_st_Idle_EstablishmentOfACommunicationSession_SM :
      tmp3 = kcg_false;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM :
      tmp3 = kcg_false;
      break;
    case SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM :
      tmp3 = kcg_false;
      break;
    case SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      tmp3 = kcg_false;
      break;
    case SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      if (tmp1) {
        tmp3 = tmp1;
      }
      else {
        tmp3 = kcg_false;
      }
      break;
    case SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM :
      tmp3 = kcg_false;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM :
      tmp3 = kcg_false;
      break;
    case SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM :
      tmp3 = kcg_false;
      break;
    case SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM :
      tmp3 = kcg_false;
      break;
    
  }
  switch (EstablishmentOfACommunicationSession_SM_state_act) {
    case SSM_st_Idle_EstablishmentOfACommunicationSession_SM :
      tmp2 = kcg_false;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM :
      if (RequestSetupOfASafeRadioConnection_initiatedByOBU_weakb_clock_EstablishmentOfACommunicationSession_SM) {
        tmp2 = kcg_false;
      }
      else if (br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        tmp2 = kcg_true;
      }
      else {
        tmp2 = kcg_false;
      }
      break;
    case SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM :
      tmp2 = kcg_false;
      break;
    case SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      tmp2 = kcg_false;
      break;
    case SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      tmp2 = kcg_false;
      break;
    case SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM :
      tmp2 = kcg_false;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM :
      tmp2 = kcg_false;
      break;
    case SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM :
      tmp2 = kcg_false;
      break;
    case SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM :
      tmp2 = kcg_false;
      break;
    
  }
  outC->terminateTheCommunicationSession = tmp3 | tmp2;
  outC->finalAttemptToSetupTheSafeRadioConnectionFailed =
    outC->terminateTheCommunicationSession;
  outC->establishingACommunicationSessionAborted =
    outC->finalAttemptToSetupTheSafeRadioConnectionFailed;
  switch (EstablishmentOfACommunicationSession_SM_state_sel) {
    case SSM_st_Idle_EstablishmentOfACommunicationSession_SM :
      tmp1 = kcg_false;
      tmp = kcg_false;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM :
      tmp1 = kcg_false;
      tmp = kcg_false;
      break;
    case SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM :
      if (br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide) {
        tmp1 = kcg_true;
      }
      else {
        tmp1 = kcg_false;
      }
      tmp = kcg_false;
      break;
    case SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      tmp1 = kcg_false;
      tmp = kcg_false;
      break;
    case SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      tmp1 = kcg_false;
      tmp = kcg_false;
      break;
    case SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM :
      tmp1 = kcg_false;
      tmp = kcg_false;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM :
      tmp1 = kcg_false;
      tmp = kcg_false;
      break;
    case SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM :
      tmp1 = kcg_false;
      if (br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForMessage_InitiationOfCommunicationSession_FromTrackside) {
        tmp = kcg_true;
      }
      else {
        tmp = kcg_false;
      }
      break;
    case SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM :
      tmp1 = kcg_false;
      tmp = kcg_false;
      break;
    
  }
  outC->sendASessionEstablishedReportToTrackside = tmp1 | tmp;
  outC->requestsToSetupTheSafeRadioConnectionStopped =
    outC->finalAttemptToSetupTheSafeRadioConnectionFailed |
    connectionSuccessfullyEstablished;
  switch (EstablishmentOfACommunicationSession_SM_state_act) {
    case SSM_st_Idle_EstablishmentOfACommunicationSession_SM :
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_Idle_EstablishmentOfACommunicationSession_SM;
      outC->sessionSuccessfullyEstablished = kcg_false;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM :
      switch (RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          break;
        case SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          switch (RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM) {
            case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn :
              if (br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConnec) {
                RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM =
                  SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn;
              }
              else {
                RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM =
                  SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn;
              }
              break;
            case SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn :
              RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM =
                SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn;
              break;
            
          }
          switch (RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM) {
            case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn :
              outC->RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM =
                SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn;
              break;
            case SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn :
              outC->RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfM =
                SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn;
              break;
            
          }
          if (TryToEstablishConnection_isPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM) {
            outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          }
          else if (br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission) {
            outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          }
          else {
            outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          }
          break;
        case SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          break;
        case SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
            SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          break;
        case SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          switch (RepeatSetupConnection_SM_state_sel_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart) {
            case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC :
              if (br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupCon) {
                RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
                  SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC;
              }
              else {
                RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
                  SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC;
              }
              break;
            case SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC :
              RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
                SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC;
              break;
            
          }
          switch (RepeatSetupConnection_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart) {
            case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC :
              outC->RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
                SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC;
              break;
            case SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC :
              outC->RepeatSetupConnection_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStart =
                SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC;
              break;
            
          }
          if (TryToEstablishConnection_isNotPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM) {
            outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          }
          else if (br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission) {
            outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          }
          else {
            outC->RequestConnectionWithTrackSide_SM_state_nxt_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU =
              SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM;
          }
          break;
        
      }
      if (RequestSetupOfASafeRadioConnection_initiatedByOBU_weakb_clock_EstablishmentOfACommunicationSession_SM) {
        outC->EstablishmentOfACommunicationSession_SM_state_nxt =
          SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM;
      }
      else if (br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        outC->EstablishmentOfACommunicationSession_SM_state_nxt =
          SSM_st_Idle_EstablishmentOfACommunicationSession_SM;
      }
      else {
        outC->EstablishmentOfACommunicationSession_SM_state_nxt =
          SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM;
      }
      outC->sessionSuccessfullyEstablished = kcg_false;
      break;
    case SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM :
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM;
      outC->sessionSuccessfullyEstablished = kcg_false;
      break;
    case SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM;
      outC->sessionSuccessfullyEstablished = kcg_true;
      break;
    case SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM;
      outC->sessionSuccessfullyEstablished = kcg_false;
      break;
    case SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM :
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM;
      outC->sessionSuccessfullyEstablished = kcg_false;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM :
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM;
      outC->sessionSuccessfullyEstablished = kcg_false;
      break;
    case SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM :
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM;
      outC->sessionSuccessfullyEstablished = kcg_false;
      break;
    case SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM :
      outC->EstablishmentOfACommunicationSession_SM_state_nxt =
        SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM;
      outC->sessionSuccessfullyEstablished = kcg_true;
      break;
    
  }
  switch (EstablishmentOfACommunicationSession_SM_state_sel) {
    case SSM_st_Idle_EstablishmentOfACommunicationSession_SM :
      if (br_1_guard_EstablishmentOfACommunicationSession_SM_Idle) {
        outC->firstRequestToSetupASafeRadioConnection = kcg_true;
      }
      else if (communicationSessionInitiatedFromTrackside_) {
        outC->firstRequestToSetupASafeRadioConnection = kcg_true;
      }
      else {
        outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      }
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM :
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      if (br_1_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
          kcg_true;
      }
      else {
        outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
          kcg_false;
      }
      break;
    case SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM :
      if (br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide) {
      }
      else {
        tmp3 =
          br_2_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide;
      }
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      if (br_1_guard_EstablishmentOfACommunicationSession_SM_WaitForSystemVersionFromTrackSide) {
        outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      }
      else if (tmp3) {
        outC->sendMessage_NoCompatibleVersionSupported = kcg_true;
      }
      else {
        outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      }
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      break;
    case SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      break;
    case SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      break;
    case SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM :
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM :
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      break;
    case SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM :
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      break;
    case SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM :
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      outC->sendMessage_NoCompatibleVersionSupported = kcg_false;
      outC->sendTheMessageInitiationOfCommunicationSessionToTrackside =
        kcg_false;
      break;
    
  }
  switch (EstablishmentOfACommunicationSession_SM_state_act) {
    case SSM_st_Idle_EstablishmentOfACommunicationSession_SM :
      tmp2 = kcg_false;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM :
      switch (RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        case SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          tmp2 = kcg_false;
          break;
        case SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          if (TryToEstablishConnection_isPartOfStartOfMission_weakb_clock_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM) {
            tmp2 = kcg_false;
          }
          else if (br_2_guard_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission) {
            tmp2 = kcg_true;
          }
          else {
            tmp2 = kcg_false;
          }
          break;
        case SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          tmp2 = kcg_false;
          break;
        case SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          tmp2 = kcg_false;
          break;
        case SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          tmp2 = kcg_false;
          break;
        
      }
      break;
    case SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM :
      tmp2 = kcg_false;
      break;
    case SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      tmp2 = kcg_false;
      break;
    case SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM :
      tmp2 = kcg_false;
      break;
    case SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM :
      tmp2 = kcg_false;
      break;
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM :
      tmp2 = kcg_false;
      break;
    case SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM :
      tmp2 = kcg_false;
      break;
    case SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM :
      tmp2 = kcg_false;
      break;
    
  }
  outC->InformTheDriverThatNoConnectionWasSetup =
    outC->sendMessage_NoCompatibleVersionSupported | tmp2;
  outC->init = kcg_false;
  switch (EstablishmentOfACommunicationSession_SM_state_act) {
    case SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM :
      outC->init1 = kcg_false;
      switch (RequestConnectionWithTrackSide_SM_state_act_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU) {
        case SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          outC->init3 = kcg_false;
          break;
        case SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM :
          outC->init2 = kcg_false;
          break;
        
      }
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** establish_a_CommunicationSession.c
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

