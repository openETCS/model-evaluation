/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-08-01T09:52:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_safeRadioConnectionIndication.h"

void MoRC_safeRadioConnectionIndication_reset(
  MoRC_outC_safeRadioConnectionIndication *outC)
{
  outC->init = kcg_true;
  /* 1 */ MoRC_countDownTimer_reset(&outC->Context_1);
}

/** Subset 096, REQ 3.5.7 */
/** Controls the radio connection indication for the driver. */
/** "Remark_1" {Description = "- Name: safeRadioConnectionIndication - Description: Controls the radio connection indication for the driver. - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* safeRadioConnectionIndication */
void MoRC_safeRadioConnectionIndication(
  /* safeRadioConnectionIndication::startOfMissionProcedureIsGoingOn */kcg_bool startOfMissionProcedureIsGoingOn,
  /* safeRadioConnectionIndication::finalAttemptToSetupTheSafeRadioConnectionFailed */kcg_bool finalAttemptToSetupTheSafeRadioConnectionFailed,
  /* safeRadioConnectionIndication::requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason */kcg_bool requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason,
  /* safeRadioConnectionIndication::requestsToSetupASafeRadioConnectionAreStopped */kcg_bool requestsToSetupASafeRadioConnectionAreStopped,
  /* safeRadioConnectionIndication::safeRadioConnection_Setup */kcg_bool safeRadioConnection_Setup,
  /* safeRadioConnectionIndication::safeRadioConnection_Released */kcg_bool safeRadioConnection_Released,
  /* safeRadioConnectionIndication::safeRadioConnection_Lost */kcg_bool safeRadioConnection_Lost,
  /* safeRadioConnectionIndication::trainfrontIsInsideAnAnnouncedRadioHole */kcg_bool trainfrontIsInsideAnAnnouncedRadioHole,
  /* safeRadioConnectionIndication::actualTime */MoRC_time_Type actualTime,
  /* safeRadioConnectionIndication::firstRequestToSetupASafeRadioConnection_fromEstablishing */kcg_bool firstRequestToSetupASafeRadioConnection_fromEstablishing,
  /* safeRadioConnectionIndication::firstRequestToSetupASafeRadioConnection_fromMaintaining */kcg_bool firstRequestToSetupASafeRadioConnection_fromMaintaining,
  /* safeRadioConnectionIndication::connectionStatusTimerInterval */MoRC_time_Type connectionStatusTimerInterval,
  MoRC_outC_safeRadioConnectionIndication *outC)
{
  /* safeRadioConnectionIndication::connectionStatus_SM */ MoRC_SSM_ST_connectionStatus_SM connectionStatus_SM_state_sel;
  /* safeRadioConnectionIndication::connectionStatus_SM */ MoRC_SSM_ST_connectionStatus_SM connectionStatus_SM_state_act;
  
  outC->connectionStatus.valid = kcg_true;
  /* 1 */
  MoRC_countDownTimer(
    (kcg_bool)
      (firstRequestToSetupASafeRadioConnection_fromEstablishing ||
        firstRequestToSetupASafeRadioConnection_fromMaintaining),
    requestsToSetupASafeRadioConnectionAreStopped,
    actualTime,
    kcg_false,
    connectionStatusTimerInterval,
    &outC->Context_1);
  if (outC->init) {
    outC->init = kcg_false;
    connectionStatus_SM_state_sel =
      MoRC_SSM_st_NoConnection_connectionStatus_SM;
  }
  else {
    connectionStatus_SM_state_sel = outC->connectionStatus_SM_state_nxt;
  }
  switch (connectionStatus_SM_state_sel) {
    case MoRC_SSM_st_NoConnection_connectionStatus_SM :
      if (safeRadioConnection_Setup) {
        connectionStatus_SM_state_act =
          MoRC_SSM_st_ConnectionUp_connectionStatus_SM;
      }
      else if ((startOfMissionProcedureIsGoingOn &&
          finalAttemptToSetupTheSafeRadioConnectionFailed) ||
        outC->Context_1.expired) {
        connectionStatus_SM_state_act =
          MoRC_SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM;
      }
      else {
        connectionStatus_SM_state_act =
          MoRC_SSM_st_NoConnection_connectionStatus_SM;
      }
      break;
    case MoRC_SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      if (safeRadioConnection_Setup) {
        connectionStatus_SM_state_act =
          MoRC_SSM_st_ConnectionUp_connectionStatus_SM;
      }
      else if (!startOfMissionProcedureIsGoingOn &&
        requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason) {
        connectionStatus_SM_state_act =
          MoRC_SSM_st_NoConnection_connectionStatus_SM;
      }
      else {
        connectionStatus_SM_state_act =
          MoRC_SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM;
      }
      break;
    case MoRC_SSM_st_ConnectionUp_connectionStatus_SM :
      if (safeRadioConnection_Released || (safeRadioConnection_Lost &&
          requestsToSetupASafeRadioConnectionAreStopped_unsuccessfullReason) ||
        (safeRadioConnection_Lost && trainfrontIsInsideAnAnnouncedRadioHole)) {
        connectionStatus_SM_state_act =
          MoRC_SSM_st_NoConnection_connectionStatus_SM;
      }
      else if (outC->Context_1.expired) {
        connectionStatus_SM_state_act =
          MoRC_SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM;
      }
      else {
        connectionStatus_SM_state_act =
          MoRC_SSM_st_ConnectionUp_connectionStatus_SM;
      }
      break;
    
  }
  switch (connectionStatus_SM_state_act) {
    case MoRC_SSM_st_NoConnection_connectionStatus_SM :
      outC->connectionStatus_SM_state_nxt =
        MoRC_SSM_st_NoConnection_connectionStatus_SM;
      outC->connectionStatus.status = MoRC_srcs_NoConnection;
      break;
    case MoRC_SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM :
      outC->connectionStatus_SM_state_nxt =
        MoRC_SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM;
      outC->connectionStatus.status = MoRC_srcs_ConnectionLost_SetupFailed;
      break;
    case MoRC_SSM_st_ConnectionUp_connectionStatus_SM :
      outC->connectionStatus_SM_state_nxt =
        MoRC_SSM_st_ConnectionUp_connectionStatus_SM;
      outC->connectionStatus.status = MoRC_srcs_ConnectionUp;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_safeRadioConnectionIndication.c
** Generation date: 2013-08-01T09:52:22
*************************************************************$ */

