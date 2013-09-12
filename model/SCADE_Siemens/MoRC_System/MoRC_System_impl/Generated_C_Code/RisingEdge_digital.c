/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RisingEdge_digital.h"

void RisingEdge_reset_digital(outC_RisingEdge_digital *outC)
{
  outC->init = kcg_true;
}

/* digital::RisingEdge */
void RisingEdge_digital(
  /* digital::RisingEdge::RE_Input */kcg_bool RE_Input,
  outC_RisingEdge_digital *outC)
{
  kcg_bool tmp;
  
  if (outC->init) {
    tmp = !RE_Input;
  }
  else {
    tmp = !outC->rem_RE_Input;
  }
  outC->RE_Output = tmp & RE_Input;
  outC->rem_RE_Input = RE_Input;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RisingEdge_digital.c
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

