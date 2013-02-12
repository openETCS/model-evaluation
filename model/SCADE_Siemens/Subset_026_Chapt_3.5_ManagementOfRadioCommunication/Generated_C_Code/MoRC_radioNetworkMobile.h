/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-02-12T12:42:24
*************************************************************$ */
#ifndef _MoRC_radioNetworkMobile_H_
#define _MoRC_radioNetworkMobile_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MoRC_mobileHWCmd_Type /* radioNetworkMobile::mobileHWCmd */ mobileHWCmd;
  MoRC_mobileSWStatus_Type /* radioNetworkMobile::mobileSWStatus */ mobileSWStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MoRC_SSM_ST_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable /* radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM */ MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable;
  MoRC_SSM_ST_MobileHW_available_SM /* radioNetworkMobile::MobileHW_available_SM */ MobileHW_available_SM_state_nxt;
  MoRC_radioNetworkID_Type /* radioNetworkMobile::registeredRadioNetworkID */ registeredRadioNetworkID;
  MoRC_mobileHWStatus_Type /* radioNetworkMobile::_L2 */ _L2;
  MoRC_mobileSWCmd_Type /* radioNetworkMobile::_L18 */ _L18;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_radioNetworkMobile;

/* ===========  node initialization and cycle functions  =========== */
/** Subset 096, REQ 3.5.6.3.2, 3.5.6.5 */
/** Controls the registration to the radio network for a single mobile terminal. */
/** "Remark_1" {Description = "- Name: radioNetworkMobile - Description: Controls the registration to the radio network for a single mobile terminal.  - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* radioNetworkMobile */
extern void MoRC_radioNetworkMobile(
  /* radioNetworkMobile::mobileHWStatus */MoRC_mobileHWStatus_Type *mobileHWStatus,
  /* radioNetworkMobile::mobileSWCmd */MoRC_mobileSWCmd_Type *mobileSWCmd,
  MoRC_outC_radioNetworkMobile *outC);

extern void MoRC_radioNetworkMobile_reset(MoRC_outC_radioNetworkMobile *outC);

#endif /* _MoRC_radioNetworkMobile_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_radioNetworkMobile.h
** Generation date: 2013-02-12T12:42:24
*************************************************************$ */

