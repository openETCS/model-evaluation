/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

#include "kcg_consts.h"

/* cMobileSWStatus_unregistered */
const mobileSWStatus_Type cMobileSWStatus_unregistered = { kcg_true, kcg_true,
  mswc_unregistered, 0, kcg_false };

/* cEstablishSafeRadioConnectionCmd */
const mobileSWCmd_Type cEstablishSafeRadioConnectionCmd = { kcg_true,
  mswa_establishRadioConnection, 0 };

/* cMobileHWStatus_Disconnected */
const mobileHWStatus_Type cMobileHWStatus_Disconnected = { kcg_true,
  mhwc_notRegistered, kcg_false };

/* cMobileHWStatus_Connected */
const mobileHWStatus_Type cMobileHWStatus_Connected = { kcg_true,
  mhwc_connected, kcg_false };

/* cEstablishOrderFromTrackside */
const orderToContactAnRBC_Type cEstablishOrderFromTrackside = { kcg_true, 0, 0,
  morc_rbca_establishSession, kcg_false };

/* cTerminateOrderFromTrackside */
const orderToContactAnRBC_Type cTerminateOrderFromTrackside = { kcg_true, 0, 0,
  morc_rbca_terminateSesssion, kcg_false };

/* cSampleRadioNetworkID */
const validRadioNetworkID_Type cSampleRadioNetworkID = { kcg_true, 12345 };

/* cMobileHWStatus_Registered */
const mobileHWStatus_Type cMobileHWStatus_Registered = { kcg_true,
  mhwc_registered, kcg_false };

/* cMobileHWStatus_notRegistered */
const mobileHWStatus_Type cMobileHWStatus_notRegistered = { kcg_true,
  mhwc_notRegistered, kcg_false };

/* cTerminateSafeRadioConnectionCmd */
const mobileSWCmd_Type cTerminateSafeRadioConnectionCmd = { kcg_true,
  mswa_terminateRadioConnection, 0 };

/* cRegisterSafeRadioConnectionCmd */
const mobileSWCmd_Type cRegisterSafeRadioConnectionCmd = { kcg_true,
  mswa_register, 0 };

/* cInvalidRadioNetworkID */
const validRadioNetworkID_Type cInvalidRadioNetworkID = { kcg_false, 0 };

/* cInvalidMobileSWStatus */
const mobileSWStatus_Type cInvalidMobileSWStatus = { kcg_false, kcg_false,
  mswc_unregistered, 0, kcg_false };

/* cInvalidMobileHWStatus */
const mobileHWStatus_Type cInvalidMobileHWStatus = { kcg_false,
  mhwc_notRegistered, kcg_false };

/* cInvalidMobileSWCmd */
const mobileSWCmd_Type cInvalidMobileSWCmd = { kcg_false, mswa_nop, 0 };

/* cInvalidmobileHWCmd */
const mobileHWCmd_Type cInvalidmobileHWCmd = { kcg_false, mhwa_nop, 0 };

/* cMobileSWStatus_noHW */
const mobileSWStatus_Type cMobileSWStatus_noHW = { kcg_true, kcg_false,
  mswc_unregistered, cInvalidRadioNetworkID_value, kcg_false };

/* cInvalidOrderToContactAnRBC */
const orderToContactAnRBC_Type cInvalidOrderToContactAnRBC = { kcg_false, 0, 0,
  morc_rbca_noAction, kcg_false };

/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_consts.c
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

