/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG\kcg_s2c_config.txt
** Generation date: 2013-06-05T16:29:46
*************************************************************$ */
#ifndef _MoRC_KCG_CONSTS_H_
#define _MoRC_KCG_CONSTS_H_

#include "kcg_types.h"

/* cMobileSWStatus_unregistered */
extern const MoRC_mobileSWStatus_Type MoRC_cMobileSWStatus_unregistered;

/* cTime_0 */
#define MoRC_cTime_0 0

/* cEstablishSafeRadioConnectionCmd */
extern const MoRC_mobileSWCmd_Type MoRC_cEstablishSafeRadioConnectionCmd;

/* cNID_PACKET_42 */
#define MoRC_cNID_PACKET_42 42

/* cNID_RBC_ContactLastKnownRBC */
#define MoRC_cNID_RBC_ContactLastKnownRBC 16383

/* cNID_RADIO_useTheShortNumberStoredOnboard */
#define MoRC_cNID_RADIO_useTheShortNumberStoredOnboard 4294967295

/* cNID_LRBG_Unknown */
#define MoRC_cNID_LRBG_Unknown 16777215

/* cMobileHWStatus_Disconnected */
extern const MoRC_mobileHWStatus_Type MoRC_cMobileHWStatus_Disconnected;

/* cMobileHWStatus_Connected */
extern const MoRC_mobileHWStatus_Type MoRC_cMobileHWStatus_Connected;

/* cNID_MESSAGE_GeneralMessage */
#define MoRC_cNID_MESSAGE_GeneralMessage 24

/* cNID_MESSAGE_RBC_RIU_SystemVersion */
#define MoRC_cNID_MESSAGE_RBC_RIU_SystemVersion 32

/* cNID_MESSAGE_InitiationOfACommunicationSession */
#define MoRC_cNID_MESSAGE_InitiationOfACommunicationSession 155

/* cNID_MESSAGE_AckOfTerminationOfACommunicationSession */
#define MoRC_cNID_MESSAGE_AckOfTerminationOfACommunicationSession 39

/* cNID_PACKET_131 */
#define MoRC_cNID_PACKET_131 131

/* cNID_MESSAGE_NoCompatibleVersionSupported */
#define MoRC_cNID_MESSAGE_NoCompatibleVersionSupported 154

/* cNID_MESSAGE_terminationOfACommunicationSession */
#define MoRC_cNID_MESSAGE_terminationOfACommunicationSession 156

/* cNID_MESSAGE_SessionEstablished */
#define MoRC_cNID_MESSAGE_SessionEstablished 159

/* cNID_MESSAGE_noMessage */
#define MoRC_cNID_MESSAGE_noMessage 255

/* cNID_MESSAGE_GeneralMessage_init */
#define MoRC_cNID_MESSAGE_GeneralMessage_init 25

/* cNID_MESSAGE_InitiationOfACommunicationSession_track */
#define MoRC_cNID_MESSAGE_InitiationOfACommunicationSession_track 38

/* cEstablishOrderFromTrackside */
extern const MoRC_orderToContactAnRBC_Type MoRC_cEstablishOrderFromTrackside;

/* cTerminateOrderFromTrackside */
extern const MoRC_orderToContactAnRBC_Type MoRC_cTerminateOrderFromTrackside;

/* cSampleRadioNetworkID */
extern const MoRC_validRadioNetworkID_Type MoRC_cSampleRadioNetworkID;

/* cConnectionStatusTimerInterval */
#define MoRC_cConnectionStatusTimerInterval 15000

/* cMobileHWStatus_Registered */
extern const MoRC_mobileHWStatus_Type MoRC_cMobileHWStatus_Registered;

/* cMobileHWStatus_notRegistered */
extern const MoRC_mobileHWStatus_Type MoRC_cMobileHWStatus_notRegistered;

/* cNID_MESSAGE_registerNetwork */
#define MoRC_cNID_MESSAGE_registerNetwork 45

/* cTerminateSafeRadioConnectionCmd */
extern const MoRC_mobileSWCmd_Type MoRC_cTerminateSafeRadioConnectionCmd;

/* cRegisterSafeRadioConnectionCmd */
extern const MoRC_mobileSWCmd_Type MoRC_cRegisterSafeRadioConnectionCmd;

/* cRBC_id_contactLastKnownRBC */
#define MoRC_cRBC_id_contactLastKnownRBC (- 1)

/* cRBC_phoneNo_UseOnboardStoredShortNo */
#define MoRC_cRBC_phoneNo_UseOnboardStoredShortNo (- 1)

/* cRadioConnectionReestablishingTimeout */
#define MoRC_cRadioConnectionReestablishingTimeout 10000

/* cPositionReportRepetitionInterval */
#define MoRC_cPositionReportRepetitionInterval 10000

/* cPositionReoport_MaxNoOfRepetitions */
#define MoRC_cPositionReoport_MaxNoOfRepetitions 5

/* cTerminationOfCommunicationSessionRepetitionInterval */
#define MoRC_cTerminationOfCommunicationSessionRepetitionInterval 1000

/* cTerminationOfCommunicationSession_MaxNoOfRepetitions */
#define MoRC_cTerminationOfCommunicationSession_MaxNoOfRepetitions 5

/* cInvalidRadioNetworkID */
extern const MoRC_validRadioNetworkID_Type MoRC_cInvalidRadioNetworkID;

/* cInvalidMobileSWStatus */
extern const MoRC_mobileSWStatus_Type MoRC_cInvalidMobileSWStatus;

/* cInvalidMobileHWStatus */
extern const MoRC_mobileHWStatus_Type MoRC_cInvalidMobileHWStatus;

/* cInvalidMobileSWCmd */
extern const MoRC_mobileSWCmd_Type MoRC_cInvalidMobileSWCmd;

/* cInvalidmobileHWCmd */
extern const MoRC_mobileHWCmd_Type MoRC_cInvalidmobileHWCmd;

/* cMobileSWStatus_noHW */
extern const MoRC_mobileSWStatus_Type MoRC_cMobileSWStatus_noHW;

/* cInvalidRadioNetworkID_value */
#define MoRC_cInvalidRadioNetworkID_value (- 1)

/* cMaxNoOfConnectionRetries */
#define MoRC_cMaxNoOfConnectionRetries 3

/* cInvalidOrderToContactAnRBC */
extern const MoRC_orderToContactAnRBC_Type MoRC_cInvalidOrderToContactAnRBC;

#endif /* _MoRC_KCG_CONSTS_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_consts.h
** Generation date: 2013-06-05T16:29:46
*************************************************************$ */

