/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */
#ifndef _registeringToTheRadioNetwork_H_
#define _registeringToTheRadioNetwork_H_

#include "kcg_types.h"
#include "RisingEdge_digital.h"
#include "radioNetworkMobile.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* registeringToTheRadioNetwork::orderTheRegistrationOfItsConnectedMobiles */ orderTheRegistrationOfItsConnectedMobiles;
  kcg_bool /* registeringToTheRadioNetwork::memorizeTheLastRadioNetworkID */ memorizeTheLastRadioNetworkID;
  validRadioNetworkID_Type /* registeringToTheRadioNetwork::actualRadioNetworkID */ actualRadioNetworkID;
  kcg_bool /* registeringToTheRadioNetwork::rejectOrderToContactRBC_or_RIU */ rejectOrderToContactRBC_or_RIU;
  mobileHWCmd_Type /* registeringToTheRadioNetwork::mobileHWCmd */ mobileHWCmd;
  mobileSWStatus_Type /* registeringToTheRadioNetwork::mobileSWStatus */ mobileSWStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* registeringToTheRadioNetwork::_L108 */ _L108;
  kcg_bool /* registeringToTheRadioNetwork::noValidActualRadioNetworkID_available */ noValidActualRadioNetworkID_available;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* 3 */ Context_3;
  outC_RisingEdge_digital /* 2 */ Context_2;
  outC_RisingEdge_digital /* 4 */ Context_4;
  outC_radioNetworkMobile /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_registeringToTheRadioNetwork;

/* ===========  node initialization and cycle functions  =========== */
/** Subset 096, REQ 3.5.6 */
/** Implements the registration to the radio network. */
/** "Remark_1" {Description = "- Name: registeringToTheRadioNetwork - Description: Implements the registration to the radio network. - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* registeringToTheRadioNetwork */
extern void registeringToTheRadioNetwork(
  /* registeringToTheRadioNetwork::atPowerUp */kcg_bool atPowerUp,
  /* registeringToTheRadioNetwork::afterDriverEntryOfANewRadioNetworkID */kcg_bool afterDriverEntryOfANewRadioNetworkID,
  /* registeringToTheRadioNetwork::etcs_level */M_LEVEL_Type etcs_level,
  /* registeringToTheRadioNetwork::registrationOrderedFromTrackside */kcg_bool registrationOrderedFromTrackside,
  /* registeringToTheRadioNetwork::registrationOrderFromTracksideCancelled */kcg_bool registrationOrderFromTracksideCancelled,
  /* registeringToTheRadioNetwork::atPowerOff */kcg_bool atPowerOff,
  /* registeringToTheRadioNetwork::RadioNetworkID_memorized */validRadioNetworkID_Type *RadioNetworkID_memorized,
  /* registeringToTheRadioNetwork::RadioNetworkID_fromDriver */validRadioNetworkID_Type *RadioNetworkID_fromDriver,
  /* registeringToTheRadioNetwork::RadioNetworkID_fromTrackside */validRadioNetworkID_Type *RadioNetworkID_fromTrackside,
  /* registeringToTheRadioNetwork::triggerDecisionThatNoRadioNetworkIDAvailable */kcg_bool triggerDecisionThatNoRadioNetworkIDAvailable,
  /* registeringToTheRadioNetwork::mobileHWStatus */mobileHWStatus_Type *mobileHWStatus,
  /* registeringToTheRadioNetwork::mobileSWCmd */mobileSWCmd_Type *mobileSWCmd,
  /* registeringToTheRadioNetwork::RadioNetworkID_Default */validRadioNetworkID_Type *RadioNetworkID_Default,
  outC_registeringToTheRadioNetwork *outC);

extern void registeringToTheRadioNetwork_reset(
  outC_registeringToTheRadioNetwork *outC);

#endif /* _registeringToTheRadioNetwork_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** registeringToTheRadioNetwork.h
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

