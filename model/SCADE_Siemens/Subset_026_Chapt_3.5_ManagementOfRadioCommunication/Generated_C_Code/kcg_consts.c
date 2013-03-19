/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-02-12T12:42:24
*************************************************************$ */

#include "kcg_consts.h"

/* cMobileSWStatus_unregistered */
const MoRC_mobileSWStatus_Type MoRC_cMobileSWStatus_unregistered = { kcg_true,
  kcg_true, MoRC_mswc_unregistered, 0, kcg_false };

/* cEstablishSafeRadioConnectionCmd */
const MoRC_mobileSWCmd_Type MoRC_cEstablishSafeRadioConnectionCmd = { kcg_true,
  MoRC_mswa_establishRadioConnection, 0 };

/* cTerminateSafeRadioConnectionCmd */
const MoRC_mobileSWCmd_Type MoRC_cTerminateSafeRadioConnectionCmd = { kcg_true,
  MoRC_mswa_terminateRadioConnection, 0 };

/* cInvalidRadioNetworkID */
const MoRC_validRadioNetworkID_Type MoRC_cInvalidRadioNetworkID = { kcg_false,
  0 };

/* cInvalidMobileSWStatus */
const MoRC_mobileSWStatus_Type MoRC_cInvalidMobileSWStatus = { kcg_false,
  kcg_false, MoRC_mswc_unregistered, 0, kcg_false };

/* cInvalidMobileHWStatus_Type */
const MoRC_mobileHWStatus_Type MoRC_cInvalidMobileHWStatus_Type = { kcg_false,
  MoRC_mhwc_notRegistered, kcg_false };

/* cInvalidMobileSWCmd */
const MoRC_mobileSWCmd_Type MoRC_cInvalidMobileSWCmd = { kcg_false,
  MoRC_mswa_nop, 0 };

/* cInvalidmobileHWCmd */
const MoRC_mobileHWCmd_Type MoRC_cInvalidmobileHWCmd = { kcg_false,
  MoRC_mhwa_nop, 0 };

/* cMobileSWStatus_noHW */
const MoRC_mobileSWStatus_Type MoRC_cMobileSWStatus_noHW = { kcg_true,
  kcg_false, MoRC_mswc_unregistered, MoRC_cInvalidRadioNetworkID_value,
  kcg_false };

/* cInvalidOrderToContactAnRBC */
const MoRC_orderToContactAnRBC_Type MoRC_cInvalidOrderToContactAnRBC = {
  kcg_false, 0, 0, MoRC_morc_rbca_noAction, kcg_false };

/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_consts.c
** Generation date: 2013-02-12T12:42:24
*************************************************************$ */

