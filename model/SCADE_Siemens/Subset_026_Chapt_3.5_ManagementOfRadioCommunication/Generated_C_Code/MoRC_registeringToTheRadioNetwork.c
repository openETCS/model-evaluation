/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-04-22T16:56:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_registeringToTheRadioNetwork.h"

void MoRC_registeringToTheRadioNetwork_reset(
  MoRC_outC_registeringToTheRadioNetwork *outC)
{
  outC->init = kcg_true;
  /* 1 */ MoRC_radioNetworkMobile_reset(&outC->Context_1);
  /* 4 */ MoRC_RisingEdge_reset_digital(&outC->Context_4);
  /* 2 */ MoRC_RisingEdge_reset_digital(&outC->Context_2);
  /* 3 */ MoRC_RisingEdge_reset_digital(&outC->Context_3);
}

/** Subset 096, REQ 3.5.6 */
/** Implements the registration to the radio network. */
/** "Remark_1" {Description = "- Name: registeringToTheRadioNetwork - Description: Implements the registration to the radio network. - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* registeringToTheRadioNetwork */
void MoRC_registeringToTheRadioNetwork(
  /* registeringToTheRadioNetwork::atPowerUp */kcg_bool atPowerUp,
  /* registeringToTheRadioNetwork::afterDriverEntryOfANewRadioNetworkID */kcg_bool afterDriverEntryOfANewRadioNetworkID,
  /* registeringToTheRadioNetwork::etcs_level */MoRC_M_LEVEL_Type etcs_level,
  /* registeringToTheRadioNetwork::registrationOrderedFromTrackside */kcg_bool registrationOrderedFromTrackside,
  /* registeringToTheRadioNetwork::registrationOrderFromTracksideCancelled */kcg_bool registrationOrderFromTracksideCancelled,
  /* registeringToTheRadioNetwork::atPowerOff */kcg_bool atPowerOff,
  /* registeringToTheRadioNetwork::RadioNetworkID_memorized */MoRC_validRadioNetworkID_Type *RadioNetworkID_memorized,
  /* registeringToTheRadioNetwork::RadioNetworkID_fromDriver */MoRC_validRadioNetworkID_Type *RadioNetworkID_fromDriver,
  /* registeringToTheRadioNetwork::RadioNetworkID_fromTrackside */MoRC_validRadioNetworkID_Type *RadioNetworkID_fromTrackside,
  /* registeringToTheRadioNetwork::triggerDecisionThatNoRadioNetworkIDAvailable */kcg_bool triggerDecisionThatNoRadioNetworkIDAvailable,
  /* registeringToTheRadioNetwork::mobileHWStatus */MoRC_mobileHWStatus_Type *mobileHWStatus,
  /* registeringToTheRadioNetwork::mobileSWCmd */MoRC_mobileSWCmd_Type *mobileSWCmd,
  /* registeringToTheRadioNetwork::RadioNetworkID_Default */MoRC_validRadioNetworkID_Type *RadioNetworkID_Default,
  MoRC_outC_registeringToTheRadioNetwork *outC)
{
  MoRC_struct__10739 tmp;
  /* registeringToTheRadioNetwork::_L32 */ kcg_bool _L32;
  /* registeringToTheRadioNetwork::_L44 */ kcg_bool _L44;
  /* registeringToTheRadioNetwork::_L76 */ MoRC_mobileSWStatus_Type _L76;
  /* registeringToTheRadioNetwork::_L89 */ kcg_bool _L89;
  /* registeringToTheRadioNetwork::_L95 */ kcg_bool _L95;
  /* registeringToTheRadioNetwork::_L99 */ kcg_bool _L99;
  /* registeringToTheRadioNetwork::_L103 */ kcg_bool _L103;
  /* registeringToTheRadioNetwork::_L120 */ kcg_bool _L120;
  
  /* 3 */ MoRC_RisingEdge_digital(atPowerUp, &outC->Context_3);
  _L32 = (*RadioNetworkID_fromDriver).valid &&
    afterDriverEntryOfANewRadioNetworkID;
  _L44 = (*RadioNetworkID_fromTrackside).valid &&
    registrationOrderedFromTrackside;
  if (outC->init) {
    outC->_L108 = kcg_false;
    _L89 = kcg_true;
  }
  else {
    outC->_L108 = !registrationOrderFromTracksideCancelled &&
      (registrationOrderedFromTrackside || outC->_L108);
    _L89 = outC->noValidActualRadioNetworkID_available;
  }
  _L95 = (*RadioNetworkID_Default).valid &&
    triggerDecisionThatNoRadioNetworkIDAvailable && _L89;
  if (((*RadioNetworkID_memorized).valid && outC->Context_3.RE_Output) ||
    _L32 || _L44 || _L95) {
    if (_L95) {
      MoRC_kcg_copy_validRadioNetworkID_Type(
        &outC->actualRadioNetworkID,
        RadioNetworkID_Default);
    }
    else if (_L44) {
      MoRC_kcg_copy_validRadioNetworkID_Type(
        &outC->actualRadioNetworkID,
        RadioNetworkID_fromTrackside);
    }
    else if (_L32) {
      MoRC_kcg_copy_validRadioNetworkID_Type(
        &outC->actualRadioNetworkID,
        RadioNetworkID_fromDriver);
    }
    else {
      MoRC_kcg_copy_validRadioNetworkID_Type(
        &outC->actualRadioNetworkID,
        RadioNetworkID_memorized);
    }
  }
  else if (outC->init) {
    MoRC_kcg_copy_validRadioNetworkID_Type(
      &outC->actualRadioNetworkID,
      (MoRC_validRadioNetworkID_Type *) &MoRC_cInvalidRadioNetworkID);
  }
  outC->noValidActualRadioNetworkID_available =
    !outC->actualRadioNetworkID.valid;
  outC->orderTheRegistrationOfItsConnectedMobiles = outC->Context_3.RE_Output ||
    (afterDriverEntryOfANewRadioNetworkID && (MoRC_ETCS_Level_2 == etcs_level ||
        etcs_level == MoRC_ETCS_Level_3)) ||
    (triggerDecisionThatNoRadioNetworkIDAvailable &&
      outC->noValidActualRadioNetworkID_available);
  /* 2 */ MoRC_RisingEdge_digital(atPowerOff, &outC->Context_2);
  outC->memorizeTheLastRadioNetworkID = outC->Context_2.RE_Output &&
    outC->actualRadioNetworkID.valid;
  if (outC->init) {
    outC->init = kcg_false;
    MoRC_kcg_copy_mobileSWStatus_Type(
      &_L76,
      (MoRC_mobileSWStatus_Type *) &MoRC_cInvalidMobileSWStatus);
  }
  else {
    MoRC_kcg_copy_mobileSWStatus_Type(&_L76, &outC->mobileSWStatus);
  }
  _L89 = _L76.connectionStatus == MoRC_mswc_unregistered;
  _L95 = _L89 || (MoRC_mswc_unregistered != _L76.connectionStatus &&
      _L76.registeredRadioNetworkID !=
      outC->actualRadioNetworkID.radioNetworkID);
  _L99 = !(_L76.connectionStatus == MoRC_mswc_establishingSession ||
      _L76.connectionStatus == MoRC_mswc_sessionEstablished);
  _L103 = !(_L76.connectionStatus == MoRC_mswc_connecting ||
      _L76.connectionStatus == MoRC_mswc_connected);
  /* 4 */
  MoRC_RisingEdge_digital(
    (kcg_bool) (outC->_L108 && _L95 && _L99 && _L103),
    &outC->Context_4);
  _L120 = (_L76.valid && _L76.mobileHW_available &&
      ((registrationOrderedFromTrackside && _L95 && _L99 && _L103) ||
        outC->Context_4.RE_Output)) ||
    outC->orderTheRegistrationOfItsConnectedMobiles || (_L32 || _L44);
  if (_L120) {
    tmp.valid = _L120;
    tmp.action = MoRC_mswa_register;
    tmp.radioNetworkID = outC->actualRadioNetworkID.radioNetworkID;
  }
  else {
    MoRC_kcg_copy_mobileSWCmd_Type(&tmp, mobileSWCmd);
  }
  /* 1 */ MoRC_radioNetworkMobile(mobileHWStatus, &tmp, &outC->Context_1);
  MoRC_kcg_copy_mobileHWCmd_Type(
    &outC->mobileHWCmd,
    &outC->Context_1.mobileHWCmd);
  MoRC_kcg_copy_mobileSWStatus_Type(
    &outC->mobileSWStatus,
    &outC->Context_1.mobileSWStatus);
  outC->rejectOrderToContactRBC_or_RIU = _L89 || _L76.connectionStatus ==
    MoRC_mswc_registering;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_registeringToTheRadioNetwork.c
** Generation date: 2013-04-22T16:56:47
*************************************************************$ */

