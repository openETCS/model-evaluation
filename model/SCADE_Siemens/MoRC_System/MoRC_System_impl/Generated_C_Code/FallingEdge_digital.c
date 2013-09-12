/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FallingEdge_digital.h"

void FallingEdge_reset_digital(outC_FallingEdge_digital *outC)
{
  outC->init = kcg_true;
}

/* digital::FallingEdge */
void FallingEdge_digital(
  /* digital::FallingEdge::FE_Input */kcg_bool FE_Input,
  outC_FallingEdge_digital *outC)
{
  kcg_bool tmp;
  
  if (outC->init) {
    tmp = FE_Input;
  }
  else {
    tmp = outC->rem_FE_Input;
  }
  outC->FE_Output = tmp & !FE_Input;
  outC->rem_FE_Input = FE_Input;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FallingEdge_digital.c
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

