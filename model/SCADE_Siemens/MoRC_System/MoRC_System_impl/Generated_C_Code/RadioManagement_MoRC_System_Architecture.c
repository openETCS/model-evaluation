/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioManagement_MoRC_System_Architecture.h"

void RadioManagement_reset_MoRC_System_Architecture(
  outC_RadioManagement_MoRC_System_Architecture *outC)
{
  /* 1 */ MoRC_withSimplified_IF_reset(&outC->Context_1);
}

/** Top level operator for the "Management of Radio Commiunication". */
/** The operator was generated from the accompanied "MoRC_System" SysML model and incorporates the existing MoRC SCADE model. */
/** By this way it serves as an encapsulation of "MoRC_withSimplified_IF" in that model. */
/** "GdC_1" {Author = "Uwe Steinke", DateC = "Created : 2013-09-12", DateM = "Modified : 2013-09-12", Version = "00.00.01"} */
/** "Remark_1" {Description = "- Name: RadioManagement - Description: Implements SUBSET-026-3, ISSUE : 3.3.0, "3.5 Management of Radio Communication" - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.   THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  "} */
/* MoRC_System::Architecture::RadioManagement */
void RadioManagement_MoRC_System_Architecture(
  inC_RadioManagement_MoRC_System_Architecture *inC,
  outC_RadioManagement_MoRC_System_Architecture *outC)
{
  radioHoleStatus_Type tmp4;
  onBoardOrder_Type tmp3;
  M_LEVEL_Type tmp2;
  M_MODE_Type tmp1;
  mobileHWConnectionStatus_Type tmp;
  
  switch (inC->OB_Status.radioHoleStatus) {
    case tRadioHoleStatus__RHS_none_MoRC_System_Architecture :
      tmp4 = rhs_none;
      break;
    case tRadioHoleStatus__RHS_end_MoRC_System_Architecture :
      tmp4 = rhs_end;
      break;
    case tRadioHoleStatus__RHS_begin_MoRC_System_Architecture :
      tmp4 = rhs_begin;
      break;
    case tRadioHoleStatus__RHS_inside_MoRC_System_Architecture :
      tmp4 = rhs_inside;
      break;
    
  }
  switch (inC->OrderToRM.orderFromOnboard) {
    case tRMOrder__trm_noOrder_MoRC_System_Architecture :
      tmp3 = obo_noOrder;
      break;
    case tRMOrder__trm_initiateSession_MoRC_System_Architecture :
      tmp3 = obo_initiateCommunication;
      break;
    case tRMOrder__trm_terminateSession_MoRC_System_Architecture :
      tmp3 = obo_terminateCommunication;
      break;
    case tRMOrder__trm_registerToNetwork_MoRC_System_Architecture :
      tmp3 = obo_registerNetwork;
      break;
    
  }
  switch (inC->OB_Status.M_Level) {
    case tM_Level__ETCSLevel_0_MoRC_System_Architecture :
      tmp2 = ETCS_Level_0;
      break;
    case tM_Level__ETCSLevel_NTC_MoRC_System_Architecture :
      tmp2 = ETCS_Level_NTC;
      break;
    case tM_Level__ETCSLevel_1_MoRC_System_Architecture :
      tmp2 = ETCS_Level_1;
      break;
    case tM_Level__ETCSLevel_2_MoRC_System_Architecture :
      tmp2 = ETCS_Level_2;
      break;
    case tM_Level__ETCSLevel_3_MoRC_System_Architecture :
      tmp2 = ETCS_Level_3;
      break;
    
  }
  switch (inC->OB_Status.M_Mode) {
    case tM_Mode__ETCSMode_FullSupervision_MoRC_System_Architecture :
      tmp1 = ETCS_Mode_FullSupervision;
      break;
    case tM_Mode__ETCSMode_OnSight_MoRC_System_Architecture :
      tmp1 = ETCS_Mode_OnSight;
      break;
    case tM_Mode__ETCSMode_StaffResponsible_MoRC_System_Architecture :
      tmp1 = ETCS_Mode_StaffResponsible;
      break;
    case tM_Mode__ETCSMode_Shunting_MoRC_System_Architecture :
      tmp1 = ETCS_Mode_Shunting;
      break;
    case tM_Mode__ETCSMode_Unfitted_MoRC_System_Architecture :
      tmp1 = ETCS_Mode_Unfitted;
      break;
    case tM_Mode__ETCSMode_Sleeping_MoRC_System_Architecture :
      tmp1 = ETCS_Mode_Sleeping;
      break;
    case tM_Mode__ETCSMode_Standby_MoRC_System_Architecture :
      tmp1 = ETCS_Mode_StandBy;
      break;
    case tM_Mode__ETCSMode_Trip_MoRC_System_Architecture :
      tmp1 = ETCS_Mode_Trip;
      break;
    case tM_Mode__ETCSMode_PostTrip_MoRC_System_Architecture :
      tmp1 = ETCS_Mode_PostTrip;
      break;
    case tM_Mode__ETCSMode_SystemFailure_MoRC_System_Architecture :
      tmp1 = ETCS_Mode_SystemFailure;
      break;
    case tM_Mode__ETCSMode_Isolation_MoRC_System_Architecture :
      tmp1 = ETCS_Mode_Isolation;
      break;
    case tM_Mode__ETCSMode_NonLeading_MoRC_System_Architecture :
      tmp1 = ETCS_Mode_NonLeading;
      break;
    case tM_Mode__ETCSMode_LimitedSupervision_MoRC_System_Architecture :
      tmp1 = ETCS_Mode_LimitedSupervision;
      break;
    case tM_Mode__ETCSMode_NationalSystem_MoRC_System_Architecture :
      tmp1 = ETCS_Mode_NationalSystem;
      break;
    case tM_Mode__ETCSMode_Reversing_MoRC_System_Architecture :
      tmp1 = ETCS_Mode_Reversing;
      break;
    case tM_Mode__ETCSMode_PassiveShunting_MoRC_System_Architecture :
      tmp1 = ETCS_Mode_PassiveShunting;
      break;
    case tM_Mode__ETCSMode_EndOfMission_MoRC_System_Architecture :
      tmp1 = ETCS_Mode_EndOfMission;
      break;
    
  }
  switch (inC->SafeRadioComStatus.mobileHWConnectionStatus) {
    case tMobileHWConnectionStatus__mhwc_notRegistered_MoRC_System_Architecture :
      tmp = mhwc_notRegistered;
      break;
    case tMobileHWConnectionStatus__mhwc_registered_MoRC_System_Architecture :
      tmp = mhwc_registered;
      break;
    case tMobileHWConnectionStatus__mhwc_connectionSetupInProgress_MoRC_System_Architecture :
      tmp = mhwc_connectionSetupInProgress;
      break;
    case tMobileHWConnectionStatus__mhwc_connected_MoRC_System_Architecture :
      tmp = mhwc_connected;
      break;
    
  }
  /* 1 */
  MoRC_withSimplified_IF(
    inC->OrderToRM.messageFromRBC,
    inC->SafeRadioComStatus.setupEstablished,
    inC->OrderToRM.NID_RBC_ID,
    tmp4,
    tmp3,
    inC->OB_Status.systemVersionIsCompatible,
    tmp2,
    tmp1,
    inC->OB_Status.actualTime,
    inC->RadioNetworkIDs.radioNetworkID_memorized,
    inC->RadioNetworkIDs.radioNetworkID_fromDriver,
    inC->RadioNetworkIDs.radioNetworkID_fromTrackside,
    inC->OB_Status.powerAvailable,
    tmp,
    &outC->Context_1);
  outC->RM_Status.radioComSessionEstablished =
    outC->Context_1.radioComSesssionEstablished;
  outC->SafeRadioComCmd.requestSetup =
    outC->Context_1.safeRadioCommunication_requestSetUp;
  outC->SafeRadioComCmd.releaseSetup =
    outC->Context_1.safeRadioCommunication_releaseSetUp;
  outC->SafeRadioComCmd.actualRadioNetworkID =
    outC->Context_1.actualRadioNetworkID;
  outC->SafeRadioComCmd.memorizeTheLastRadioNetworkID =
    outC->Context_1.memorizeTheLastRadioNetworkID;
  outC->OrderToRBC.messageToRBC = outC->Context_1.messageToRBC;
  switch (outC->Context_1.mobileHWCmd) {
    case mhwa_nop :
      outC->SafeRadioComCmd.mobileHWCmd =
        tMobileHWAction__mhwa_nop_MoRC_System_Architecture;
      break;
    case mhwa_register :
      outC->SafeRadioComCmd.mobileHWCmd =
        tMobileHWAction__mhwa_register_MoRC_System_Architecture;
      break;
    case mhwa_connect :
      outC->SafeRadioComCmd.mobileHWCmd =
        tMobileHWAction__mhwa_connect_MoRC_System_Architecture;
      break;
    case mhwa_disconnect :
      outC->SafeRadioComCmd.mobileHWCmd =
        tMobileHWAction__mhwa_disconnect_MoRC_System_Architecture;
      break;
    case mhwa_unregister :
      outC->SafeRadioComCmd.mobileHWCmd =
        tMobileHWAction__mhwa_unregister_MoRC_System_Architecture;
      break;
    
  }
  switch (outC->Context_1.mobileSWStatus) {
    case mswc_unregistered :
      outC->RM_Status.mobileSWStatus =
        tMobileSWConnectionStatus__mswc_unregistered_MoRC_System_Architecture;
      break;
    case mswc_registering :
      outC->RM_Status.mobileSWStatus =
        tMobileSWConnectionStatus__mswc_registering_MoRC_System_Architecture;
      break;
    case mswc_registered :
      outC->RM_Status.mobileSWStatus =
        tMobileSWConnectionStatus__mswc_registered_MoRC_System_Architecture;
      break;
    case mswc_connecting :
      outC->RM_Status.mobileSWStatus =
        tMobileSWConnectionStatus__mswc_connecting_MoRC_System_Architecture;
      break;
    case mswc_connected :
      outC->RM_Status.mobileSWStatus =
        tMobileSWConnectionStatus__mswc_connected_MoRC_System_Architecture;
      break;
    case mswc_establishingSession :
      outC->RM_Status.mobileSWStatus =
        tMobileSWConnectionStatus__mswc_establishingSession_MoRC_System_Architecture;
      break;
    case mswc_sessionEstablished :
      outC->RM_Status.mobileSWStatus =
        tMobileSWConnectionStatus__mswc_sessionEstablished_MoRC_System_Architecture;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioManagement_MoRC_System_Architecture.c
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

