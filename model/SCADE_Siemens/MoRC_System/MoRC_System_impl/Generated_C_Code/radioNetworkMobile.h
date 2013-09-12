/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */
#ifndef _radioNetworkMobile_H_
#define _radioNetworkMobile_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  mobileHWCmd_Type /* radioNetworkMobile::mobileHWCmd */ mobileHWCmd;
  mobileSWStatus_Type /* radioNetworkMobile::mobileSWStatus */ mobileSWStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  kcg_bool init1;
  /* ----------------------- local memories  ------------------------- */
  mobileSWCmd_Type /* radioNetworkMobile::_L18 */ _L18;
  mobileHWStatus_Type /* radioNetworkMobile::_L2 */ _L2;
  radioNetworkID_Type /* radioNetworkMobile::registeredRadioNetworkID */ registeredRadioNetworkID;
  SSM_ST_MobileHW_available_SM /* radioNetworkMobile::MobileHW_available_SM */ MobileHW_available_SM_state_nxt;
  SSM_ST_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable /* radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM */ MobileSWConnection_SM_state_nxt_MobileHW_available_SM_MobileHWAvailable;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_radioNetworkMobile;

/* ===========  node initialization and cycle functions  =========== */
/** Subset 096, REQ 3.5.6.3.2, 3.5.6.5 */
/** Controls the registration to the radio network for a single mobile terminal. */
/** "Remark_1" {Description = "- Name: radioNetworkMobile - Description: Controls the registration to the radio network for a single mobile terminal.  - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* radioNetworkMobile */
extern void radioNetworkMobile(
  /* radioNetworkMobile::mobileHWStatus */mobileHWStatus_Type *mobileHWStatus,
  /* radioNetworkMobile::mobileSWCmd */mobileSWCmd_Type *mobileSWCmd,
  outC_radioNetworkMobile *outC);

extern void radioNetworkMobile_reset(outC_radioNetworkMobile *outC);

#endif /* _radioNetworkMobile_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** radioNetworkMobile.h
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

