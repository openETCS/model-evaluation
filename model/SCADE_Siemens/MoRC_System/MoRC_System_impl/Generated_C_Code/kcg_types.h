/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Q:/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC_System/MoRC_System_impl/KCG\kcg_s2c_config.txt
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_int
#define kcg_int kcg_int
typedef int kcg_int;
#endif /* kcg_int */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_real
#define kcg_real kcg_real
typedef double kcg_real;
#endif /* kcg_real */

#ifndef kcg_char
#define kcg_char kcg_char
typedef unsigned char kcg_char;
#endif /* kcg_char */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* MoRC_System::FunctionalComposition::ActivationMode */
typedef enum {
  ActivationMode__inactive_MoRC_System_FunctionalComposition,
  ActivationMode__establishing_MoRC_System_FunctionalComposition,
  ActivationMode__maintaining_MoRC_System_FunctionalComposition,
  ActivationMode__terminating_MoRC_System_FunctionalComposition
} ActivationMode_MoRC_System_FunctionalComposition;
/* truthtables::TruthTableValues */
typedef enum {
  T_truthtables,
  F_truthtables,
  X_truthtables
} TruthTableValues_truthtables;
/* Q_RBC_Type */
typedef enum {
  q_rbc_terminateCommunicationSession,
  q_rbc_establishCommunicationSession
} Q_RBC_Type;
/* Q_DIR_Type */
typedef enum {
  q_dir_reverse,
  q_dir_nominal,
  q_dir_bothDirections,
  q_dir_spare
} Q_DIR_Type;
/* Q_SLEEPSESSION_Type */
typedef enum {
  q_sleepsession_ignoreSessionEstablishmentOrder,
  q_sleepsession_executeSessionEstablishmentOrder
} Q_SLEEPSESSION_Type;
/* M_ACK_Type */
typedef enum { M_ACK_NoAckRequired, M_ACK_AckRequired } M_ACK_Type;
/* MoRC_System::Architecture::tRMOrder */
typedef enum {
  tRMOrder__trm_noOrder_MoRC_System_Architecture,
  tRMOrder__trm_initiateSession_MoRC_System_Architecture,
  tRMOrder__trm_terminateSession_MoRC_System_Architecture,
  tRMOrder__trm_registerToNetwork_MoRC_System_Architecture
} tRMOrder_MoRC_System_Architecture;
/* MoRC_System::Architecture::tM_Mode */
typedef enum {
  tM_Mode__ETCSMode_FullSupervision_MoRC_System_Architecture,
  tM_Mode__ETCSMode_OnSight_MoRC_System_Architecture,
  tM_Mode__ETCSMode_StaffResponsible_MoRC_System_Architecture,
  tM_Mode__ETCSMode_Shunting_MoRC_System_Architecture,
  tM_Mode__ETCSMode_Unfitted_MoRC_System_Architecture,
  tM_Mode__ETCSMode_Sleeping_MoRC_System_Architecture,
  tM_Mode__ETCSMode_Standby_MoRC_System_Architecture,
  tM_Mode__ETCSMode_Trip_MoRC_System_Architecture,
  tM_Mode__ETCSMode_PostTrip_MoRC_System_Architecture,
  tM_Mode__ETCSMode_SystemFailure_MoRC_System_Architecture,
  tM_Mode__ETCSMode_Isolation_MoRC_System_Architecture,
  tM_Mode__ETCSMode_NonLeading_MoRC_System_Architecture,
  tM_Mode__ETCSMode_LimitedSupervision_MoRC_System_Architecture,
  tM_Mode__ETCSMode_NationalSystem_MoRC_System_Architecture,
  tM_Mode__ETCSMode_Reversing_MoRC_System_Architecture,
  tM_Mode__ETCSMode_PassiveShunting_MoRC_System_Architecture,
  tM_Mode__ETCSMode_EndOfMission_MoRC_System_Architecture
} tM_Mode_MoRC_System_Architecture;
/* MoRC_System::Architecture::tM_Level */
typedef enum {
  tM_Level__ETCSLevel_0_MoRC_System_Architecture,
  tM_Level__ETCSLevel_NTC_MoRC_System_Architecture,
  tM_Level__ETCSLevel_1_MoRC_System_Architecture,
  tM_Level__ETCSLevel_2_MoRC_System_Architecture,
  tM_Level__ETCSLevel_3_MoRC_System_Architecture
} tM_Level_MoRC_System_Architecture;
/* MoRC_System::Architecture::tRadioHoleStatus */
typedef enum {
  tRadioHoleStatus__RHS_none_MoRC_System_Architecture,
  tRadioHoleStatus__RHS_end_MoRC_System_Architecture,
  tRadioHoleStatus__RHS_begin_MoRC_System_Architecture,
  tRadioHoleStatus__RHS_inside_MoRC_System_Architecture
} tRadioHoleStatus_MoRC_System_Architecture;
/* MoRC_System::Architecture::tMobileHWConnectionStatus */
typedef enum {
  tMobileHWConnectionStatus__mhwc_notRegistered_MoRC_System_Architecture,
  tMobileHWConnectionStatus__mhwc_registered_MoRC_System_Architecture,
  tMobileHWConnectionStatus__mhwc_connectionSetupInProgress_MoRC_System_Architecture,
  tMobileHWConnectionStatus__mhwc_connected_MoRC_System_Architecture
} tMobileHWConnectionStatus_MoRC_System_Architecture;
/* MoRC_System::Architecture::tMobileHWAction */
typedef enum {
  tMobileHWAction__mhwa_nop_MoRC_System_Architecture,
  tMobileHWAction__mhwa_register_MoRC_System_Architecture,
  tMobileHWAction__mhwa_connect_MoRC_System_Architecture,
  tMobileHWAction__mhwa_disconnect_MoRC_System_Architecture,
  tMobileHWAction__mhwa_unregister_MoRC_System_Architecture
} tMobileHWAction_MoRC_System_Architecture;
/* MoRC_System::Architecture::tMobileSWConnectionStatus */
typedef enum {
  tMobileSWConnectionStatus__mswc_unregistered_MoRC_System_Architecture,
  tMobileSWConnectionStatus__mswc_registering_MoRC_System_Architecture,
  tMobileSWConnectionStatus__mswc_registered_MoRC_System_Architecture,
  tMobileSWConnectionStatus__mswc_connecting_MoRC_System_Architecture,
  tMobileSWConnectionStatus__mswc_connected_MoRC_System_Architecture,
  tMobileSWConnectionStatus__mswc_establishingSession_MoRC_System_Architecture,
  tMobileSWConnectionStatus__mswc_sessionEstablished_MoRC_System_Architecture
} tMobileSWConnectionStatus_MoRC_System_Architecture;
/* radioHoleStatus_Type */
typedef enum { rhs_none, rhs_end, rhs_begin, rhs_inside } radioHoleStatus_Type;
/* onBoardOrder_Type */
typedef enum {
  obo_noOrder,
  obo_initiateCommunication,
  obo_terminateCommunication,
  obo_registerNetwork
} onBoardOrder_Type;
/* M_MODE_Type */
typedef enum {
  ETCS_Mode_FullSupervision,
  ETCS_Mode_OnSight,
  ETCS_Mode_StaffResponsible,
  ETCS_Mode_Shunting,
  ETCS_Mode_Unfitted,
  ETCS_Mode_Sleeping,
  ETCS_Mode_StandBy,
  ETCS_Mode_Trip,
  ETCS_Mode_PostTrip,
  ETCS_Mode_SystemFailure,
  ETCS_Mode_Isolation,
  ETCS_Mode_NonLeading,
  ETCS_Mode_LimitedSupervision,
  ETCS_Mode_NationalSystem,
  ETCS_Mode_Reversing,
  ETCS_Mode_PassiveShunting,
  ETCS_Mode_EndOfMission
} M_MODE_Type;
/* M_LEVEL_Type */
typedef enum {
  ETCS_Level_0,
  ETCS_Level_NTC,
  ETCS_Level_1,
  ETCS_Level_2,
  ETCS_Level_3
} M_LEVEL_Type;
/* mobileHWConnectionStatus_Type */
typedef enum {
  mhwc_notRegistered,
  mhwc_registered,
  mhwc_connectionSetupInProgress,
  mhwc_connected
} mobileHWConnectionStatus_Type;
/* mobileSWAction_Type */
typedef enum {
  mswa_nop,
  mswa_register,
  mswa_connect,
  mswa_establishRadioConnection,
  mswa_terminateRadioConnection,
  mswa_disconnect,
  mswa_unregister
} mobileSWAction_Type;
/* mobileHWAction_Type */
typedef enum {
  mhwa_nop,
  mhwa_register,
  mhwa_connect,
  mhwa_disconnect,
  mhwa_unregister
} mobileHWAction_Type;
/* mobileSWConnectionStatus_Type */
typedef enum {
  mswc_unregistered,
  mswc_registering,
  mswc_registered,
  mswc_connecting,
  mswc_connected,
  mswc_establishingSession,
  mswc_sessionEstablished
} mobileSWConnectionStatus_Type;
/* safeRadioConnectionStatus_Type */
typedef enum {
  srcs_NoConnection,
  srcs_ConnectionLost_SetupFailed,
  srcs_ConnectionUp
} safeRadioConnectionStatus_Type;
/* morc_RBC_action_Type */
typedef enum {
  morc_rbca_noAction,
  morc_rbca_establishSession,
  morc_rbca_terminateSesssion
} morc_RBC_action_Type;
/* sessionStatus_Type */
typedef enum {
  morc_st_inactive,
  morc_st_establishing,
  morc_st_maintaining,
  morc_st_terminating
} sessionStatus_Type;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM */
typedef enum {
  SSM_TR_no_trans_EstablishmentOfACommunicationSession_SM,
  SSM_TR_Idle_1_EstablishmentOfACommunicationSession_SM,
  SSM_TR_Idle_2_EstablishmentOfACommunicationSession_SM,
  SSM_TR_RequestSetupOfASafeRadioConnection_initiatedByOBU_1_EstablishmentOfACommunicationSession_SM,
  SSM_TR_RequestSetupOfASafeRadioConnection_initiatedByOBU_2_EstablishmentOfACommunicationSession_SM,
  SSM_TR_WaitForSystemVersionFromTrackSide_1_EstablishmentOfACommunicationSession_SM,
  SSM_TR_WaitForSystemVersionFromTrackSide_2_EstablishmentOfACommunicationSession_SM,
  SSM_TR_NoCompatibleSystemVersionSupported_1_EstablishmentOfACommunicationSession_SM,
  SSM_TR_RequestSetupOfASafeRadioConnection_initiatedByTrackside_1_EstablishmentOfACommunicationSession_SM,
  SSM_TR_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_1_EstablishmentOfACommunicationSession_SM
} SSM_TR_EstablishmentOfACommunicationSession_SM;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM */
typedef enum {
  SSM_st_Idle_EstablishmentOfACommunicationSession_SM,
  SSM_st_RequestSetupOfASafeRadioConnection_initiatedByOBU_EstablishmentOfACommunicationSession_SM,
  SSM_st_WaitForSystemVersionFromTrackSide_EstablishmentOfACommunicationSession_SM,
  SSM_st_CompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM,
  SSM_st_NoCompatibleSystemVersionSupported_EstablishmentOfACommunicationSession_SM,
  SSM_st_WaitTil_CommunicationSessionTerminated_EstablishmentOfACommunicationSession_SM,
  SSM_st_RequestSetupOfASafeRadioConnection_initiatedByTrackside_EstablishmentOfACommunicationSession_SM,
  SSM_st_WaitForMessage_InitiationOfCommunicationSession_FromTrackside_EstablishmentOfACommunicationSession_SM,
  SSM_st_ConsiderTheCommunicationSessionEstablished_EstablishmentOfACommunicationSession_SM
} SSM_ST_EstablishmentOfACommunicationSession_SM;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */
typedef enum {
  SSM_TR_no_trans_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  SSM_TR_Start_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  SSM_TR_Start_2_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  SSM_TR_TryToEstablishConnection_isPartOfStartOfMission_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  SSM_TR_TryToEstablishConnection_isPartOfStartOfMission_2_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  SSM_TR_TryToEstablishConnection_isNotPartOfStartOfMission_1_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU,
  SSM_TR_TryToEstablishConnection_isNotPartOfStartOfMission_2_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU
} SSM_TR_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM */
typedef enum {
  SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM,
  SSM_st_TryToEstablishConnection_isPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM,
  SSM_st_Success_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM,
  SSM_st_NoSuccess_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM,
  SSM_st_TryToEstablishConnection_isNotPartOfStartOfMission_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM
} SSM_ST_RequestConnectionWithTrackSide_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM */
typedef enum {
  SSM_TR_no_trans_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfSt,
  SSM_TR_Start_1_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfSta,
  SSM_TR_Retry_1_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfSta
} SSM_TR_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMiss;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isPartOfStartOfMission::RepeatSetupConnection_SM */
typedef enum {
  SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn,
  SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMission_RepeatSetupConn
} SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isPartOfStartOfMiss;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission::RepeatSetupConnection_SM */
typedef enum {
  SSM_TR_no_trans_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartO,
  SSM_TR_Start_1_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOf,
  SSM_TR_Retry_1_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOf
} SSM_TR_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfM;
/* establish_a_CommunicationSession::EstablishmentOfACommunicationSession_SM::RequestSetupOfASafeRadioConnection_initiatedByOBU::RequestConnectionWithTrackSide_SM::TryToEstablishConnection_isNotPartOfStartOfMission::RepeatSetupConnection_SM */
typedef enum {
  SSM_st_Start_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC,
  SSM_st_Retry_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfMission_RepeatSetupC
} SSM_ST_RepeatSetupConnection_SM_EstablishmentOfACommunicationSession_SM_RequestSetupOfASafeRadioConnection_initiatedByOBU_RequestConnectionWithTrackSide_SM_TryToEstablishConnection_isNotPartOfStartOfM;
/* countDownTimer::TimerStatus_SM */
typedef enum {
  SSM_TR_no_trans_TimerStatus_SM,
  SSM_TR_Stopped_1_TimerStatus_SM,
  SSM_TR_Stopped_2_TimerStatus_SM,
  SSM_TR_Counting_1_TimerStatus_SM,
  SSM_TR_Counting_2_TimerStatus_SM,
  SSM_TR_Counting_3_TimerStatus_SM,
  SSM_TR_Counting_4_TimerStatus_SM,
  SSM_TR_Expired_1_TimerStatus_SM,
  SSM_TR_Expired_2_TimerStatus_SM
} SSM_TR_TimerStatus_SM;
/* countDownTimer::TimerStatus_SM */
typedef enum {
  SSM_st_Stopped_TimerStatus_SM,
  SSM_st_Counting_TimerStatus_SM,
  SSM_st_Expired_TimerStatus_SM
} SSM_ST_TimerStatus_SM;
/* maintaining_a_CommunicationSession::Maintaining_SM */
typedef enum {
  SSM_TR_no_trans_Maintaining_SM,
  SSM_TR_CommunicationSessionNotEstablished_1_Maintaining_SM,
  SSM_TR_CommunicationSessionEstablished_1_Maintaining_SM
} SSM_TR_Maintaining_SM;
/* maintaining_a_CommunicationSession::Maintaining_SM */
typedef enum {
  SSM_st_CommunicationSessionNotEstablished_Maintaining_SM,
  SSM_st_CommunicationSessionEstablished_Maintaining_SM
} SSM_ST_Maintaining_SM;
/* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */
typedef enum {
  SSM_TR_no_trans_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  SSM_TR_SafeRadio_connected_1_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  SSM_TR_SafeRadio_connected_2_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  SSM_TR_ConnectionLost_1_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  SSM_TR_ConnectionLost_2_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished,
  SSM_TR_ConnecctionLostInAnnouncedRadioHole_1_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished
} SSM_TR_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished;
/* maintaining_a_CommunicationSession::Maintaining_SM::CommunicationSessionEstablished::RadioConnection_SM */
typedef enum {
  SSM_st_SafeRadio_connected_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM,
  SSM_st_ConnectionLost_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM,
  SSM_st_RadioConnectionLostTimerExpired_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM,
  SSM_st_ConnecctionLostInAnnouncedRadioHole_Maintaining_SM_CommunicationSessionEstablished_RadioConnection_SM
} SSM_ST_RadioConnection_SM_Maintaining_SM_CommunicationSessionEstablished;
/* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */
typedef enum {
  SSM_TR_no_trans_TerminateTheCommunicationSession_SM,
  SSM_TR_Idle_1_TerminateTheCommunicationSession_SM,
  SSM_TR_Idle_2_TerminateTheCommunicationSession_SM,
  SSM_TR_WaitForAcknowledgementMessage_1_TerminateTheCommunicationSession_SM,
  SSM_TR_EstablishingACommunicationSessionAborted_1_TerminateTheCommunicationSession_SM
} SSM_TR_TerminateTheCommunicationSession_SM;
/* terminating_a_CommunicationSession::TerminateTheCommunicationSession_SM */
typedef enum {
  SSM_st_Idle_TerminateTheCommunicationSession_SM,
  SSM_st_WaitForAcknowledgementMessage_TerminateTheCommunicationSession_SM,
  SSM_st_CommunicationSession_Terminated_TerminateTheCommunicationSession_SM,
  SSM_st_EstablishingACommunicationSessionAborted_TerminateTheCommunicationSession_SM
} SSM_ST_TerminateTheCommunicationSession_SM;
/* radioNetworkMobile::MobileHW_available_SM */
typedef enum {
  SSM_TR_no_trans_MobileHW_available_SM,
  SSM_TR_MobileHWNotAvailable_1_MobileHW_available_SM,
  SSM_TR_MobileHWAvailable_1_MobileHW_available_SM,
  SSM_TR_InitialState_1_MobileHW_available_SM
} SSM_TR_MobileHW_available_SM;
/* radioNetworkMobile::MobileHW_available_SM */
typedef enum {
  SSM_st_MobileHWNotAvailable_MobileHW_available_SM,
  SSM_st_MobileHWAvailable_MobileHW_available_SM,
  SSM_st_InitialState_MobileHW_available_SM
} SSM_ST_MobileHW_available_SM;
/* radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM */
typedef enum {
  SSM_TR_no_trans_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_UnregisteredToTheRadioNetwork_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_RegisteringToTheRadioNetwork_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_RegisteringToTheRadioNetwork_2_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_RegisteringToTheRadioNetwork_3_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_RegisteredToTheRadioNetwork_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_RegisteredToTheRadioNetwork_2_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_RegisteredToTheRadioNetwork_3_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_ConnectingToTheRadioNetwork_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_ConnectingToTheRadioNetwork_2_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_ConnectedToTheRadioNetwork_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_ConnectedToTheRadioNetwork_2_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_ConnectedToTheRadioNetwork_3_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_ConnectedToTheRadioNetwork_4_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_EstablishingASession_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_SessionEstablished_1_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable,
  SSM_TR_SessionEstablished_2_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable
} SSM_TR_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable;
/* radioNetworkMobile::MobileHW_available_SM::MobileHWAvailable::MobileSWConnection_SM */
typedef enum {
  SSM_st_UnregisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  SSM_st_RegisteringToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  SSM_st_RegisteredToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  SSM_st_ConnectingToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  SSM_st_ConnectedToTheRadioNetwork_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  SSM_st_EstablishingASession_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM,
  SSM_st_SessionEstablished_MobileHW_available_SM_MobileHWAvailable_MobileSWConnection_SM
} SSM_ST_MobileSWConnection_SM_MobileHW_available_SM_MobileHWAvailable;
/* safeRadioConnectionIndication::connectionStatus_SM */
typedef enum {
  SSM_TR_no_trans_connectionStatus_SM,
  SSM_TR_NoConnection_1_connectionStatus_SM,
  SSM_TR_NoConnection_2_connectionStatus_SM,
  SSM_TR_ConnectionLost_SetupFailed_1_connectionStatus_SM,
  SSM_TR_ConnectionLost_SetupFailed_2_connectionStatus_SM,
  SSM_TR_ConnectionUp_1_connectionStatus_SM,
  SSM_TR_ConnectionUp_2_connectionStatus_SM
} SSM_TR_connectionStatus_SM;
/* safeRadioConnectionIndication::connectionStatus_SM */
typedef enum {
  SSM_st_NoConnection_connectionStatus_SM,
  SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM,
  SSM_st_ConnectionUp_connectionStatus_SM
} SSM_ST_connectionStatus_SM;
/* initiateTerminatingASession::TrainExitedFromRBCArea_SM */
typedef enum {
  SSM_TR_no_trans_TrainExitedFromRBCArea_SM,
  SSM_TR_Idle_1_TrainExitedFromRBCArea_SM,
  SSM_TR_WaitForOrderToTerminateTheSession_1_TrainExitedFromRBCArea_SM,
  SSM_TR_WaitForOrderToTerminateTheSession_2_TrainExitedFromRBCArea_SM
} SSM_TR_TrainExitedFromRBCArea_SM;
/* initiateTerminatingASession::TrainExitedFromRBCArea_SM */
typedef enum {
  SSM_st_Idle_TrainExitedFromRBCArea_SM,
  SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM
} SSM_ST_TrainExitedFromRBCArea_SM;
/* terminateAndEstablishSession::SM1 */
typedef enum {
  SSM_TR_no_trans_SM1,
  SSM_TR_NoTerminationInProgress_1_SM1,
  SSM_TR_TerminationInProgress_1_SM1,
  SSM_TR_EstablishNewSession_1_SM1
} SSM_TR_SM1;
/* terminateAndEstablishSession::SM1 */
typedef enum {
  SSM_st_NoTerminationInProgress_SM1,
  SSM_st_TerminationInProgress_SM1,
  SSM_st_EstablishNewSession_SM1
} SSM_ST_SM1;
/* managementOfRadioCommunication::CommunicationSession_SM */
typedef enum {
  SSM_TR_no_trans_CommunicationSession_SM,
  SSM_TR_NoSession_1_CommunicationSession_SM,
  SSM_TR_Establishing_1_CommunicationSession_SM,
  SSM_TR_Establishing_2_CommunicationSession_SM,
  SSM_TR_Maintaining_1_CommunicationSession_SM,
  SSM_TR_Terminating_1_CommunicationSession_SM
} SSM_TR_CommunicationSession_SM;
/* managementOfRadioCommunication::CommunicationSession_SM */
typedef enum {
  SSM_st_NoSession_CommunicationSession_SM,
  SSM_st_Establishing_CommunicationSession_SM,
  SSM_st_Maintaining_CommunicationSession_SM,
  SSM_st_Terminating_CommunicationSession_SM
} SSM_ST_CommunicationSession_SM;
/* MoRC_withSimplified_IF::PowerUpSequencer */
typedef enum {
  SSM_TR_no_trans_PowerUpSequencer,
  SSM_TR_TheVeryFirstCycle_1_PowerUpSequencer,
  SSM_TR_AtPowerUpState_1_PowerUpSequencer
} SSM_TR_PowerUpSequencer;
/* MoRC_withSimplified_IF::PowerUpSequencer */
typedef enum {
  SSM_st_TheVeryFirstCycle_PowerUpSequencer,
  SSM_st_AtPowerUpState_PowerUpSequencer,
  SSM_st_AfterPowerUp_PowerUpSequencer
} SSM_ST_PowerUpSequencer;
/* MoRC_System::Architecture::tNID_Message */
typedef kcg_int tNID_Message_MoRC_System_Architecture;

/* MoRC_System::Architecture::tNIC_RBC_ID */
typedef kcg_int tNIC_RBC_ID_MoRC_System_Architecture;

/* MoRC_System::Architecture::tRadioNetworkID */
typedef kcg_int tRadioNetworkID_MoRC_System_Architecture;

/* MoRC_System::Architecture::tTime */
typedef kcg_int tTime_MoRC_System_Architecture;

/* rbc_id_Type */
typedef kcg_int rbc_id_Type;

/* rbc_phoneNo_Type */
typedef kcg_int rbc_phoneNo_Type;

/* time_Type */
typedef kcg_int time_Type;

/* radioNetworkID_Type */
typedef kcg_int radioNetworkID_Type;

/* NID_PACKET_Type */
typedef kcg_int NID_PACKET_Type;

/* NID_C_Type */
typedef kcg_int NID_C_Type;

/* NID_RBC_Type */
typedef kcg_int NID_RBC_Type;

/* NID_RADIO_Type */
typedef kcg_int NID_RADIO_Type;

/* NID_MESSAGE_Type */
typedef kcg_int NID_MESSAGE_Type;

/* T_TRAIN_Type */
typedef kcg_int T_TRAIN_Type;

/* NID_LRBG_Type */
typedef kcg_int NID_LRBG_Type;

/* D_RBCTR_Type */
typedef kcg_int D_RBCTR_Type;

/* NID_ENGINE_Type */
typedef kcg_int NID_ENGINE_Type;

typedef struct {
  kcg_bool valid;
  rbc_id_Type rbc_id;
  rbc_phoneNo_Type telephoneNoOfTheRBC;
  morc_RBC_action_Type actionToBePerformed;
  kcg_bool appliesAlsoToSleepingUnits;
} struct__11198;

/* orderToContactAnRBC_Type */
typedef struct__11198 orderToContactAnRBC_Type;

typedef struct {
  kcg_bool valid;
  safeRadioConnectionStatus_Type status;
} struct__11206;

/* safeRadioConnectionStatusValid_Type */
typedef struct__11206 safeRadioConnectionStatusValid_Type;

typedef struct {
  kcg_bool valid;
  kcg_bool mobileHW_available;
  mobileSWConnectionStatus_Type connectionStatus;
  radioNetworkID_Type registeredRadioNetworkID;
  kcg_bool settingUpConnectionHasFailed;
} struct__11211;

/* mobileSWStatus_Type */
typedef struct__11211 mobileSWStatus_Type;

typedef struct {
  kcg_bool valid;
  mobileHWAction_Type action;
  radioNetworkID_Type radioNetworkID;
} struct__11219;

/* mobileHWCmd_Type */
typedef struct__11219 mobileHWCmd_Type;

typedef struct {
  kcg_bool valid;
  mobileSWAction_Type action;
  radioNetworkID_Type radioNetworkID;
} struct__11225;

/* mobileSWCmd_Type */
typedef struct__11225 mobileSWCmd_Type;

typedef struct {
  kcg_bool valid;
  mobileHWConnectionStatus_Type connectionStatus;
  kcg_bool settingUpConnectionHasFailed;
} struct__11231;

/* mobileHWStatus_Type */
typedef struct__11231 mobileHWStatus_Type;

typedef struct {
  kcg_bool valid;
  radioNetworkID_Type radioNetworkID;
} struct__11237;

/* validRadioNetworkID_Type */
typedef struct__11237 validRadioNetworkID_Type;

typedef struct {
  kcg_bool requestSetup;
  kcg_bool releaseSetup;
  tMobileHWAction_MoRC_System_Architecture mobileHWCmd;
  tRadioNetworkID_MoRC_System_Architecture actualRadioNetworkID;
  kcg_bool memorizeTheLastRadioNetworkID;
} struct__11242;

/* MoRC_System::Architecture::tSafeRadioCommCmd */
typedef struct__11242 tSafeRadioCommCmd_MoRC_System_Architecture;

typedef struct {
  tNID_Message_MoRC_System_Architecture messageToRBC;
} struct__11250;

/* MoRC_System::Architecture::tOrderToRBC */
typedef struct__11250 tOrderToRBC_MoRC_System_Architecture;

typedef struct {
  kcg_bool setupEstablished;
  tMobileHWConnectionStatus_MoRC_System_Architecture mobileHWConnectionStatus;
} struct__11254;

/* MoRC_System::Architecture::tSafeRadioCommStatus */
typedef struct__11254 tSafeRadioCommStatus_MoRC_System_Architecture;

typedef struct {
  tRadioNetworkID_MoRC_System_Architecture radioNetworkID_memorized;
  tRadioNetworkID_MoRC_System_Architecture radioNetworkID_fromDriver;
  tRadioNetworkID_MoRC_System_Architecture radioNetworkID_fromTrackside;
} struct__11259;

/* MoRC_System::Architecture::tRadioNetworkIDs_toRM */
typedef struct__11259 tRadioNetworkIDs_toRM_MoRC_System_Architecture;

typedef struct {
  tRMOrder_MoRC_System_Architecture orderFromOnboard;
  tNID_Message_MoRC_System_Architecture messageFromRBC;
  tNIC_RBC_ID_MoRC_System_Architecture NID_RBC_ID;
} struct__11265;

/* MoRC_System::Architecture::tOrderToRM */
typedef struct__11265 tOrderToRM_MoRC_System_Architecture;

typedef struct {
  kcg_bool radioComSessionEstablished;
  tMobileSWConnectionStatus_MoRC_System_Architecture mobileSWStatus;
} struct__11271;

/* MoRC_System::Architecture::tRM_Status */
typedef struct__11271 tRM_Status_MoRC_System_Architecture;

typedef struct {
  kcg_bool powerAvailable;
  tM_Mode_MoRC_System_Architecture M_Mode;
  tM_Level_MoRC_System_Architecture M_Level;
  kcg_bool systemVersionIsCompatible;
  tRadioHoleStatus_MoRC_System_Architecture radioHoleStatus;
  tTime_MoRC_System_Architecture actualTime;
} struct__11276;

/* MoRC_System::Architecture::tOB_Status */
typedef struct__11276 tOB_Status_MoRC_System_Architecture;

typedef struct { kcg_int firstNumber; kcg_int secondNumber; } struct__11285;

/* M_VERSION_Type */
typedef struct__11285 M_VERSION_Type;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE_Type NID_MESSAGE;
  T_TRAIN_Type T_TRAIN;
  NID_ENGINE_Type NID_ENGINE;
} struct__11290;

/* m155_initiationOfACommunicationSession_Type */
typedef struct__11290 m155_initiationOfACommunicationSession_Type;

/* m156_terminationOfACommunicationSession_Type */
typedef struct__11290 m156_terminationOfACommunicationSession_Type;

/* m154_NoCompatibleVersionSupported_Type */
typedef struct__11290 m154_NoCompatibleVersionSupported_Type;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE_Type NID_MESSAGE;
  T_TRAIN_Type T_TRAIN;
  NID_ENGINE_Type NID_ENGINE;
  NID_RADIO_Type NID_RADIO;
} struct__11297;

/* m159_SessionEstablished_Type */
typedef struct__11297 m159_SessionEstablished_Type;

typedef struct {
  kcg_bool valid;
  NID_PACKET_Type NID_PACKET;
  Q_DIR_Type Q_DIR;
  kcg_int L_PACKET;
  D_RBCTR_Type D_RBCTR;
  NID_C_Type NID_C;
  NID_RBC_Type NID_RBC;
  NID_RADIO_Type NID_RADIO;
  Q_SLEEPSESSION_Type Q_SLEEPSESSION;
} struct__11305;

/* p131_RBC_TransitionOrderType */
typedef struct__11305 p131_RBC_TransitionOrderType;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE_Type NID_MESSAGE;
  T_TRAIN_Type T_TRAIN;
  M_ACK_Type M_ACK;
  NID_LRBG_Type NID_LRBG;
} struct__11317;

/* m24_generalMessage_Type */
typedef struct__11317 m24_generalMessage_Type;

/* m38_initiationOfACommunicationSession_Type */
typedef struct__11317 m38_initiationOfACommunicationSession_Type;

/* m39_acknowledgementOfTerminationOfACommunicationSession_Type */
typedef struct__11317 m39_acknowledgementOfTerminationOfACommunicationSession_Type;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE_Type NID_MESSAGE;
  T_TRAIN_Type T_TRAIN;
  M_ACK_Type M_ACK;
  NID_LRBG_Type NID_LRBG;
  M_VERSION_Type M_VERSION;
} struct__11325;

/* m32_RBC_RIU_systemVersion_Type */
typedef struct__11325 m32_RBC_RIU_systemVersion_Type;

typedef struct {
  kcg_bool valid;
  NID_PACKET_Type NID_PACKET;
  Q_DIR_Type Q_DIR;
  kcg_int L_PACKET;
  Q_RBC_Type Q_RBC;
  NID_C_Type NID_C;
  NID_RBC_Type NID_RBC;
  NID_RADIO_Type NID_RADIO;
  Q_SLEEPSESSION_Type Q_SLEEPSESSION;
} struct__11334;

/* p42_SessionManagement_Type */
typedef struct__11334 p42_SessionManagement_Type;

typedef struct {
  m24_generalMessage_Type m24_generalMessage;
  m32_RBC_RIU_systemVersion_Type m32_RBC_RIU_systemVersion;
  m38_initiationOfACommunicationSession_Type m38_initiationOfACommunicationSession;
  m39_acknowledgementOfTerminationOfACommunicationSession_Type m39_acknowledgementOfTerminationOfACommunicationSession;
  p131_RBC_TransitionOrderType p131_RBC_TransitionOrder;
  p42_SessionManagement_Type p42_sessionManagement;
} struct__11346;

/* track_2_train_Type */
typedef struct__11346 track_2_train_Type;

typedef struct {
  m155_initiationOfACommunicationSession_Type m155_initiationOfACommunicationSession;
  m156_terminationOfACommunicationSession_Type m156_terminationOfACommunicationSession;
  m159_SessionEstablished_Type m159_SessionEstablished;
  m154_NoCompatibleVersionSupported_Type m154_NoCompatibleVersionSupported;
} struct__11355;

/* train_2_track_Type */
typedef struct__11355 train_2_track_Type;

typedef struct {
  kcg_bool valid;
  mobileHWConnectionStatus_Type connectionStatus;
} struct__11362;

/* RadioNetworkMobileHWStatusType */
typedef struct__11362 RadioNetworkMobileHWStatusType;

typedef struct {
  kcg_bool valid;
  rbc_id_Type radioInFillUnit_id;
  rbc_phoneNo_Type telephoneNoOfTheRadioInfillUnit;
  morc_RBC_action_Type actionToBePerformed;
} struct__11367;

/* orderToContactARadioInfillUnit_Type */
typedef struct__11367 orderToContactARadioInfillUnit_Type;

typedef struct {
  kcg_bool valid;
  rbc_id_Type rbc_id;
  rbc_phoneNo_Type telephoneNoOfTheRBC;
  kcg_bool appliesAlsoToSleepingUnits;
} struct__11374;

/* orderToContactAnAcceptingRBC_Type */
typedef struct__11374 orderToContactAnAcceptingRBC_Type;

typedef struct {
  kcg_bool valid;
  orderToContactAnAcceptingRBC_Type orderToContactAnAcceptingRBC;
} struct__11381;

/* rbc_TransitionOrder_Type */
typedef struct__11381 rbc_TransitionOrder_Type;

typedef struct { kcg_int k; kcg_real f; } struct__11386;

/* lut::LutIndex */
typedef struct__11386 LutIndex_lut;

#ifndef kcg_copy_struct__11198
#define kcg_copy_struct__11198(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11198)))
#endif /* kcg_copy_struct__11198 */

#ifndef kcg_copy_struct__11206
#define kcg_copy_struct__11206(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11206)))
#endif /* kcg_copy_struct__11206 */

#ifndef kcg_copy_struct__11211
#define kcg_copy_struct__11211(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11211)))
#endif /* kcg_copy_struct__11211 */

#ifndef kcg_copy_struct__11219
#define kcg_copy_struct__11219(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11219)))
#endif /* kcg_copy_struct__11219 */

#ifndef kcg_copy_struct__11225
#define kcg_copy_struct__11225(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11225)))
#endif /* kcg_copy_struct__11225 */

#ifndef kcg_copy_struct__11231
#define kcg_copy_struct__11231(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11231)))
#endif /* kcg_copy_struct__11231 */

#ifndef kcg_copy_struct__11237
#define kcg_copy_struct__11237(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11237)))
#endif /* kcg_copy_struct__11237 */

#ifndef kcg_copy_struct__11242
#define kcg_copy_struct__11242(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11242)))
#endif /* kcg_copy_struct__11242 */

#ifndef kcg_copy_struct__11250
#define kcg_copy_struct__11250(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11250)))
#endif /* kcg_copy_struct__11250 */

#ifndef kcg_copy_struct__11254
#define kcg_copy_struct__11254(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11254)))
#endif /* kcg_copy_struct__11254 */

#ifndef kcg_copy_struct__11259
#define kcg_copy_struct__11259(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11259)))
#endif /* kcg_copy_struct__11259 */

#ifndef kcg_copy_struct__11265
#define kcg_copy_struct__11265(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11265)))
#endif /* kcg_copy_struct__11265 */

#ifndef kcg_copy_struct__11271
#define kcg_copy_struct__11271(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11271)))
#endif /* kcg_copy_struct__11271 */

#ifndef kcg_copy_struct__11276
#define kcg_copy_struct__11276(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11276)))
#endif /* kcg_copy_struct__11276 */

#ifndef kcg_copy_struct__11285
#define kcg_copy_struct__11285(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11285)))
#endif /* kcg_copy_struct__11285 */

#ifndef kcg_copy_struct__11290
#define kcg_copy_struct__11290(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11290)))
#endif /* kcg_copy_struct__11290 */

#ifndef kcg_copy_struct__11297
#define kcg_copy_struct__11297(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11297)))
#endif /* kcg_copy_struct__11297 */

#ifndef kcg_copy_struct__11305
#define kcg_copy_struct__11305(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11305)))
#endif /* kcg_copy_struct__11305 */

#ifndef kcg_copy_struct__11317
#define kcg_copy_struct__11317(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11317)))
#endif /* kcg_copy_struct__11317 */

#ifndef kcg_copy_struct__11325
#define kcg_copy_struct__11325(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11325)))
#endif /* kcg_copy_struct__11325 */

#ifndef kcg_copy_struct__11334
#define kcg_copy_struct__11334(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11334)))
#endif /* kcg_copy_struct__11334 */

#ifndef kcg_copy_struct__11346
#define kcg_copy_struct__11346(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11346)))
#endif /* kcg_copy_struct__11346 */

#ifndef kcg_copy_struct__11355
#define kcg_copy_struct__11355(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11355)))
#endif /* kcg_copy_struct__11355 */

#ifndef kcg_copy_struct__11362
#define kcg_copy_struct__11362(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11362)))
#endif /* kcg_copy_struct__11362 */

#ifndef kcg_copy_struct__11367
#define kcg_copy_struct__11367(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11367)))
#endif /* kcg_copy_struct__11367 */

#ifndef kcg_copy_struct__11374
#define kcg_copy_struct__11374(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11374)))
#endif /* kcg_copy_struct__11374 */

#ifndef kcg_copy_struct__11381
#define kcg_copy_struct__11381(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11381)))
#endif /* kcg_copy_struct__11381 */

#ifndef kcg_copy_struct__11386
#define kcg_copy_struct__11386(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11386)))
#endif /* kcg_copy_struct__11386 */

#ifndef kcg_comp_struct__11198
extern kcg_bool kcg_comp_struct__11198(
  struct__11198 *kcg_c1,
  struct__11198 *kcg_c2);
#endif /* kcg_comp_struct__11198 */

#ifndef kcg_comp_struct__11206
extern kcg_bool kcg_comp_struct__11206(
  struct__11206 *kcg_c1,
  struct__11206 *kcg_c2);
#endif /* kcg_comp_struct__11206 */

#ifndef kcg_comp_struct__11211
extern kcg_bool kcg_comp_struct__11211(
  struct__11211 *kcg_c1,
  struct__11211 *kcg_c2);
#endif /* kcg_comp_struct__11211 */

#ifndef kcg_comp_struct__11219
extern kcg_bool kcg_comp_struct__11219(
  struct__11219 *kcg_c1,
  struct__11219 *kcg_c2);
#endif /* kcg_comp_struct__11219 */

#ifndef kcg_comp_struct__11225
extern kcg_bool kcg_comp_struct__11225(
  struct__11225 *kcg_c1,
  struct__11225 *kcg_c2);
#endif /* kcg_comp_struct__11225 */

#ifndef kcg_comp_struct__11231
extern kcg_bool kcg_comp_struct__11231(
  struct__11231 *kcg_c1,
  struct__11231 *kcg_c2);
#endif /* kcg_comp_struct__11231 */

#ifndef kcg_comp_struct__11237
extern kcg_bool kcg_comp_struct__11237(
  struct__11237 *kcg_c1,
  struct__11237 *kcg_c2);
#endif /* kcg_comp_struct__11237 */

#ifndef kcg_comp_struct__11242
extern kcg_bool kcg_comp_struct__11242(
  struct__11242 *kcg_c1,
  struct__11242 *kcg_c2);
#endif /* kcg_comp_struct__11242 */

#ifndef kcg_comp_struct__11250
extern kcg_bool kcg_comp_struct__11250(
  struct__11250 *kcg_c1,
  struct__11250 *kcg_c2);
#endif /* kcg_comp_struct__11250 */

#ifndef kcg_comp_struct__11254
extern kcg_bool kcg_comp_struct__11254(
  struct__11254 *kcg_c1,
  struct__11254 *kcg_c2);
#endif /* kcg_comp_struct__11254 */

#ifndef kcg_comp_struct__11259
extern kcg_bool kcg_comp_struct__11259(
  struct__11259 *kcg_c1,
  struct__11259 *kcg_c2);
#endif /* kcg_comp_struct__11259 */

#ifndef kcg_comp_struct__11265
extern kcg_bool kcg_comp_struct__11265(
  struct__11265 *kcg_c1,
  struct__11265 *kcg_c2);
#endif /* kcg_comp_struct__11265 */

#ifndef kcg_comp_struct__11271
extern kcg_bool kcg_comp_struct__11271(
  struct__11271 *kcg_c1,
  struct__11271 *kcg_c2);
#endif /* kcg_comp_struct__11271 */

#ifndef kcg_comp_struct__11276
extern kcg_bool kcg_comp_struct__11276(
  struct__11276 *kcg_c1,
  struct__11276 *kcg_c2);
#endif /* kcg_comp_struct__11276 */

#ifndef kcg_comp_struct__11285
extern kcg_bool kcg_comp_struct__11285(
  struct__11285 *kcg_c1,
  struct__11285 *kcg_c2);
#endif /* kcg_comp_struct__11285 */

#ifndef kcg_comp_struct__11290
extern kcg_bool kcg_comp_struct__11290(
  struct__11290 *kcg_c1,
  struct__11290 *kcg_c2);
#endif /* kcg_comp_struct__11290 */

#ifndef kcg_comp_struct__11297
extern kcg_bool kcg_comp_struct__11297(
  struct__11297 *kcg_c1,
  struct__11297 *kcg_c2);
#endif /* kcg_comp_struct__11297 */

#ifndef kcg_comp_struct__11305
extern kcg_bool kcg_comp_struct__11305(
  struct__11305 *kcg_c1,
  struct__11305 *kcg_c2);
#endif /* kcg_comp_struct__11305 */

#ifndef kcg_comp_struct__11317
extern kcg_bool kcg_comp_struct__11317(
  struct__11317 *kcg_c1,
  struct__11317 *kcg_c2);
#endif /* kcg_comp_struct__11317 */

#ifndef kcg_comp_struct__11325
extern kcg_bool kcg_comp_struct__11325(
  struct__11325 *kcg_c1,
  struct__11325 *kcg_c2);
#endif /* kcg_comp_struct__11325 */

#ifndef kcg_comp_struct__11334
extern kcg_bool kcg_comp_struct__11334(
  struct__11334 *kcg_c1,
  struct__11334 *kcg_c2);
#endif /* kcg_comp_struct__11334 */

#ifndef kcg_comp_struct__11346
extern kcg_bool kcg_comp_struct__11346(
  struct__11346 *kcg_c1,
  struct__11346 *kcg_c2);
#endif /* kcg_comp_struct__11346 */

#ifndef kcg_comp_struct__11355
extern kcg_bool kcg_comp_struct__11355(
  struct__11355 *kcg_c1,
  struct__11355 *kcg_c2);
#endif /* kcg_comp_struct__11355 */

#ifndef kcg_comp_struct__11362
extern kcg_bool kcg_comp_struct__11362(
  struct__11362 *kcg_c1,
  struct__11362 *kcg_c2);
#endif /* kcg_comp_struct__11362 */

#ifndef kcg_comp_struct__11367
extern kcg_bool kcg_comp_struct__11367(
  struct__11367 *kcg_c1,
  struct__11367 *kcg_c2);
#endif /* kcg_comp_struct__11367 */

#ifndef kcg_comp_struct__11374
extern kcg_bool kcg_comp_struct__11374(
  struct__11374 *kcg_c1,
  struct__11374 *kcg_c2);
#endif /* kcg_comp_struct__11374 */

#ifndef kcg_comp_struct__11381
extern kcg_bool kcg_comp_struct__11381(
  struct__11381 *kcg_c1,
  struct__11381 *kcg_c2);
#endif /* kcg_comp_struct__11381 */

#ifndef kcg_comp_struct__11386
extern kcg_bool kcg_comp_struct__11386(
  struct__11386 *kcg_c1,
  struct__11386 *kcg_c2);
#endif /* kcg_comp_struct__11386 */

#define kcg_comp_m154_NoCompatibleVersionSupported_Type kcg_comp_struct__11290

#define kcg_copy_m154_NoCompatibleVersionSupported_Type kcg_copy_struct__11290

#define kcg_comp_m159_SessionEstablished_Type kcg_comp_struct__11297

#define kcg_copy_m159_SessionEstablished_Type kcg_copy_struct__11297

#define kcg_comp_tOrderToRM_MoRC_System_Architecture kcg_comp_struct__11265

#define kcg_copy_tOrderToRM_MoRC_System_Architecture kcg_copy_struct__11265

#define kcg_comp_m156_terminationOfACommunicationSession_Type kcg_comp_struct__11290

#define kcg_copy_m156_terminationOfACommunicationSession_Type kcg_copy_struct__11290

#define kcg_comp_orderToContactARadioInfillUnit_Type kcg_comp_struct__11367

#define kcg_copy_orderToContactARadioInfillUnit_Type kcg_copy_struct__11367

#define kcg_comp_tRM_Status_MoRC_System_Architecture kcg_comp_struct__11271

#define kcg_copy_tRM_Status_MoRC_System_Architecture kcg_copy_struct__11271

#define kcg_comp_m155_initiationOfACommunicationSession_Type kcg_comp_struct__11290

#define kcg_copy_m155_initiationOfACommunicationSession_Type kcg_copy_struct__11290

#define kcg_comp_rbc_TransitionOrder_Type kcg_comp_struct__11381

#define kcg_copy_rbc_TransitionOrder_Type kcg_copy_struct__11381

#define kcg_comp_tOB_Status_MoRC_System_Architecture kcg_comp_struct__11276

#define kcg_copy_tOB_Status_MoRC_System_Architecture kcg_copy_struct__11276

#define kcg_comp_p131_RBC_TransitionOrderType kcg_comp_struct__11305

#define kcg_copy_p131_RBC_TransitionOrderType kcg_copy_struct__11305

#define kcg_comp_orderToContactAnAcceptingRBC_Type kcg_comp_struct__11374

#define kcg_copy_orderToContactAnAcceptingRBC_Type kcg_copy_struct__11374

#define kcg_comp_m39_acknowledgementOfTerminationOfACommunicationSession_Type kcg_comp_struct__11317

#define kcg_copy_m39_acknowledgementOfTerminationOfACommunicationSession_Type kcg_copy_struct__11317

#define kcg_comp_m38_initiationOfACommunicationSession_Type kcg_comp_struct__11317

#define kcg_copy_m38_initiationOfACommunicationSession_Type kcg_copy_struct__11317

#define kcg_comp_m32_RBC_RIU_systemVersion_Type kcg_comp_struct__11325

#define kcg_copy_m32_RBC_RIU_systemVersion_Type kcg_copy_struct__11325

#define kcg_comp_m24_generalMessage_Type kcg_comp_struct__11317

#define kcg_copy_m24_generalMessage_Type kcg_copy_struct__11317

#define kcg_comp_track_2_train_Type kcg_comp_struct__11346

#define kcg_copy_track_2_train_Type kcg_copy_struct__11346

#define kcg_comp_train_2_track_Type kcg_comp_struct__11355

#define kcg_copy_train_2_track_Type kcg_copy_struct__11355

#define kcg_comp_orderToContactAnRBC_Type kcg_comp_struct__11198

#define kcg_copy_orderToContactAnRBC_Type kcg_copy_struct__11198

#define kcg_comp_p42_SessionManagement_Type kcg_comp_struct__11334

#define kcg_copy_p42_SessionManagement_Type kcg_copy_struct__11334

#define kcg_comp_safeRadioConnectionStatusValid_Type kcg_comp_struct__11206

#define kcg_copy_safeRadioConnectionStatusValid_Type kcg_copy_struct__11206

#define kcg_comp_mobileSWStatus_Type kcg_comp_struct__11211

#define kcg_copy_mobileSWStatus_Type kcg_copy_struct__11211

#define kcg_comp_mobileHWStatus_Type kcg_comp_struct__11231

#define kcg_copy_mobileHWStatus_Type kcg_copy_struct__11231

#define kcg_comp_mobileSWCmd_Type kcg_comp_struct__11225

#define kcg_copy_mobileSWCmd_Type kcg_copy_struct__11225

#define kcg_comp_mobileHWCmd_Type kcg_comp_struct__11219

#define kcg_copy_mobileHWCmd_Type kcg_copy_struct__11219

#define kcg_comp_LutIndex_lut kcg_comp_struct__11386

#define kcg_copy_LutIndex_lut kcg_copy_struct__11386

#define kcg_comp_M_VERSION_Type kcg_comp_struct__11285

#define kcg_copy_M_VERSION_Type kcg_copy_struct__11285

#define kcg_comp_RadioNetworkMobileHWStatusType kcg_comp_struct__11362

#define kcg_copy_RadioNetworkMobileHWStatusType kcg_copy_struct__11362

#define kcg_comp_validRadioNetworkID_Type kcg_comp_struct__11237

#define kcg_copy_validRadioNetworkID_Type kcg_copy_struct__11237

#define kcg_comp_tSafeRadioCommCmd_MoRC_System_Architecture kcg_comp_struct__11242

#define kcg_copy_tSafeRadioCommCmd_MoRC_System_Architecture kcg_copy_struct__11242

#define kcg_comp_tOrderToRBC_MoRC_System_Architecture kcg_comp_struct__11250

#define kcg_copy_tOrderToRBC_MoRC_System_Architecture kcg_copy_struct__11250

#define kcg_comp_tSafeRadioCommStatus_MoRC_System_Architecture kcg_comp_struct__11254

#define kcg_copy_tSafeRadioCommStatus_MoRC_System_Architecture kcg_copy_struct__11254

#define kcg_comp_tRadioNetworkIDs_toRM_MoRC_System_Architecture kcg_comp_struct__11259

#define kcg_copy_tRadioNetworkIDs_toRM_MoRC_System_Architecture kcg_copy_struct__11259

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2013-09-12T13:41:00
*************************************************************$ */

