/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-02-12T12:42:24
*************************************************************$ */
#ifndef _MoRC_isOrderToEstablishConnection_H_
#define _MoRC_isOrderToEstablishConnection_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/** Checks, it the order carries a valid "Establish Session" command */
/** "Remark_1" {Description = "- Name: isOrderToEstablishConnection - Description: Checks, it the order carries a valid "Establish Session" command - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* isOrderToEstablishConnection */
extern kcg_bool MoRC_isOrderToEstablishConnection(
  /* isOrderToEstablishConnection::order */MoRC_orderToContactAnRBC_Type *order);

#endif /* _MoRC_isOrderToEstablishConnection_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MoRC_isOrderToEstablishConnection.h
** Generation date: 2013-02-12T12:42:24
*************************************************************$ */

