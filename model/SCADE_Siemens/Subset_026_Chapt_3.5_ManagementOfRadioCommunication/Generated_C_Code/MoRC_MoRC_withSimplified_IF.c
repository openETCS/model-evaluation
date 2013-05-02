/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-04-22T16:56:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_MoRC_withSimplified_IF.h"

void MoRC_MoRC_withSimplified_IF_reset(MoRC_outC_MoRC_withSimplified_IF *outC)
{
  outC->init = kcg_true;
  /* 1 */ MoRC_managementOfRadioCommunication_reset(&outC->Context_1);
}

/** "Remark_1" {Description = "- Name: managementOfRadioCommunication - Description: This a interface adapter at the top level of the "Management of Radio Communication" function - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* MoRC_withSimplified_IF */
void MoRC_MoRC_withSimplified_IF(
  MoRC_inC_MoRC_withSimplified_IF *inC,
  MoRC_outC_MoRC_withSimplified_IF *outC)
{
  kcg_bool tmp5;
  MoRC_orderToContactAnRBC_Type tmp4;
  kcg_bool tmp3;
  MoRC_mobileHWStatus_Type tmp2;
  kcg_bool tmp1;
  kcg_bool tmp;
  /* MoRC_withSimplified_IF::MessageFromTrackDec::else */ kcg_bool _9_else_clock_MessageFromTrackDec;
  /* MoRC_withSimplified_IF::MessageFromTrackDec::else::else::else */ kcg_bool _7_else_clock_MessageFromTrackDec;
  /* MoRC_withSimplified_IF::MessageFromTrackDec::else::else::else::else::else */ kcg_bool else_clock_MessageFromTrackDec;
  /* MoRC_withSimplified_IF::MessageFromTrackDec::else::else::else::else */ kcg_bool _6_else_clock_MessageFromTrackDec;
  /* MoRC_withSimplified_IF::MessageFromTrackDec::else::else */ kcg_bool _8_else_clock_MessageFromTrackDec;
  /* MoRC_withSimplified_IF::MessageFromTrackDec */ kcg_bool MessageFromTrackDec_clock;
  /* MoRC_withSimplified_IF::PowerUpSequencer */ MoRC_SSM_ST_PowerUpSequencer PowerUpSequencer_state_act;
  /* MoRC_withSimplified_IF::initiateCmd_fromOBU */ kcg_bool initiateCmd_fromOBU;
  /* MoRC_withSimplified_IF::establishOrderFromRBC */ MoRC_orderToContactAnRBC_Type establishOrderFromRBC;
  /* MoRC_withSimplified_IF::terminateOrderFromRBC */ MoRC_orderToContactAnRBC_Type terminateOrderFromRBC;
  /* MoRC_withSimplified_IF::orderReceivedFromTrackside */ MoRC_orderToContactAnRBC_Type orderReceivedFromTrackside;
  /* MoRC_withSimplified_IF::_L47 */ kcg_bool _L47;
  
  else_clock_MessageFromTrackDec = inC->orderFromOnBoard ==
    MoRC_obo_initiateCommunication;
  _L47 = inC->orderFromOnBoard == MoRC_obo_terminateCommunication;
  MoRC_kcg_copy_orderToContactAnRBC_Type(
    &terminateOrderFromRBC,
    (MoRC_orderToContactAnRBC_Type *) &MoRC_cTerminateOrderFromTrackside);
  terminateOrderFromRBC.rbc_id = inC->NID_RBC_ID;
  MoRC_kcg_copy_orderToContactAnRBC_Type(
    &establishOrderFromRBC,
    (MoRC_orderToContactAnRBC_Type *) &MoRC_cEstablishOrderFromTrackside);
  establishOrderFromRBC.rbc_id = inC->NID_RBC_ID;
  if (else_clock_MessageFromTrackDec) {
    initiateCmd_fromOBU = kcg_true;
    MoRC_kcg_copy_orderToContactAnRBC_Type(
      &orderReceivedFromTrackside,
      &establishOrderFromRBC);
  }
  else {
    initiateCmd_fromOBU = kcg_false;
    if (_L47) {
      MoRC_kcg_copy_orderToContactAnRBC_Type(
        &orderReceivedFromTrackside,
        &terminateOrderFromRBC);
    }
    else {
      MoRC_kcg_copy_orderToContactAnRBC_Type(
        &orderReceivedFromTrackside,
        (MoRC_orderToContactAnRBC_Type *) &MoRC_cInvalidOrderToContactAnRBC);
    }
  }
  MessageFromTrackDec_clock = inC->messageFromRBC ==
    MoRC_cNID_MESSAGE_GeneralMessage;
  if (outC->init) {
    outC->init = kcg_false;
    PowerUpSequencer_state_act = MoRC_SSM_st_TheVeryFirstCycle_PowerUpSequencer;
  }
  else {
    PowerUpSequencer_state_act = outC->PowerUpSequencer_state_nxt;
  }
  switch (PowerUpSequencer_state_act) {
    case MoRC_SSM_st_TheVeryFirstCycle_PowerUpSequencer :
      tmp3 = kcg_false;
      MoRC_kcg_copy_mobileHWStatus_Type(
        &tmp2,
        (MoRC_mobileHWStatus_Type *) &MoRC_cMobileHWStatus_notRegistered);
      break;
    case MoRC_SSM_st_AtPowerUpState_PowerUpSequencer :
      tmp3 = kcg_true;
      MoRC_kcg_copy_mobileHWStatus_Type(
        &tmp2,
        (MoRC_mobileHWStatus_Type *) &MoRC_cMobileHWStatus_notRegistered);
      break;
    case MoRC_SSM_st_AfterPowerUp_PowerUpSequencer :
      tmp3 = kcg_false;
      if (inC->safeRadioCommunication_setUpEstablished) {
        MoRC_kcg_copy_mobileHWStatus_Type(
          &tmp2,
          (MoRC_mobileHWStatus_Type *) &MoRC_cMobileHWStatus_Registered);
      }
      else {
        MoRC_kcg_copy_mobileHWStatus_Type(
          &tmp2,
          (MoRC_mobileHWStatus_Type *) &MoRC_cMobileHWStatus_notRegistered);
      }
      break;
    
  }
  if (MessageFromTrackDec_clock) {
    tmp5 = kcg_false;
    MoRC_kcg_copy_orderToContactAnRBC_Type(&tmp4, &terminateOrderFromRBC);
    tmp = kcg_false;
    tmp1 = kcg_false;
  }
  else {
    _9_else_clock_MessageFromTrackDec = inC->messageFromRBC ==
      MoRC_cNID_MESSAGE_GeneralMessage_init;
    if (_9_else_clock_MessageFromTrackDec) {
      tmp5 = kcg_false;
      MoRC_kcg_copy_orderToContactAnRBC_Type(&tmp4, &establishOrderFromRBC);
      tmp = kcg_false;
      tmp1 = kcg_false;
    }
    else {
      _8_else_clock_MessageFromTrackDec = inC->messageFromRBC ==
        MoRC_cNID_MESSAGE_RBC_RIU_SystemVersion;
      if (_8_else_clock_MessageFromTrackDec) {
        tmp5 = kcg_false;
        MoRC_kcg_copy_orderToContactAnRBC_Type(
          &tmp4,
          (MoRC_orderToContactAnRBC_Type *) &MoRC_cInvalidOrderToContactAnRBC);
        tmp = kcg_true;
        tmp1 = kcg_false;
      }
      else {
        _7_else_clock_MessageFromTrackDec = inC->messageFromRBC ==
          MoRC_cNID_MESSAGE_InitiationOfACommunicationSession_track;
        tmp = kcg_false;
        if (_7_else_clock_MessageFromTrackDec) {
          tmp5 = kcg_false;
          MoRC_kcg_copy_orderToContactAnRBC_Type(&tmp4, &establishOrderFromRBC);
          tmp1 = kcg_false;
        }
        else {
          _6_else_clock_MessageFromTrackDec = inC->messageFromRBC ==
            MoRC_cNID_MESSAGE_AckOfTerminationOfACommunicationSession;
          MoRC_kcg_copy_orderToContactAnRBC_Type(
            &tmp4,
            (MoRC_orderToContactAnRBC_Type *)
              &MoRC_cInvalidOrderToContactAnRBC);
          if (_6_else_clock_MessageFromTrackDec) {
            tmp5 = kcg_true;
            tmp1 = kcg_false;
          }
          else {
            else_clock_MessageFromTrackDec = inC->messageFromRBC ==
              MoRC_cNID_PACKET_131;
            tmp5 = kcg_false;
            if (else_clock_MessageFromTrackDec) {
              tmp1 = kcg_true;
            }
            else {
              tmp1 = kcg_false;
            }
          }
        }
      }
    }
  }
  /* 1 */
  MoRC_managementOfRadioCommunication(
    inC->actualTime,
    tmp5,
    &orderReceivedFromTrackside,
    &tmp4,
    &orderReceivedFromTrackside,
    _L47,
    _L47,
    _L47,
    _L47,
    _L47,
    kcg_false,
    tmp3,
    kcg_false,
    inC->M_Level,
    (MoRC_validRadioNetworkID_Type *) &MoRC_cSampleRadioNetworkID,
    (MoRC_validRadioNetworkID_Type *) &MoRC_cInvalidRadioNetworkID,
    (MoRC_validRadioNetworkID_Type *) &MoRC_cSampleRadioNetworkID,
    kcg_false,
    kcg_false,
    &tmp2,
    kcg_false,
    kcg_false,
    &orderReceivedFromTrackside,
    kcg_false,
    tmp1,
    inC->systemVersionIsCompatible,
    tmp,
    inC->M_Mode,
    initiateCmd_fromOBU,
    kcg_true,
    initiateCmd_fromOBU,
    (kcg_bool) (MoRC_rhs_end == inC->radioHole_status),
    kcg_true,
    (kcg_bool) (inC->radioHole_status == MoRC_rhs_inside),
    initiateCmd_fromOBU,
    initiateCmd_fromOBU,
    (MoRC_validRadioNetworkID_Type *) &MoRC_cSampleRadioNetworkID,
    MoRC_cConnectionStatusTimerInterval,
    &outC->Context_1);
  outC->radioComSesssionEstablished =
    outC->Context_1.sessionSuccessfullyEstablished;
  outC->safeRadioCommunication_requestSetUp =
    outC->Context_1.mobileHWCmd.valid && outC->Context_1.mobileHWCmd.action ==
    MoRC_mhwa_register;
  outC->safeRadioCommunication_releaseSetUp =
    outC->Context_1.mobileHWCmd.valid && outC->Context_1.mobileHWCmd.action ==
    MoRC_mhwa_unregister;
  if (outC->Context_1.sendTheMessageInitiationOfCommunicationSessionToTrackside) {
    outC->messageToRBC = MoRC_cNID_MESSAGE_InitiationOfACommunicationSession;
  }
  else if (outC->Context_1.sendATerminationOfCommunicationMessage) {
    outC->messageToRBC = MoRC_cNID_MESSAGE_terminationOfACommunicationSession;
  }
  else if (outC->Context_1.sendMessage_NoCompatibleVersionSupported) {
    outC->messageToRBC = MoRC_cNID_MESSAGE_NoCompatibleVersionSupported;
  }
  else if (outC->Context_1.sendASessionEstablishedReportToTrackside) {
    outC->messageToRBC = MoRC_cNID_MESSAGE_SessionEstablished;
  }
  else {
    outC->messageToRBC = MoRC_cNID_MESSAGE_noMessage;
  }
  switch (PowerUpSequencer_state_act) {
    case MoRC_SSM_st_TheVeryFirstCycle_PowerUpSequencer :
      outC->PowerUpSequencer_state_nxt =
        MoRC_SSM_st_AtPowerUpState_PowerUpSequencer;
      break;
    case MoRC_SSM_st_AtPowerUpState_PowerUpSequencer :
      if (outC->safeRadioCommunication_requestSetUp) {
        outC->PowerUpSequencer_state_nxt =
          MoRC_SSM_st_AfterPowerUp_PowerUpSequencer;
      }
      else {
        outC->PowerUpSequencer_state_nxt =
          MoRC_SSM_st_AtPowerUpState_PowerUpSequencer;
      }
      break;
    case MoRC_SSM_st_AfterPowerUp_PowerUpSequencer :
      outC->PowerUpSequencer_state_nxt =
        MoRC_SSM_st_AfterPowerUp_PowerUpSequencer;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_MoRC_withSimplified_IF.c
** Generation date: 2013-04-22T16:56:47
*************************************************************$ */

