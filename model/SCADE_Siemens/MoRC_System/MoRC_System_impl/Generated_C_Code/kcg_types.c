/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

#include "kcg_types.h"

kcg_bool kcg_comp_struct__11198(struct__11198 *kcg_c1, struct__11198 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->appliesAlsoToSleepingUnits ==
      kcg_c2->appliesAlsoToSleepingUnits);
  kcg_equ = kcg_equ & (kcg_c1->actionToBePerformed ==
      kcg_c2->actionToBePerformed);
  kcg_equ = kcg_equ & (kcg_c1->telephoneNoOfTheRBC ==
      kcg_c2->telephoneNoOfTheRBC);
  kcg_equ = kcg_equ & (kcg_c1->rbc_id == kcg_c2->rbc_id);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11206(struct__11206 *kcg_c1, struct__11206 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->status == kcg_c2->status);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11211(struct__11211 *kcg_c1, struct__11211 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->settingUpConnectionHasFailed ==
      kcg_c2->settingUpConnectionHasFailed);
  kcg_equ = kcg_equ & (kcg_c1->registeredRadioNetworkID ==
      kcg_c2->registeredRadioNetworkID);
  kcg_equ = kcg_equ & (kcg_c1->connectionStatus == kcg_c2->connectionStatus);
  kcg_equ = kcg_equ & (kcg_c1->mobileHW_available ==
      kcg_c2->mobileHW_available);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11219(struct__11219 *kcg_c1, struct__11219 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->radioNetworkID == kcg_c2->radioNetworkID);
  kcg_equ = kcg_equ & (kcg_c1->action == kcg_c2->action);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11225(struct__11225 *kcg_c1, struct__11225 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->radioNetworkID == kcg_c2->radioNetworkID);
  kcg_equ = kcg_equ & (kcg_c1->action == kcg_c2->action);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11231(struct__11231 *kcg_c1, struct__11231 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->settingUpConnectionHasFailed ==
      kcg_c2->settingUpConnectionHasFailed);
  kcg_equ = kcg_equ & (kcg_c1->connectionStatus == kcg_c2->connectionStatus);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11237(struct__11237 *kcg_c1, struct__11237 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->radioNetworkID == kcg_c2->radioNetworkID);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11242(struct__11242 *kcg_c1, struct__11242 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->memorizeTheLastRadioNetworkID ==
      kcg_c2->memorizeTheLastRadioNetworkID);
  kcg_equ = kcg_equ & (kcg_c1->actualRadioNetworkID ==
      kcg_c2->actualRadioNetworkID);
  kcg_equ = kcg_equ & (kcg_c1->mobileHWCmd == kcg_c2->mobileHWCmd);
  kcg_equ = kcg_equ & (kcg_c1->releaseSetup == kcg_c2->releaseSetup);
  kcg_equ = kcg_equ & (kcg_c1->requestSetup == kcg_c2->requestSetup);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11250(struct__11250 *kcg_c1, struct__11250 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->messageToRBC == kcg_c2->messageToRBC);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11254(struct__11254 *kcg_c1, struct__11254 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->mobileHWConnectionStatus ==
      kcg_c2->mobileHWConnectionStatus);
  kcg_equ = kcg_equ & (kcg_c1->setupEstablished == kcg_c2->setupEstablished);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11259(struct__11259 *kcg_c1, struct__11259 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->radioNetworkID_fromTrackside ==
      kcg_c2->radioNetworkID_fromTrackside);
  kcg_equ = kcg_equ & (kcg_c1->radioNetworkID_fromDriver ==
      kcg_c2->radioNetworkID_fromDriver);
  kcg_equ = kcg_equ & (kcg_c1->radioNetworkID_memorized ==
      kcg_c2->radioNetworkID_memorized);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11265(struct__11265 *kcg_c1, struct__11265 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_RBC_ID == kcg_c2->NID_RBC_ID);
  kcg_equ = kcg_equ & (kcg_c1->messageFromRBC == kcg_c2->messageFromRBC);
  kcg_equ = kcg_equ & (kcg_c1->orderFromOnboard == kcg_c2->orderFromOnboard);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11271(struct__11271 *kcg_c1, struct__11271 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->mobileSWStatus == kcg_c2->mobileSWStatus);
  kcg_equ = kcg_equ & (kcg_c1->radioComSessionEstablished ==
      kcg_c2->radioComSessionEstablished);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11276(struct__11276 *kcg_c1, struct__11276 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->actualTime == kcg_c2->actualTime);
  kcg_equ = kcg_equ & (kcg_c1->radioHoleStatus == kcg_c2->radioHoleStatus);
  kcg_equ = kcg_equ & (kcg_c1->systemVersionIsCompatible ==
      kcg_c2->systemVersionIsCompatible);
  kcg_equ = kcg_equ & (kcg_c1->M_Level == kcg_c2->M_Level);
  kcg_equ = kcg_equ & (kcg_c1->M_Mode == kcg_c2->M_Mode);
  kcg_equ = kcg_equ & (kcg_c1->powerAvailable == kcg_c2->powerAvailable);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11285(struct__11285 *kcg_c1, struct__11285 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->secondNumber == kcg_c2->secondNumber);
  kcg_equ = kcg_equ & (kcg_c1->firstNumber == kcg_c2->firstNumber);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11290(struct__11290 *kcg_c1, struct__11290 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_ENGINE == kcg_c2->NID_ENGINE);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11297(struct__11297 *kcg_c1, struct__11297 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_RADIO == kcg_c2->NID_RADIO);
  kcg_equ = kcg_equ & (kcg_c1->NID_ENGINE == kcg_c2->NID_ENGINE);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11305(struct__11305 *kcg_c1, struct__11305 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_SLEEPSESSION == kcg_c2->Q_SLEEPSESSION);
  kcg_equ = kcg_equ & (kcg_c1->NID_RADIO == kcg_c2->NID_RADIO);
  kcg_equ = kcg_equ & (kcg_c1->NID_RBC == kcg_c2->NID_RBC);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->D_RBCTR == kcg_c2->D_RBCTR);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11317(struct__11317 *kcg_c1, struct__11317 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->M_ACK == kcg_c2->M_ACK);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11325(struct__11325 *kcg_c1, struct__11325 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__11285(
      &kcg_c1->M_VERSION,
      &kcg_c2->M_VERSION);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->M_ACK == kcg_c2->M_ACK);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11334(struct__11334 *kcg_c1, struct__11334 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_SLEEPSESSION == kcg_c2->Q_SLEEPSESSION);
  kcg_equ = kcg_equ & (kcg_c1->NID_RADIO == kcg_c2->NID_RADIO);
  kcg_equ = kcg_equ & (kcg_c1->NID_RBC == kcg_c2->NID_RBC);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->Q_RBC == kcg_c2->Q_RBC);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11346(struct__11346 *kcg_c1, struct__11346 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__11334(
      &kcg_c1->p42_sessionManagement,
      &kcg_c2->p42_sessionManagement);
  kcg_equ = kcg_equ & kcg_comp_struct__11305(
      &kcg_c1->p131_RBC_TransitionOrder,
      &kcg_c2->p131_RBC_TransitionOrder);
  kcg_equ = kcg_equ & kcg_comp_struct__11317(
      &kcg_c1->m39_acknowledgementOfTerminationOfACommunicationSession,
      &kcg_c2->m39_acknowledgementOfTerminationOfACommunicationSession);
  kcg_equ = kcg_equ & kcg_comp_struct__11317(
      &kcg_c1->m38_initiationOfACommunicationSession,
      &kcg_c2->m38_initiationOfACommunicationSession);
  kcg_equ = kcg_equ & kcg_comp_struct__11325(
      &kcg_c1->m32_RBC_RIU_systemVersion,
      &kcg_c2->m32_RBC_RIU_systemVersion);
  kcg_equ = kcg_equ & kcg_comp_struct__11317(
      &kcg_c1->m24_generalMessage,
      &kcg_c2->m24_generalMessage);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11355(struct__11355 *kcg_c1, struct__11355 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__11290(
      &kcg_c1->m154_NoCompatibleVersionSupported,
      &kcg_c2->m154_NoCompatibleVersionSupported);
  kcg_equ = kcg_equ & kcg_comp_struct__11297(
      &kcg_c1->m159_SessionEstablished,
      &kcg_c2->m159_SessionEstablished);
  kcg_equ = kcg_equ & kcg_comp_struct__11290(
      &kcg_c1->m156_terminationOfACommunicationSession,
      &kcg_c2->m156_terminationOfACommunicationSession);
  kcg_equ = kcg_equ & kcg_comp_struct__11290(
      &kcg_c1->m155_initiationOfACommunicationSession,
      &kcg_c2->m155_initiationOfACommunicationSession);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11362(struct__11362 *kcg_c1, struct__11362 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->connectionStatus == kcg_c2->connectionStatus);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11367(struct__11367 *kcg_c1, struct__11367 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->actionToBePerformed ==
      kcg_c2->actionToBePerformed);
  kcg_equ = kcg_equ & (kcg_c1->telephoneNoOfTheRadioInfillUnit ==
      kcg_c2->telephoneNoOfTheRadioInfillUnit);
  kcg_equ = kcg_equ & (kcg_c1->radioInFillUnit_id ==
      kcg_c2->radioInFillUnit_id);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11374(struct__11374 *kcg_c1, struct__11374 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->appliesAlsoToSleepingUnits ==
      kcg_c2->appliesAlsoToSleepingUnits);
  kcg_equ = kcg_equ & (kcg_c1->telephoneNoOfTheRBC ==
      kcg_c2->telephoneNoOfTheRBC);
  kcg_equ = kcg_equ & (kcg_c1->rbc_id == kcg_c2->rbc_id);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11381(struct__11381 *kcg_c1, struct__11381 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__11374(
      &kcg_c1->orderToContactAnAcceptingRBC,
      &kcg_c2->orderToContactAnAcceptingRBC);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__11386(struct__11386 *kcg_c1, struct__11386 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->f == kcg_c2->f);
  kcg_equ = kcg_equ & (kcg_c1->k == kcg_c2->k);
  return kcg_equ;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.c
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

