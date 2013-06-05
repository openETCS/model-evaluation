/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-06-05T16:29:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_FallingEdge_digital.h"

void MoRC_FallingEdge_reset_digital(MoRC_outC_FallingEdge_digital *outC)
{
  outC->init = kcg_true;
}

/* digital::FallingEdge */
void MoRC_FallingEdge_digital(
  /* digital::FallingEdge::FE_Input */kcg_bool FE_Input,
  MoRC_outC_FallingEdge_digital *outC)
{
  kcg_bool tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    tmp = FE_Input;
  }
  else {
    tmp = outC->rem_FE_Input;
  }
  outC->FE_Output = tmp && !FE_Input;
  outC->rem_FE_Input = FE_Input;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_FallingEdge_digital.c
** Generation date: 2013-06-05T16:29:47
*************************************************************$ */

