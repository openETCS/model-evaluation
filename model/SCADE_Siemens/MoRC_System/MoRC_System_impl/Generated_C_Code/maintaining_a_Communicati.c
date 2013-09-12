/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-09T16:35:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "maintaining_a_Communicati.h"

void maintaining_a_Communicati_reset(outC_maintaining_a_Communicati *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  /* 1 */ countDownTimer_reset(&outC->Context_1);
}

/** Subset 096, REQ 3.5.4 */
/** Maintains an established communcation session. */
/** "Remark_1" {Description = "- Name: maintaining_a_CommunicationSession - Description: Maintains an established communcation session.   - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* maintaining_a_CommunicationSession */
void maintaining_a_Communicati(
  /* maintaining_a_CommunicationSession::communicationSessionEstablished */kcg_bool communicationSessionEstablished,
  /* maintaining_a_CommunicationSession::safeRadioConnectionReestablished */kcg_bool safeRadioConnectionReestablished,
  /* maintaining_a_CommunicationSession::lossOfTheSafeRadioConnection */kcg_bool lossOfTheSafeRadioConnection,
  /* maintaining_a_CommunicationSession::disconnectionHasNotBeenOrdered */kcg_bool disconnectionHasNotBeenOrdered,
  /* maintaining_a_CommunicationSession::trainFrontInsideInAnAnnouncedRadioHole */kcg_bool trainFrontInsideInAnAnnouncedRadioHole,
  /* maintaining_a_CommunicationSession::actualTime */time_Type actualTime,
  outC_maintaining_a_Communicati *outC)
{
  SSM_TR_Maintaining_SM tmp1;
  kcg_bool tmp;
  /* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished::_L2 */ kcg_bool _L2_Maintaining_SM_CommunicationSessionEstablished;
  /* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */ SSM_ST_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished;
  /* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */ SSM_ST_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished;
  /* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished */ kcg_bool CommunicationSessionEstablished_weakb_clock_Maintaining_SM;
  /* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM::SafeRadio_connected */ kcg_bool _2_br_1_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected;
  /* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM::SafeRadio_connected */ kcg_bool br_2_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected;
  /* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished */ kcg_bool br_1_guard_Maintaining_SM_CommunicationSessionEstablished;
  /* maintaining_a_CommunicationSession::Maintaining_SM */ SSM_ST_Maintaining_SM Maintaining_SM_state_sel;
  /* maintaining_a_CommunicationSession::Maintaining_SM */ SSM_ST_Maintaining_SM Maintaining_SM_state_act;
  /* maintaining_a_CommunicationSession::Maintaining_SM */ kcg_bool Maintaining_SM_reset_act;
  
  if (outC->init) {
    Maintaining_SM_state_sel =
      SSM_st_CommunicationSessionNotEstablished_Maintaining_SM;
  }
  else {
    Maintaining_SM_state_sel = outC->Maintaining_SM_state_nxt;
  }
  switch (Maintaining_SM_state_sel) {
    case SSM_st_CommunicationSessionNotEstablished_Maintaining_SM :
      if (communicationSessionEstablished) {
        Maintaining_SM_state_act =
          SSM_st_CommunicationSessionEstablished_Maintaining_SM;
      }
      else {
        Maintaining_SM_state_act =
          SSM_st_CommunicationSessionNotEstablished_Maintaining_SM;
      }
      break;
    case SSM_st_CommunicationSessionEstablished_Maintaining_SM :
      Maintaining_SM_state_act =
        SSM_st_CommunicationSessionEstablished_Maintaining_SM;
      break;
    
  }
  switch (Maintaining_SM_state_act) {
    case SSM_st_CommunicationSessionEstablished_Maintaining_SM :
      switch (Maintaining_SM_state_sel) {
        case SSM_st_CommunicationSessionNotEstablished_Maintaining_SM :
          if (communicationSessionEstablished) {
            tmp1 = SSM_TR_CommunicationSessionNotEstablished_1_Maintaining_SM;
          }
          else {
            tmp1 = SSM_TR_no_trans_Maintaining_SM;
          }
          break;
        case SSM_st_CommunicationSessionEstablished_Maintaining_SM :
          tmp1 = SSM_TR_no_trans_Maintaining_SM;
          break;
        
      }
      CommunicationSessionEstablished_weakb_clock_Maintaining_SM = tmp1 !=
        SSM_TR_no_trans_Maintaining_SM;
      break;
    
  }
  switch (Maintaining_SM_state_sel) {
    case SSM_st_CommunicationSessionNotEstablished_Maintaining_SM :
      Maintaining_SM_reset_act = communicationSessionEstablished;
      break;
    case SSM_st_CommunicationSessionEstablished_Maintaining_SM :
      Maintaining_SM_reset_act = kcg_false;
      break;
    
  }
  switch (Maintaining_SM_state_act) {
    case SSM_st_CommunicationSessionNotEstablished_Maintaining_SM :
      outC->informTheDriverThatNoConnectionWasSetup = kcg_false;
      break;
    case SSM_st_CommunicationSessionEstablished_Maintaining_SM :
      if (Maintaining_SM_reset_act) {
        outC->init1 = kcg_true;
      }
      if (outC->init1) {
        RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished =
          SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
      }
      else {
        RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished =
          outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished;
      }
      switch (RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished) {
        case SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          _2_br_1_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected =
            trainFrontInsideInAnAnnouncedRadioHole &
            lossOfTheSafeRadioConnection;
          br_2_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected =
            lossOfTheSafeRadioConnection & disconnectionHasNotBeenOrdered;
          if (_2_br_1_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected) {
            _L2_Maintaining_SM_CommunicationSessionEstablished = kcg_false;
          }
          else if (br_2_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected) {
            _L2_Maintaining_SM_CommunicationSessionEstablished = kcg_true;
          }
          else {
            _L2_Maintaining_SM_CommunicationSessionEstablished = kcg_false;
          }
          break;
        case SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          _L2_Maintaining_SM_CommunicationSessionEstablished = kcg_false;
          break;
        case SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          _L2_Maintaining_SM_CommunicationSessionEstablished = kcg_false;
          break;
        case SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          tmp = !trainFrontInsideInAnAnnouncedRadioHole;
          if (tmp) {
            _L2_Maintaining_SM_CommunicationSessionEstablished = kcg_true;
          }
          else {
            _L2_Maintaining_SM_CommunicationSessionEstablished = kcg_false;
          }
          break;
        
      }
      if (Maintaining_SM_reset_act) {
        /* 1 */ countDownTimer_reset(&outC->Context_1);
      }
      /* 1 */
      countDownTimer(
        _L2_Maintaining_SM_CommunicationSessionEstablished,
        kcg_false,
        actualTime,
        kcg_false,
        cRadioConnectionReestablishingTimeout,
        &outC->Context_1);
      switch (RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished) {
        case SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          if (_2_br_1_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected) {
            RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
              SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          }
          else if (br_2_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected) {
            RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
              SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          }
          else {
            RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
              SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          }
          break;
        case SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          if (safeRadioConnectionReestablished) {
            RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
              SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          }
          else if (outC->Context_1.expired) {
            RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
              SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          }
          else {
            RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
              SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          }
          break;
        case SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
            SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          break;
        case SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          if (tmp) {
            RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
              SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          }
          else {
            RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished =
              SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          }
          break;
        
      }
      switch (RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished) {
        case SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished =
            SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          break;
        case SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished =
            SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          break;
        case SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished =
            SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          break;
        case SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished =
            SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
          break;
        
      }
      if (CommunicationSessionEstablished_weakb_clock_Maintaining_SM) {
        outC->informTheDriverThatNoConnectionWasSetup = kcg_false;
      }
      else {
        br_1_guard_Maintaining_SM_CommunicationSessionEstablished =
          outC->RadioConnection_SM_state_nxt_Maintaining_SM_CommunicationSessionEstablished ==
          SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM;
        if (br_1_guard_Maintaining_SM_CommunicationSessionEstablished) {
          outC->informTheDriverThatNoConnectionWasSetup = kcg_true;
        }
        else {
          outC->informTheDriverThatNoConnectionWasSetup = kcg_false;
        }
      }
      break;
    
  }
  outC->finalAttemptToSetupTheSafeRadioConnectionFailed =
    outC->informTheDriverThatNoConnectionWasSetup;
  switch (Maintaining_SM_state_act) {
    case SSM_st_CommunicationSessionNotEstablished_Maintaining_SM :
      tmp = kcg_false;
      break;
    case SSM_st_CommunicationSessionEstablished_Maintaining_SM :
      switch (RadioConnection_SM_state_sel_Maintaining_SM_CommunicationSessionEstablished) {
        case SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          if (_2_br_1_guard_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM_SafeRadio_connected) {
            tmp = kcg_true;
          }
          else {
            tmp = kcg_false;
          }
          break;
        case SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          tmp = kcg_false;
          break;
        case SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          tmp = kcg_false;
          break;
        case SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          tmp = kcg_false;
          break;
        
      }
      break;
    
  }
  outC->requestsToSetupTheSafeRadioConnectionStopped =
    outC->finalAttemptToSetupTheSafeRadioConnectionFailed | tmp;
  switch (Maintaining_SM_state_act) {
    case SSM_st_CommunicationSessionNotEstablished_Maintaining_SM :
      outC->Maintaining_SM_state_nxt =
        SSM_st_CommunicationSessionNotEstablished_Maintaining_SM;
      outC->tryToSetupANewSafeRadioConnection = kcg_false;
      outC->firstRequestToSetupASafeRadioConnection = kcg_false;
      break;
    case SSM_st_CommunicationSessionEstablished_Maintaining_SM :
      if (CommunicationSessionEstablished_weakb_clock_Maintaining_SM) {
        outC->Maintaining_SM_state_nxt =
          SSM_st_CommunicationSessionEstablished_Maintaining_SM;
      }
      else if (br_1_guard_Maintaining_SM_CommunicationSessionEstablished) {
        outC->Maintaining_SM_state_nxt =
          SSM_st_CommunicationSessionNotEstablished_Maintaining_SM;
      }
      else {
        outC->Maintaining_SM_state_nxt =
          SSM_st_CommunicationSessionEstablished_Maintaining_SM;
      }
      switch (RadioConnection_SM_state_act_Maintaining_SM_CommunicationSessionEstablished) {
        case SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          outC->tryToSetupANewSafeRadioConnection = kcg_false;
          break;
        case SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          outC->tryToSetupANewSafeRadioConnection = kcg_true;
          break;
        case SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          outC->tryToSetupANewSafeRadioConnection = kcg_false;
          break;
        case SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM :
          outC->tryToSetupANewSafeRadioConnection = kcg_false;
          break;
        
      }
      outC->firstRequestToSetupASafeRadioConnection =
        _L2_Maintaining_SM_CommunicationSessionEstablished;
      break;
    
  }
  outC->init = kcg_false;
  switch (Maintaining_SM_state_act) {
    case SSM_st_CommunicationSessionEstablished_Maintaining_SM :
      outC->init1 = kcg_false;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** maintaining_a_Communicati.c
** Generation date: 2013-09-09T16:35:22
*************************************************************$ */

