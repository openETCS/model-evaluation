/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */
#ifndef _evaluateOrderToContactAnRBD_H_
#define _evaluateOrderToContactAnRBD_H_

#include "kcg_types.h"
#include "FallingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  orderToContactAnRBC_Type /* evaluateOrderToContactAnRBD::order_out */ order_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  orderToContactAnRBC_Type /* evaluateOrderToContactAnRBD::_L16 */ _L16;
  orderToContactAnRBC_Type /* evaluateOrderToContactAnRBD::order_in */ rem_order_in;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FallingEdge_digital /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_evaluateOrderToContactAnRBD;

/* ===========  node initialization and cycle functions  =========== */
/** Subset 096, REQ 3.5.3.13, 3.5.3.16, 3.5.3.13.1, 3.5.3.14, 3.5.3.15: */
/** Evaluates the order to contact a RBC, i. e. establish, maintain or terminate a communication session. */
/** "Remark_1" {Description = "- Name: evaluateOrderToContactAnRBD - Description: Evaluates the orders to establish, maintain or terminate a communication session - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* evaluateOrderToContactAnRBD */
extern void evaluateOrderToContactAnRBD(
  /* evaluateOrderToContactAnRBD::order_in */orderToContactAnRBC_Type *order_in,
  /* evaluateOrderToContactAnRBD::onBoardStoredShortPhoneNo */rbc_phoneNo_Type onBoardStoredShortPhoneNo,
  outC_evaluateOrderToContactAnRBD *outC);

extern void evaluateOrderToContactAnRBD_reset(
  outC_evaluateOrderToContactAnRBD *outC);

#endif /* _evaluateOrderToContactAnRBD_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** evaluateOrderToContactAnRBD.h
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

