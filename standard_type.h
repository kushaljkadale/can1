/*
 * standard_type.h
 *
 *  Created on: 12-Jun-2019
 *      Author: Admin
 */

#ifndef STANDARD_TYPE_H_
#define STANDARD_TYPE_H_

#define E_OK 		 0
#define E_NOT_OK 	 1
#define STD_HIGH     0x00 /*physical state 0v */
#define STD_LOW      0x01 /* physical layer 5v -3v */
#define STD_ACTIVE   0x00 /* logical state active */
#define STD_IDLE     0x01 /* Logical state idle */

/* request the version for BSW module using GetVersioninfo() */
typedef struct STD_VersionInfoType
{

	uint16_t vendorID;
	uint16_t modileID;
	uint8_t sw_major_version;
	uint8_t sw_minor_version;
	uint8_t sw_patch_version;

}STD_VersionInfoType_var;

enum STD_ON_OFF
{
	STD_ON=0x00,
	STD_OFF=0x01
};

#endif /* STANDARD_TYPE_H_ */
