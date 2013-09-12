/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "terminateAndEstablishSession.h"

void terminateAndEstablishSession_reset(outC_terminateAndEstablishSession *outC)
{
  outC->init = kcg_true;
}

/** Subset 096, REQ 3.5.3.5.2 */
/** Determines, if an establishing or established session has to be terminated due to a new order that request a session with a different RBC. */
/** Initiates the termination, waits til the termination is achieved and initiates the new session. */
/** "Remark_1" {Description = "- Name: terminateAndEstablishSession - Description: Terminates the actual session and establishes a new one, if required.  - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* terminateAndEstablishSession */
void terminateAndEstablishSession(
  /* terminateAndEstablishSession::newOrderToEstablishASession_in */orderToContactAnRBC_Type *newOrderToEstablishASession_in,
  /* terminateAndEstablishSession::sessionStatus */sessionStatus_Type sessionStatus,
  /* terminateAndEstablishSession::OBU_hasToEstablishANewSession */kcg_bool OBU_hasToEstablishANewSession,
  outC_terminateAndEstablishSession *outC)
{
  /* terminateAndEstablishSession::SM1 */ SSM_ST_SM1 SM1_state_sel;
  /* terminateAndEstablishSession::SM1 */ SSM_ST_SM1 SM1_state_act;
  /* terminateAndEstablishSession::_L26 */ kcg_bool _L26;
  
  if (outC->init) {
    SM1_state_sel = SSM_st_NoTerminationInProgress_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  _L26 = sessionStatus != morc_st_inactive;
  outC->initiateTermination = (*newOrderToEstablishASession_in).valid &
    OBU_hasToEstablishANewSession &
    ((*newOrderToEstablishASession_in).actionToBePerformed ==
      morc_rbca_establishSession) & _L26;
  switch (SM1_state_sel) {
    case SSM_st_NoTerminationInProgress_SM1 :
      if (outC->initiateTermination) {
        SM1_state_act = SSM_st_TerminationInProgress_SM1;
      }
      else {
        SM1_state_act = SSM_st_NoTerminationInProgress_SM1;
      }
      break;
    case SSM_st_TerminationInProgress_SM1 :
      if (_L26) {
        SM1_state_act = SSM_st_TerminationInProgress_SM1;
      }
      else {
        SM1_state_act = SSM_st_EstablishNewSession_SM1;
      }
      break;
    case SSM_st_EstablishNewSession_SM1 :
      SM1_state_act = SSM_st_NoTerminationInProgress_SM1;
      break;
    
  }
  switch (SM1_state_act) {
    case SSM_st_NoTerminationInProgress_SM1 :
      outC->SM1_state_nxt = SSM_st_NoTerminationInProgress_SM1;
      break;
    case SSM_st_TerminationInProgress_SM1 :
      outC->SM1_state_nxt = SSM_st_TerminationInProgress_SM1;
      break;
    case SSM_st_EstablishNewSession_SM1 :
      outC->SM1_state_nxt = SSM_st_EstablishNewSession_SM1;
      break;
    
  }
  if ((*newOrderToEstablishASession_in).valid) {
    kcg_copy_orderToContactAnRBC_Type(
      &outC->storedOrder,
      newOrderToEstablishASession_in);
  }
  else if (outC->init) {
    kcg_copy_orderToContactAnRBC_Type(
      &outC->storedOrder,
      (orderToContactAnRBC_Type *) &cInvalidOrderToContactAnRBC);
  }
  switch (SM1_state_act) {
    case SSM_st_NoTerminationInProgress_SM1 :
      kcg_copy_orderToContactAnRBC_Type(
        &outC->newOrderToEstablishASession_out,
        newOrderToEstablishASession_in);
      outC->initiateEstablishingNewSession = kcg_false;
      break;
    case SSM_st_TerminationInProgress_SM1 :
      kcg_copy_orderToContactAnRBC_Type(
        &outC->newOrderToEstablishASession_out,
        (orderToContactAnRBC_Type *) &cInvalidOrderToContactAnRBC);
      outC->initiateEstablishingNewSession = kcg_false;
      break;
    case SSM_st_EstablishNewSession_SM1 :
      kcg_copy_orderToContactAnRBC_Type(
        &outC->newOrderToEstablishASession_out,
        &outC->storedOrder);
      outC->initiateEstablishingNewSession = kcg_true;
      break;
    
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** terminateAndEstablishSession.c
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

