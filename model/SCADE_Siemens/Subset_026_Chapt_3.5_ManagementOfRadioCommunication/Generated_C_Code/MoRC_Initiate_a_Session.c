/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-04-22T16:56:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_Initiate_a_Session.h"

void MoRC_Initiate_a_Session_reset(MoRC_outC_Initiate_a_Session *outC)
{
  outC->init = kcg_true;
}

/** Subset 096, REQ 3.5.3: */
/** Determines, if a communication session has to be initiated. */
/** "Remark_1" {Description = "- Name: Initiate_a_Session - Description: Determines, if a communication session has to be initiated.  - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* Initiate_a_Session */
void MoRC_Initiate_a_Session(
  /* Initiate_a_Session::initiateRequest_fromOnboardEquipment */kcg_bool initiateRequest_fromOnboardEquipment,
  /* Initiate_a_Session::initiateRequest_fromRBC */kcg_bool initiateRequest_fromRBC,
  /* Initiate_a_Session::initiateRequest_fromRadio_InfillUnit */kcg_bool initiateRequest_fromRadio_InfillUnit,
  /* Initiate_a_Session::etcs_level */MoRC_M_LEVEL_Type etcs_level,
  /* Initiate_a_Session::atStartOfMission */kcg_bool atStartOfMission,
  /* Initiate_a_Session::establishSessionOrderedFromTrackside */kcg_bool establishSessionOrderedFromTrackside,
  /* Initiate_a_Session::etcs_mode */MoRC_M_MODE_Type etcs_mode,
  /* Initiate_a_Session::modeChangeHasToBeReportedToRBC */kcg_bool modeChangeHasToBeReportedToRBC,
  /* Initiate_a_Session::driverHasManuallyChangedLevel */kcg_bool driverHasManuallyChangedLevel,
  /* Initiate_a_Session::trainFrontReachesEndOfAnnouncedRadioHole */kcg_bool trainFrontReachesEndOfAnnouncedRadioHole,
  /* Initiate_a_Session::prevSessionTerminatedDueToLossOfSafeRadioConnection */kcg_bool prevSessionTerminatedDueToLossOfSafeRadioConnection,
  /* Initiate_a_Session::startOfMissionProcedureCompleted */kcg_bool startOfMissionProcedureCompleted,
  /* Initiate_a_Session::NoCommunicationSessionEstablished */kcg_bool NoCommunicationSessionEstablished,
  /* Initiate_a_Session::initiateEstablishingNewSessionRequest */kcg_bool initiateEstablishingNewSessionRequest,
  MoRC_outC_Initiate_a_Session *outC)
{
  kcg_bool tmp1;
  MoRC_M_MODE_Type tmp;
  /* Initiate_a_Session::_L11 */ kcg_bool _L11;
  
  _L11 = etcs_level == MoRC_ETCS_Level_3 || etcs_level == MoRC_ETCS_Level_2;
  switch (etcs_mode) {
    case MoRC_ETCS_Mode_FullSupervision :
      tmp1 = kcg_true;
      break;
    case MoRC_ETCS_Mode_OnSight :
      tmp1 = kcg_true;
      break;
    case MoRC_ETCS_Mode_StaffResponsible :
      tmp1 = kcg_true;
      break;
    case MoRC_ETCS_Mode_Shunting :
      tmp1 = kcg_true;
      break;
    case MoRC_ETCS_Mode_Trip :
      tmp1 = kcg_true;
      break;
    case MoRC_ETCS_Mode_LimitedSupervision :
      tmp1 = kcg_true;
      break;
    case MoRC_ETCS_Mode_NationalSystem :
      tmp1 = kcg_true;
      break;
    case MoRC_ETCS_Mode_Reversing :
      tmp1 = kcg_true;
      break;
    
    default :
      tmp1 = kcg_false;
  }
  if (outC->init) {
    outC->init = kcg_false;
    tmp = MoRC_ETCS_Mode_SystemFailure;
  }
  else {
    tmp = outC->rem_etcs_mode;
  }
  outC->initiate_a_communicationSession_Request =
    (initiateRequest_fromOnboardEquipment || initiateRequest_fromRBC) &&
    ((atStartOfMission && _L11) || establishSessionOrderedFromTrackside ||
      (_L11 && tmp1 && etcs_mode != tmp && modeChangeHasToBeReportedToRBC) ||
      (_L11 && driverHasManuallyChangedLevel) ||
      trainFrontReachesEndOfAnnouncedRadioHole ||
      prevSessionTerminatedDueToLossOfSafeRadioConnection || (_L11 &&
        startOfMissionProcedureCompleted &&
        NoCommunicationSessionEstablished) ||
      initiateEstablishingNewSessionRequest);
  outC->communicationSessionInitiatedFromTrackside_ =
    outC->initiate_a_communicationSession_Request && (initiateRequest_fromRBC ||
      initiateRequest_fromRadio_InfillUnit ||
      establishSessionOrderedFromTrackside);
  outC->communicationSessionInitiatedByOBU_ =
    initiateRequest_fromOnboardEquipment &&
    outC->initiate_a_communicationSession_Request;
  outC->rem_etcs_mode = etcs_mode;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_Initiate_a_Session.c
** Generation date: 2013-04-22T16:56:47
*************************************************************$ */

