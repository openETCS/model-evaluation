/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */
#ifndef _safeRadioConnectionIndication_H_
#define _safeRadioConnectionIndication_H_

#include "kcg_types.h"
#include "countDownTimer.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  safeRadioConnectionStatusValid_Type /* safeRadioConnectionIndication::connectionStatus */ connectionStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_connectionStatus_SM /* safeRadioConnectionIndication::connectionStatus_SM */ connectionStatus_SM_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countDownTimer /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_safeRadioConnectionIndication;

/* ===========  node initialization and cycle functions  =========== */
/** Subset 096, REQ 3.5.7 */
/** Controls the radio connection indication for the driver. */
/** "Remark_1" {Description = "- Name: safeRadioConnectionIndication - Description: Controls the radio connection indication for the driver. - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* safeRadioConnectionIndication */
extern void safeRadioConnectionIndication(
  /* safeRadioConnectionIndication::startOfMissionProcedureIsGoingOn */kcg_bool startOfMissionProcedureIsGoingOn,
  /* safeRadioConnectionIndication::finalAttemptToSetupTheSafeRadioConnectionFailed */kcg_bool finalAttemptToSetupTheSafeRadioConnectionFailed,
  /* safeRadioConnectionIndication::requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason */kcg_bool requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason,
  /* safeRadioConnectionIndication::requestsToSetupASafeRadioConnectionAreStopped */kcg_bool requestsToSetupASafeRadioConnectionAreStopped,
  /* safeRadioConnectionIndication::safeRadioConnection_Setup */kcg_bool safeRadioConnection_Setup,
  /* safeRadioConnectionIndication::safeRadioConnection_Released */kcg_bool safeRadioConnection_Released,
  /* safeRadioConnectionIndication::safeRadioConnection_Lost */kcg_bool safeRadioConnection_Lost,
  /* safeRadioConnectionIndication::trainfrontIsInsideAnAnnouncedRadioHole */kcg_bool trainfrontIsInsideAnAnnouncedRadioHole,
  /* safeRadioConnectionIndication::actualTime */time_Type actualTime,
  /* safeRadioConnectionIndication::firstRequestToSetupASafeRadioConnection_fromEstablishing */kcg_bool firstRequestToSetupASafeRadioConnection_fromEstablishing,
  /* safeRadioConnectionIndication::firstRequestToSetupASafeRadioConnection_fromMaintaining */kcg_bool firstRequestToSetupASafeRadioConnection_fromMaintaining,
  /* safeRadioConnectionIndication::connectionStatusTimerInterval */time_Type connectionStatusTimerInterval,
  outC_safeRadioConnectionIndication *outC);

extern void safeRadioConnectionIndication_reset(
  outC_safeRadioConnectionIndication *outC);

#endif /* _safeRadioConnectionIndication_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** safeRadioConnectionIndication.h
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

