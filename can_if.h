/*
 * can_if.h
 *
 *  Created on: 12-Jun-2019
 *      Author: Admin
 */

#ifndef CAN_IF_H_
#define CAN_IF_H_

#include"standard_type.h"

typedef  boolean Std_ReturnType;



/* This Module define transmit and received activity */
enum CanIf_PduModeType
{
	CANIF_OFFLINE=0x00,
	CANIF_TX_OFFLINE=0x01,
	CANIF_TX_OFFLINE_ACTIVE=0x02,
	CANIF_ONLINE=0x03
};

/*Return value of CAN L-PDU notification status. */

enum CanIf_NotifStatusType
{
	CANIF_TX_RX_NOTIFICATION,
	CANIF_NO_NOTIFICATION=0x00
};

/* for inti can module */
//void CanIf_Init( const CanIf_ConfigType* ConfigPtr )

/* Deinitalizes the canif module */
// void CanIf_DeInit(void)

/* for changing can controoled mode */
// Std_ReturnType CanIf_SetControllerMode( uint8 ControllerId, Can_ControllerStateType ControllerMode )

/* CAN Driverservice forobtaining the current status of the CAN controller*/

//Std_ReturnType CanIf_GetControllerMode( uint8 ControllerId, Can_ControllerStateType* ControllerModePtr )

/* request to tranmission fo Pdu */
//Std_ReturnType CanIf_Transmit( PduIdType TxPduId, const PduInfoType* PduInfoPtr )

/* cancale transmission request */
//Std_ReturnType CanIf_CancelTransmit( PduIdType TxPduId )

/* received data of the requested CanIfRxSduId to the calling upper layer. */
// Std_ReturnType CanIf_ReadRxPduData( PduIdType CanIfRxSduId, PduInfoType* CanIfRxInfoPtr )

/*This service returns the confirmation statu */
//CanIf_NotifStatusType CanIf_ReadTxNotifStatus( PduIdType CanIfTxSduId )

/*  return the indication status */
// CanIf_NotifStatusType CanIf_ReadRxNotifStatus( PduIdType CanIfRxSduId )

/*This service sets the requested mode at the L-PDUs of a predefined logical PDU channel */
 //Std_ReturnType CanIf_SetPduMode( uint8_t ControllerId, CanIf_PduModeType PduModeRequest )

/* get version */
// void CanIf_GetVersionInfo( Std_VersionInfoType* VersionInfo )


//void CanIf_SetDynamicTxId( PduIdType CanIfTxSduId, Can_IdType CanId )

// Std_ReturnType CanIf_SetTrcvMode( uint8 TransceiverId, CanTrcv_TrcvModeType TransceiverMode )
// Std_ReturnType CanIf_GetTrcvMode( uint8 TransceiverId, CanTrcv_TrcvModeType* TransceiverModePtr )
//Std_ReturnType CanIf_GetTrcvWakeupReason( uint8 TransceiverId, CanTrcv_TrcvWakeupReasonType* TrcvWuReasonPtr )
// Std_ReturnType CanIf_SetTrcvWakeupMode( uint8 TransceiverId, CanTrcv_TrcvWakeupModeType TrcvWakeupMode )

//Std_ReturnType CanIf_CheckValidation( EcuM_WakeupSourceType WakeupSource )
//Std_ReturnType CanIf_SetBaudrate( uint8 ControllerId, uint16 BaudRateConfigID )
//Std_ReturnType CanIf_SetIcomConfiguration( uint8 ControllerId, IcomConfigIdType ConfigurationId )
// Std_ReturnType CanIf_TriggerTransmit( PduIdType TxPduId, PduInfoType* PduInfoPtr )
//void CanIf_TxConfirmation( PduIdType CanTxPduId )


















#endif /* CAN_IF_H_ */
