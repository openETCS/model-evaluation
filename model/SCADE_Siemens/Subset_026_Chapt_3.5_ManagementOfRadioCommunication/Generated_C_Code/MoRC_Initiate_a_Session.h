/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-08-01T09:52:21
*************************************************************$ */
#ifndef _MoRC_Initiate_a_Session_H_
#define _MoRC_Initiate_a_Session_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Initiate_a_Session::initiate_a_communicationSession_Request */ initiate_a_communicationSession_Request;
  kcg_bool /* Initiate_a_Session::communicationSessionInitiatedByOBU_ */ communicationSessionInitiatedByOBU_;
  kcg_bool /* Initiate_a_Session::communicationSessionInitiatedFromTrackside_ */ communicationSessionInitiatedFromTrackside_;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MoRC_M_MODE_Type /* Initiate_a_Session::etcs_mode */ rem_etcs_mode;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_Initiate_a_Session;

/* ===========  node initialization and cycle functions  =========== */
/** Subset 096, REQ 3.5.3: */
/** Determines, if a communication session has to be initiated. */
/** "Remark_1" {Description = "- Name: Initiate_a_Session - Description: Determines, if a communication session has to be initiated.  - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* Initiate_a_Session */
extern void MoRC_Initiate_a_Session(
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
  MoRC_outC_Initiate_a_Session *outC);

extern void MoRC_Initiate_a_Session_reset(MoRC_outC_Initiate_a_Session *outC);

#endif /* _MoRC_Initiate_a_Session_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_Initiate_a_Session.h
** Generation date: 2013-08-01T09:52:21
*************************************************************$ */

