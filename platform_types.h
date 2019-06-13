/*
 * platform_types.h
 *
 *  Created on: 12-Jun-2019
 *      Author: Admin
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

		/* Macro for bit order */

#define CUP_BIT_ORDER  LSB_FIRST
#define CUP_BYTE_ORDER LOW_BYTE_FIRST

		/* Typedef all data types */
typedef signed char        int_8;
typedef unsigned char 	   boolean;
typedef signed char 	   char_t;
typedef unsigned int 	   uint8_t;
typedef unsigned short 	   uint16_t;
typedef unsigned int 	   uint32_t;
typedef unsigned long long ubit64_t;
typedef signed int 		   int8_t;
typedef signed int 		   int16_t;
typedef signed long int    int32_t;
typedef float 			   float32_t;
typedef double 			   float64_t;

			/* At Least */
typedef signed char         int8_least;
typedef unsigned char       uint8_least;
typedef signed short        int16_least;
typedef unsigned short      int16_least;
typedef signed  long        int32_least;
typedef unsigned long       int32_least;

#endif /* PLATFORM_TYPES_H_ */
