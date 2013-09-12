/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_withSimplified_IF.h"

void MoRC_withSimplified_IF_reset(outC_MoRC_withSimplified_IF *outC)
{
  /* 1 */ managementOfRadioCommunication_reset(&outC->Context_1);
  /* 1 */ FallingEdge_reset_digital(&outC->_1_Context_1);
}

/** "Remark_1" {Description = "- Name: managementOfRadioCommunication - Description: This a interface adapter at the top level of the "Management of Radio Communication" function - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* MoRC_withSimplified_IF */
void MoRC_withSimplified_IF(
  /* MoRC_withSimplified_IF::messageFromRBC */NID_MESSAGE_Type messageFromRBC,
  /* MoRC_withSimplified_IF::safeRadioCommunication_setUpEstablished */kcg_bool safeRadioCommunication_setUpEstablished,
  /* MoRC_withSimplified_IF::NID_RBC_ID */NID_RBC_Type NID_RBC_ID,
  /* MoRC_withSimplified_IF::radioHole_status */radioHoleStatus_Type radioHole_status,
  /* MoRC_withSimplified_IF::orderFromOnBoard */onBoardOrder_Type orderFromOnBoard,
  /* MoRC_withSimplified_IF::systemVersionIsCompatible */kcg_bool systemVersionIsCompatible,
  /* MoRC_withSimplified_IF::M_Level */M_LEVEL_Type M_Level,
  /* MoRC_withSimplified_IF::M_Mode */M_MODE_Type M_Mode,
  /* MoRC_withSimplified_IF::actualTime */time_Type actualTime,
  /* MoRC_withSimplified_IF::RadioNetworkID_memorized */radioNetworkID_Type RadioNetworkID_memorized,
  /* MoRC_withSimplified_IF::RadioNetworkID_fromDriver */radioNetworkID_Type RadioNetworkID_fromDriver,
  /* MoRC_withSimplified_IF::RadioNetworkID_fromTrackside */radioNetworkID_Type RadioNetworkID_fromTrackside,
  /* MoRC_withSimplified_IF::powerAvailable */kcg_bool powerAvailable,
  /* MoRC_withSimplified_IF::mobileHWConnectionStatus */mobileHWConnectionStatus_Type mobileHWConnectionStatus,
  outC_MoRC_withSimplified_IF *outC)
{
  struct__11237 tmp;
  struct__11237 tmp1;
  struct__11237 tmp2;
  struct__11231 tmp3;
  kcg_bool tmp7;
  orderToContactAnRBC_Type tmp6;
  kcg_bool tmp5;
  kcg_bool tmp4;
  /* MoRC_withSimplified_IF::_L47 */ kcg_bool _L47;
  /* MoRC_withSimplified_IF::terminateOrderFromRBC */ orderToContactAnRBC_Type terminateOrderFromRBC;
  /* MoRC_withSimplified_IF::establishOrderFromRBC */ orderToContactAnRBC_Type establishOrderFromRBC;
  /* MoRC_withSimplified_IF::orderReceivedFromRBC */ orderToContactAnRBC_Type orderReceivedFromRBC;
  /* MoRC_withSimplified_IF::initiateCmd_fromOBU */ kcg_bool initiateCmd_fromOBU;
  /* MoRC_withSimplified_IF::MessageFromTrackDec */ kcg_bool MessageFromTrackDec_clock;
  /* MoRC_withSimplified_IF::MessageFromTrackDec::else::else */ kcg_bool _10_else_clock_MessageFromTrackDec;
  /* MoRC_withSimplified_IF::MessageFromTrackDec::else::else::else::else */ kcg_bool _8_else_clock_MessageFromTrackDec;
  /* MoRC_withSimplified_IF::MessageFromTrackDec::else::else::else::else::else */ kcg_bool else_clock_MessageFromTrackDec;
  /* MoRC_withSimplified_IF::MessageFromTrackDec::else::else::else */ kcg_bool _9_else_clock_MessageFromTrackDec;
  /* MoRC_withSimplified_IF::MessageFromTrackDec::else */ kcg_bool _11_else_clock_MessageFromTrackDec;
  
  tmp5 = orderFromOnBoard == obo_initiateCommunication;
  if (tmp5) {
    initiateCmd_fromOBU = kcg_true;
  }
  else {
    initiateCmd_fromOBU = kcg_false;
  }
  _L47 = orderFromOnBoard == obo_terminateCommunication;
  if (tmp5) {
  }
  else {
    tmp4 = _L47;
  }
  MessageFromTrackDec_clock = messageFromRBC == cNID_MESSAGE_GeneralMessage;
  if (MessageFromTrackDec_clock) {
  }
  else {
    _11_else_clock_MessageFromTrackDec = messageFromRBC ==
      cNID_MESSAGE_GeneralMessage_init;
    if (_11_else_clock_MessageFromTrackDec) {
    }
    else {
      _10_else_clock_MessageFromTrackDec = messageFromRBC ==
        cNID_MESSAGE_RBC_RIU_SystemVersion;
      if (_10_else_clock_MessageFromTrackDec) {
      }
      else {
        _9_else_clock_MessageFromTrackDec = messageFromRBC ==
          cNID_MESSAGE_InitiationOfACommunicationSession_track;
      }
    }
  }
  kcg_copy_orderToContactAnRBC_Type(
    &establishOrderFromRBC,
    (orderToContactAnRBC_Type *) &cEstablishOrderFromTrackside);
  establishOrderFromRBC.rbc_id = NID_RBC_ID;
  kcg_copy_orderToContactAnRBC_Type(
    &terminateOrderFromRBC,
    (orderToContactAnRBC_Type *) &cTerminateOrderFromTrackside);
  terminateOrderFromRBC.rbc_id = NID_RBC_ID;
  if (MessageFromTrackDec_clock) {
    kcg_copy_orderToContactAnRBC_Type(
      &orderReceivedFromRBC,
      &terminateOrderFromRBC);
    tmp7 = kcg_false;
  }
  else if (_11_else_clock_MessageFromTrackDec) {
    kcg_copy_orderToContactAnRBC_Type(
      &orderReceivedFromRBC,
      &establishOrderFromRBC);
    tmp7 = kcg_false;
  }
  else if (_10_else_clock_MessageFromTrackDec) {
    kcg_copy_orderToContactAnRBC_Type(
      &orderReceivedFromRBC,
      (orderToContactAnRBC_Type *) &cInvalidOrderToContactAnRBC);
    tmp7 = kcg_false;
  }
  else if (_9_else_clock_MessageFromTrackDec) {
    kcg_copy_orderToContactAnRBC_Type(
      &orderReceivedFromRBC,
      &establishOrderFromRBC);
    tmp7 = kcg_false;
  }
  else {
    kcg_copy_orderToContactAnRBC_Type(
      &orderReceivedFromRBC,
      (orderToContactAnRBC_Type *) &cInvalidOrderToContactAnRBC);
    _8_else_clock_MessageFromTrackDec = messageFromRBC ==
      cNID_MESSAGE_AckOfTerminationOfACommunicationSession;
    if (_8_else_clock_MessageFromTrackDec) {
      tmp7 = kcg_true;
    }
    else {
      else_clock_MessageFromTrackDec = messageFromRBC == cNID_PACKET_131;
      tmp7 = kcg_false;
    }
  }
  /* 1 */ FallingEdge_digital(powerAvailable, &outC->_1_Context_1);
  if (tmp5) {
    kcg_copy_orderToContactAnRBC_Type(&tmp6, &establishOrderFromRBC);
  }
  else if (tmp4) {
    kcg_copy_orderToContactAnRBC_Type(&tmp6, &terminateOrderFromRBC);
  }
  else {
    kcg_copy_orderToContactAnRBC_Type(
      &tmp6,
      (orderToContactAnRBC_Type *) &cInvalidOrderToContactAnRBC);
  }
  if (MessageFromTrackDec_clock) {
    tmp5 = kcg_false;
    tmp4 = kcg_false;
  }
  else if (_11_else_clock_MessageFromTrackDec) {
    tmp5 = kcg_false;
    tmp4 = kcg_false;
  }
  else if (_10_else_clock_MessageFromTrackDec) {
    tmp5 = kcg_false;
    tmp4 = kcg_true;
  }
  else {
    if (_9_else_clock_MessageFromTrackDec) {
      tmp5 = kcg_false;
    }
    else if (_8_else_clock_MessageFromTrackDec) {
      tmp5 = kcg_false;
    }
    else if (else_clock_MessageFromTrackDec) {
      tmp5 = kcg_true;
    }
    else {
      tmp5 = kcg_false;
    }
    tmp4 = kcg_false;
  }
  tmp3.valid = kcg_true;
  tmp3.connectionStatus = mobileHWConnectionStatus;
  tmp3.settingUpConnectionHasFailed = kcg_false;
  tmp2.valid = kcg_true;
  tmp2.radioNetworkID = RadioNetworkID_fromTrackside;
  tmp1.valid = kcg_true;
  tmp1.radioNetworkID = RadioNetworkID_fromDriver;
  tmp.valid = kcg_true;
  tmp.radioNetworkID = RadioNetworkID_memorized;
  /* 1 */
  managementOfRadioCommunication(
    actualTime,
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
    powerAvailable,
    outC->_1_Context_1.FE_Output,
    M_Level,
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
    systemVersionIsCompatible,
    tmp4,
    M_Mode,
    initiateCmd_fromOBU,
    kcg_true,
    initiateCmd_fromOBU,
    (kcg_bool) (rhs_end == radioHole_status),
    kcg_false,
    (kcg_bool)
      ((rhs_begin == radioHole_status) | (radioHole_status == rhs_inside)),
    kcg_false,
    initiateCmd_fromOBU,
    (validRadioNetworkID_Type *) &cSampleRadioNetworkID,
    cConnectionStatusTimerInterval,
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
    outC->messageToRBC = cNID_MESSAGE_InitiationOfACommunicationSession;
  }
  else if (outC->Context_1.sendATerminationOfCommunicationMessage) {
    outC->messageToRBC = cNID_MESSAGE_terminationOfACommunicationSession;
  }
  else if (outC->Context_1.sendMessage_NoCompatibleVersionSupported) {
    outC->messageToRBC = cNID_MESSAGE_NoCompatibleVersionSupported;
  }
  else if (outC->Context_1.sendASessionEstablishedReportToTrackside) {
    outC->messageToRBC = cNID_MESSAGE_SessionEstablished;
  }
  else {
    outC->messageToRBC = cNID_MESSAGE_noMessage;
  }
  outC->mobileSWStatus = outC->Context_1.mobileSWStatus.connectionStatus;
  outC->actualRadioNetworkID =
    outC->Context_1.actualRadioNetworkID.radioNetworkID;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_withSimplified_IF.c
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

