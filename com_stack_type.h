/*
 * com_stack_type.h
 *
 *  Created on: 12-Jun-2019
 *      Author: Admin
 */

#ifndef COM_STACK_TYPE_H_
#define COM_STACK_TYPE_H_


typedef unsigned int  PduIdType;
typedef unsigned int  PduLengthType;
typedef uint8_t NetworkHandlerType; /* store the id of com channel */

uint8_t IcomConfigIdType ;

struct PduInfoType
{
	uint8_t *SduDataPtr;
	uint8_t *MetaData;

}PduIDType_var;

/* protocol parameter to check value change or not */

typedef enum TPParameterType
{
	TP_STMIN=0x00,
	TP_BS=0x01,
	TP_BC=0x02
}TP_Para_type;

/* for store the buffer request */

enum BufReq_ReturnType
{
	BUFREQ_OK=0x00,
	BUFREQ_E_NOT_OK=0x01,
	BUFREQ_E_BUSY=0x02,
	BUFREQ_E_OVFL=0x03,
};

/* to store the state of TP buffer*/

typedef enum TpDataStateType
{
	TP_DATACONF=0x00 ,
	TP_DATARETRY=0x01 ,
	TP_CONFPENDING=0x02
}TP_Data_st_ty;

/* to store the info about TP buffer handling */

struct RetryInfoType
{

	TP_Data_st_ty TPDataState;
	PduLengthType TxTpDataCnt;

};

/*The activating and deactivating of Pretended Networking */

enum IcomSwitch_ErrorType
{
	ICOM_SWITCH_E_OK=0x00,
	ICOM_SWITCH_E_FAILED=0x01

};








#endif /* COM_STACK_TYPE_H_ */
