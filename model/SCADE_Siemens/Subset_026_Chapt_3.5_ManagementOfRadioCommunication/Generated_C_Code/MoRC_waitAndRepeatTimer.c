/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-02-12T12:42:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_waitAndRepeatTimer.h"

void MoRC_waitAndRepeatTimer_reset(MoRC_outC_waitAndRepeatTimer *outC)
{
  outC->init = kcg_true;
  /* 1 */ MoRC_countDownTimer_reset(&outC->Context_1);
}

/** Implements a timer for a triggering an action a limited number of times in configured intervals. */
/** Repeats triggerAction maxNoOfRepetition times in intervals of repeatInterval. */
/** triggerAction is activated at the beginning of each interval. */
/** elapsed is activated after the last interval. */
/** "Remark_1" {Description = "- Name: waitAndRepeatTimer - Description: Implements a timer for a triggering an action a limited number of times in configured intervals - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* waitAndRepeatTimer */
void MoRC_waitAndRepeatTimer(
  /* waitAndRepeatTimer::actualTime */MoRC_time_Type actualTime,
  /* waitAndRepeatTimer::re_start */kcg_bool re_start,
  /* waitAndRepeatTimer::stop */kcg_bool stop,
  /* waitAndRepeatTimer::repeatInterval */MoRC_time_Type repeatInterval,
  /* waitAndRepeatTimer::maxNoOfRepetitions */kcg_int maxNoOfRepetitions,
  MoRC_outC_waitAndRepeatTimer *outC)
{
  /* waitAndRepeatTimer::_L9 */ kcg_int _L9;
  /* waitAndRepeatTimer::_L14 */ kcg_bool _L14;
  
  if (outC->init) {
    outC->init = kcg_false;
    _L9 = 0;
  }
  else {
    _L9 = outC->_L22;
  }
  outC->elapsed = _L9 >= maxNoOfRepetitions;
  _L14 = !outC->elapsed;
  /* 1 */
  MoRC_countDownTimer(
    re_start,
    stop,
    actualTime,
    kcg_true,
    repeatInterval,
    &outC->Context_1);
  outC->triggerAction = (_L14 && outC->Context_1.expired) || (_L14 &&
      outC->Context_1.started);
  if (re_start) {
    outC->_L22 = 0;
  }
  else if (outC->Context_1.expired) {
    outC->_L22 = 1 + _L9;
  }
  else {
    outC->_L22 = _L9;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_waitAndRepeatTimer.c
** Generation date: 2013-02-12T12:42:24
*************************************************************$ */

