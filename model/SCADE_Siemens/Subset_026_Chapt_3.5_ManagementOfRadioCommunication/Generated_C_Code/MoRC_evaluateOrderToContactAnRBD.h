/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-06-05T16:29:46
*************************************************************$ */
#ifndef _MoRC_evaluateOrderToContactAnRBD_H_
#define _MoRC_evaluateOrderToContactAnRBD_H_

#include "kcg_types.h"
#include "MoRC_FallingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MoRC_orderToContactAnRBC_Type /* evaluateOrderToContactAnRBD::order_out */ order_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MoRC_orderToContactAnRBC_Type /* evaluateOrderToContactAnRBD::_L16 */ _L16;
  MoRC_orderToContactAnRBC_Type /* evaluateOrderToContactAnRBD::order_in */ rem_order_in;
  /* ---------------------  sub nodes' contexts  --------------------- */
  MoRC_outC_FallingEdge_digital /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_evaluateOrderToContactAnRBD;

/* ===========  node initialization and cycle functions  =========== */
/** Subset 096, REQ 3.5.3.13, 3.5.3.16, 3.5.3.13.1, 3.5.3.14, 3.5.3.15: */
/** Evaluates the order to contact a RBC, i. e. establish, maintain or terminate a communication session. */
/** "Remark_1" {Description = "- Name: evaluateOrderToContactAnRBD - Description: Evaluates the orders to establish, maintain or terminate a communication session - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* evaluateOrderToContactAnRBD */
extern void MoRC_evaluateOrderToContactAnRBD(
  /* evaluateOrderToContactAnRBD::order_in */MoRC_orderToContactAnRBC_Type *order_in,
  /* evaluateOrderToContactAnRBD::onBoardStoredShortPhoneNo */MoRC_rbc_phoneNo_Type onBoardStoredShortPhoneNo,
  MoRC_outC_evaluateOrderToContactAnRBD *outC);

extern void MoRC_evaluateOrderToContactAnRBD_reset(
  MoRC_outC_evaluateOrderToContactAnRBD *outC);

#endif /* _MoRC_evaluateOrderToContactAnRBD_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_evaluateOrderToContactAnRBD.h
** Generation date: 2013-06-05T16:29:46
*************************************************************$ */

