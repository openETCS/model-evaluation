/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "initiateTerminatingASession.h"

void initiateTerminatingASession_reset(outC_initiateTerminatingASession *outC)
{
  outC->init = kcg_true;
  /* 1 */ waitAndRepeatTimer_reset(&outC->Context_1);
}

/** Subset 096, REQ 3.5.5.1 */
/** Initiates and processes the termination of a communication session. */
/** "Remark_1" {Description = "- Name: initiateTerminatingASession - Description: Initiates and processes the termination of a communication session.  - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* initiateTerminatingASession */
void initiateTerminatingASession(
  /* initiateTerminatingASession::orderReceivedFromTrackside */orderToContactAnRBC_Type *orderReceivedFromTrackside,
  /* initiateTerminatingASession::errorConditionRequiringTerminationDetected */kcg_bool errorConditionRequiringTerminationDetected,
  /* initiateTerminatingASession::trainIsRejectedByRBC_duringStartOfMission */kcg_bool trainIsRejectedByRBC_duringStartOfMission,
  /* initiateTerminatingASession::driverClosesTheDeskduringStartOfMission */kcg_bool driverClosesTheDeskduringStartOfMission,
  /* initiateTerminatingASession::trainExitedFromAnRBCArea */kcg_bool trainExitedFromAnRBCArea,
  /* initiateTerminatingASession::receivedOrderToTerminateTheSession */orderToContactAnRBC_Type *receivedOrderToTerminateTheSession,
  /* initiateTerminatingASession::actualTime */time_Type actualTime,
  /* initiateTerminatingASession::isInCommunicationSessionWithAnRIU */kcg_bool isInCommunicationSessionWithAnRIU,
  /* initiateTerminatingASession::level_1_isLeft */kcg_bool level_1_isLeft,
  /* initiateTerminatingASession::endOfMissionIsExecuted */kcg_bool endOfMissionIsExecuted,
  outC_initiateTerminatingASession *outC)
{
  SSM_TR_TrainExitedFromRBCArea_SM tmp1;
  kcg_bool tmp;
  /* initiateTerminatingASession::TrainExitedFromRBCArea_SM::WaitForOrderToTerminateTheSession::_L25 */ kcg_bool _L25_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession;
  /* initiateTerminatingASession::TrainExitedFromRBCArea_SM::WaitForOrderToTerminateTheSession */ kcg_bool WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM;
  /* initiateTerminatingASession::TrainExitedFromRBCArea_SM */ SSM_ST_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_state_sel;
  /* initiateTerminatingASession::TrainExitedFromRBCArea_SM */ SSM_ST_TrainExitedFromRBCArea_SM TrainExitedFromRBCArea_SM_state_act;
  /* initiateTerminatingASession::TrainExitedFromRBCArea_SM */ kcg_bool TrainExitedFromRBCArea_SM_reset_act;
  
  tmp = (*receivedOrderToTerminateTheSession).valid &
    ((*receivedOrderToTerminateTheSession).actionToBePerformed ==
      morc_rbca_terminateSesssion);
  if (outC->init) {
    TrainExitedFromRBCArea_SM_state_sel = SSM_st_Idle_TrainExitedFromRBCArea_SM;
  }
  else {
    TrainExitedFromRBCArea_SM_state_sel =
      outC->TrainExitedFromRBCArea_SM_state_nxt;
  }
  switch (TrainExitedFromRBCArea_SM_state_sel) {
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      if (trainExitedFromAnRBCArea) {
        TrainExitedFromRBCArea_SM_state_act =
          SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
      }
      else {
        TrainExitedFromRBCArea_SM_state_act =
          SSM_st_Idle_TrainExitedFromRBCArea_SM;
      }
      break;
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      if (tmp) {
        TrainExitedFromRBCArea_SM_state_act =
          SSM_st_Idle_TrainExitedFromRBCArea_SM;
      }
      else {
        TrainExitedFromRBCArea_SM_state_act =
          SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
      }
      break;
    
  }
  switch (TrainExitedFromRBCArea_SM_state_act) {
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      switch (TrainExitedFromRBCArea_SM_state_sel) {
        case SSM_st_Idle_TrainExitedFromRBCArea_SM :
          if (trainExitedFromAnRBCArea) {
            tmp1 = SSM_TR_Idle_1_TrainExitedFromRBCArea_SM;
          }
          else {
            tmp1 = SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
          }
          break;
        case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
          if (tmp) {
            tmp1 =
              SSM_TR_WaitForOrderToTerminateTheSession_1_TrainExitedFromRBCArea_SM;
          }
          else {
            tmp1 = SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
          }
          break;
        
      }
      WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM =
        tmp1 != SSM_TR_no_trans_TrainExitedFromRBCArea_SM;
      break;
    
  }
  switch (TrainExitedFromRBCArea_SM_state_sel) {
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      TrainExitedFromRBCArea_SM_reset_act = trainExitedFromAnRBCArea;
      break;
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      TrainExitedFromRBCArea_SM_reset_act = tmp;
      break;
    
  }
  switch (TrainExitedFromRBCArea_SM_state_act) {
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      outC->TrainExitedFromRBCArea_SM_state_nxt =
        SSM_st_Idle_TrainExitedFromRBCArea_SM;
      tmp = kcg_false;
      break;
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      if (TrainExitedFromRBCArea_SM_reset_act) {
        /* 1 */ waitAndRepeatTimer_reset(&outC->Context_1);
      }
      /* 1 */
      waitAndRepeatTimer(
        actualTime,
        kcg_false,
        kcg_false,
        cPositionReportRepetitionInterval,
        cPositionReoport_MaxNoOfRepetitions,
        &outC->Context_1);
      _L25_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession =
        outC->Context_1.triggerAction;
      if (WaitForOrderToTerminateTheSession_weakb_clock_TrainExitedFromRBCArea_SM) {
        outC->TrainExitedFromRBCArea_SM_state_nxt =
          SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
        tmp = kcg_false;
      }
      else if (outC->Context_1.elapsed) {
        outC->TrainExitedFromRBCArea_SM_state_nxt =
          SSM_st_Idle_TrainExitedFromRBCArea_SM;
        tmp = kcg_true;
      }
      else {
        outC->TrainExitedFromRBCArea_SM_state_nxt =
          SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM;
        tmp = kcg_false;
      }
      break;
    
  }
  outC->initiateTermination = ((*orderReceivedFromTrackside).valid &
      ((*orderReceivedFromTrackside).actionToBePerformed ==
        morc_rbca_terminateSesssion)) |
    errorConditionRequiringTerminationDetected |
    trainIsRejectedByRBC_duringStartOfMission |
    driverClosesTheDeskduringStartOfMission | tmp | ((level_1_isLeft &
        isInCommunicationSessionWithAnRIU) |
      (isInCommunicationSessionWithAnRIU & endOfMissionIsExecuted));
  switch (TrainExitedFromRBCArea_SM_state_act) {
    case SSM_st_Idle_TrainExitedFromRBCArea_SM :
      outC->sendAPositionReport = kcg_false;
      break;
    case SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM :
      outC->sendAPositionReport =
        _L25_TrainExitedFromRBCArea_SM_WaitForOrderToTerminateTheSession;
      break;
    
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** initiateTerminatingASession.c
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

