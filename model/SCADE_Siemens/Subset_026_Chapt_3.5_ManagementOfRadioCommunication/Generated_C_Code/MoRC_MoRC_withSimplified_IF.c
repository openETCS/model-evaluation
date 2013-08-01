/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-08-01T09:52:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_MoRC_withSimplified_IF.h"

void MoRC_MoRC_withSimplified_IF_reset(MoRC_outC_MoRC_withSimplified_IF *outC)
{
  /* 1 */ MoRC_managementOfRadioCommunication_reset(&outC->Context_1);
  /* 1 */ MoRC_FallingEdge_reset_digital(&outC->_1_Context_1);
}

/** "Remark_1" {Description = "- Name: managementOfRadioCommunication - Description: This a interface adapter at the top level of the "Management of Radio Communication" function - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* MoRC_withSimplified_IF */
void MoRC_MoRC_withSimplified_IF(
  MoRC_inC_MoRC_withSimplified_IF *inC,
  MoRC_outC_MoRC_withSimplified_IF *outC)
{
  MoRC_struct__10910 tmp;
  MoRC_struct__10910 tmp1;
  MoRC_struct__10910 tmp2;
  MoRC_struct__10904 tmp3;
  kcg_bool tmp7;
  MoRC_orderToContactAnRBC_Type tmp6;
  kcg_bool tmp5;
  kcg_bool tmp4;
  /* MoRC_withSimplified_IF::MessageFromTrackDec::else */ kcg_bool _11_else_clock_MessageFromTrackDec;
  /* MoRC_withSimplified_IF::MessageFromTrackDec::else::else::else */ kcg_bool _9_else_clock_MessageFromTrackDec;
  /* MoRC_withSimplified_IF::MessageFromTrackDec::else::else::else::else::else */ kcg_bool else_clock_MessageFromTrackDec;
  /* MoRC_withSimplified_IF::MessageFromTrackDec::else::else::else::else */ kcg_bool _8_else_clock_MessageFromTrackDec;
  /* MoRC_withSimplified_IF::MessageFromTrackDec::else::else */ kcg_bool _10_else_clock_MessageFromTrackDec;
  /* MoRC_withSimplified_IF::MessageFromTrackDec */ kcg_bool MessageFromTrackDec_clock;
  /* MoRC_withSimplified_IF::initiateCmd_fromOBU */ kcg_bool initiateCmd_fromOBU;
  /* MoRC_withSimplified_IF::orderReceivedFromRBC */ MoRC_orderToContactAnRBC_Type orderReceivedFromRBC;
  /* MoRC_withSimplified_IF::establishOrderFromRBC */ MoRC_orderToContactAnRBC_Type establishOrderFromRBC;
  /* MoRC_withSimplified_IF::terminateOrderFromRBC */ MoRC_orderToContactAnRBC_Type terminateOrderFromRBC;
  /* MoRC_withSimplified_IF::_L47 */ kcg_bool _L47;
  
  tmp5 = inC->orderFromOnBoard == MoRC_obo_initiateCommunication;
  _L47 = inC->orderFromOnBoard == MoRC_obo_terminateCommunication;
  MessageFromTrackDec_clock = inC->messageFromRBC ==
    MoRC_cNID_MESSAGE_GeneralMessage;
  MoRC_kcg_copy_orderToContactAnRBC_Type(
    &establishOrderFromRBC,
    (MoRC_orderToContactAnRBC_Type *) &MoRC_cEstablishOrderFromTrackside);
  establishOrderFromRBC.rbc_id = inC->NID_RBC_ID;
  MoRC_kcg_copy_orderToContactAnRBC_Type(
    &terminateOrderFromRBC,
    (MoRC_orderToContactAnRBC_Type *) &MoRC_cTerminateOrderFromTrackside);
  terminateOrderFromRBC.rbc_id = inC->NID_RBC_ID;
  /* 1 */ MoRC_FallingEdge_digital(inC->powerAvailable, &outC->_1_Context_1);
  if (tmp5) {
    initiateCmd_fromOBU = kcg_true;
    MoRC_kcg_copy_orderToContactAnRBC_Type(&tmp6, &establishOrderFromRBC);
  }
  else {
    initiateCmd_fromOBU = kcg_false;
    if (_L47) {
      MoRC_kcg_copy_orderToContactAnRBC_Type(&tmp6, &terminateOrderFromRBC);
    }
    else {
      MoRC_kcg_copy_orderToContactAnRBC_Type(
        &tmp6,
        (MoRC_orderToContactAnRBC_Type *) &MoRC_cInvalidOrderToContactAnRBC);
    }
  }
  if (MessageFromTrackDec_clock) {
    tmp7 = kcg_false;
    MoRC_kcg_copy_orderToContactAnRBC_Type(
      &orderReceivedFromRBC,
      &terminateOrderFromRBC);
    tmp4 = kcg_false;
    tmp5 = kcg_false;
  }
  else {
    _11_else_clock_MessageFromTrackDec = inC->messageFromRBC ==
      MoRC_cNID_MESSAGE_GeneralMessage_init;
    if (_11_else_clock_MessageFromTrackDec) {
      tmp7 = kcg_false;
      MoRC_kcg_copy_orderToContactAnRBC_Type(
        &orderReceivedFromRBC,
        &establishOrderFromRBC);
      tmp4 = kcg_false;
      tmp5 = kcg_false;
    }
    else {
      _10_else_clock_MessageFromTrackDec = inC->messageFromRBC ==
        MoRC_cNID_MESSAGE_RBC_RIU_SystemVersion;
      if (_10_else_clock_MessageFromTrackDec) {
        tmp7 = kcg_false;
        MoRC_kcg_copy_orderToContactAnRBC_Type(
          &orderReceivedFromRBC,
          (MoRC_orderToContactAnRBC_Type *) &MoRC_cInvalidOrderToContactAnRBC);
        tmp4 = kcg_true;
        tmp5 = kcg_false;
      }
      else {
        _9_else_clock_MessageFromTrackDec = inC->messageFromRBC ==
          MoRC_cNID_MESSAGE_InitiationOfACommunicationSession_track;
        tmp4 = kcg_false;
        if (_9_else_clock_MessageFromTrackDec) {
          tmp7 = kcg_false;
          MoRC_kcg_copy_orderToContactAnRBC_Type(
            &orderReceivedFromRBC,
            &establishOrderFromRBC);
          tmp5 = kcg_false;
        }
        else {
          MoRC_kcg_copy_orderToContactAnRBC_Type(
            &orderReceivedFromRBC,
            (MoRC_orderToContactAnRBC_Type *)
              &MoRC_cInvalidOrderToContactAnRBC);
          _8_else_clock_MessageFromTrackDec = inC->messageFromRBC ==
            MoRC_cNID_MESSAGE_AckOfTerminationOfACommunicationSession;
          if (_8_else_clock_MessageFromTrackDec) {
            tmp7 = kcg_true;
            tmp5 = kcg_false;
          }
          else {
            tmp7 = kcg_false;
            else_clock_MessageFromTrackDec = inC->messageFromRBC ==
              MoRC_cNID_PACKET_131;
            if (else_clock_MessageFromTrackDec) {
              tmp5 = kcg_true;
            }
            else {
              tmp5 = kcg_false;
            }
          }
        }
      }
    }
  }
  tmp3.valid = kcg_true;
  tmp3.connectionStatus = inC->mobileHWConnectionStatus;
  tmp3.settingUpConnectionHasFailed = kcg_false;
  tmp2.valid = kcg_true;
  tmp2.radioNetworkID = inC->RadioNetworkID_fromTrackside;
  tmp1.valid = kcg_true;
  tmp1.radioNetworkID = inC->RadioNetworkID_fromDriver;
  tmp.valid = kcg_true;
  tmp.radioNetworkID = inC->RadioNetworkID_memorized;
  /* 1 */
  MoRC_managementOfRadioCommunication(
    inC->actualTime,
    tmp7,
    &orderReceivedFromRBC,
    &orderReceivedFromRBC,
    &orderReceivedFromRBC,
    _L47,
    _L47,
    _L47,
    _L47,
    _L47,
    kcg_false,
    inC->powerAvailable,
    outC->_1_Context_1.FE_Output,
    inC->M_Level,
    &tmp,
    &tmp1,
    &tmp2,
    kcg_false,
    kcg_false,
    &tmp3,
    kcg_false,
    kcg_false,
    &tmp6,
    kcg_false,
    tmp5,
    inC->systemVersionIsCompatible,
    tmp4,
    inC->M_Mode,
    initiateCmd_fromOBU,
    kcg_true,
    initiateCmd_fromOBU,
    (kcg_bool) (MoRC_rhs_end == inC->radioHole_status),
    kcg_false,
    (kcg_bool)
      (MoRC_rhs_begin == inC->radioHole_status || inC->radioHole_status ==
        MoRC_rhs_inside),
    kcg_false,
    initiateCmd_fromOBU,
    (MoRC_validRadioNetworkID_Type *) &MoRC_cSampleRadioNetworkID,
    MoRC_cConnectionStatusTimerInterval,
    &outC->Context_1);
  outC->memorizeTheLastRadioNetworkID =
    outC->Context_1.memorizeTheLastRadioNetworkID;
  outC->radioComSesssionEstablished =
    outC->Context_1.sessionSuccessfullyEstablished;
  outC->safeRadioCommunication_requestSetUp =
    outC->Context_1.requestTheSetupOfASafeRadioConnection;
  outC->safeRadioCommunication_releaseSetUp =
    outC->Context_1.requestReleaseOfSafeRadioConnectionWithTrackside;
  outC->mobileHWCmd = outC->Context_1.mobileHWCmd.action;
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
  outC->mobileSWStatus = outC->Context_1.mobileSWStatus.connectionStatus;
  outC->actualRadioNetworkID =
    outC->Context_1.actualRadioNetworkID.radioNetworkID;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_MoRC_withSimplified_IF.c
** Generation date: 2013-08-01T09:52:22
*************************************************************$ */

