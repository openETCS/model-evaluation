/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */
#ifndef _isOrderToEstablishConnection_H_
#define _isOrderToEstablishConnection_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/** Checks, it the order carries a valid "Establish Session" command */
/** "Remark_1" {Description = "- Name: isOrderToEstablishConnection - Description: Checks, it the order carries a valid "Establish Session" command - Copyright Siemens AG, 2013 - Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl ) - Gist URL: --- - Cryptography: No - Author(s): Uwe Steinke  The use of this software is limited to non-vital applications.  It has not been developed for vital operation purposes and must not be used for applications which may cause harm to people, physical accidents or financial loss.  THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OHER KIND OF USE."} */
/* isOrderToEstablishConnection */
extern kcg_bool isOrderToEstablishConnection(
  /* isOrderToEstablishConnection::order */orderToContactAnRBC_Type *order);

#endif /* _isOrderToEstablishConnection_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** isOrderToEstablishConnection.h
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

