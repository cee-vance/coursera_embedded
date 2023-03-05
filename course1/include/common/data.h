/*
* author:  Collin Hunt
* header file for some basic 
* string to integer conversions
*/

#ifndef __DATA_H__
#define __DATA_H__

#include <stdint.h>
#include <stdlib.h>
/*
* @brief convert an 32-bit signed integer to string equivalent 
* 
* @param data the integer to convert
* @param ptr the address where the result is to be stored
* @param base the number system to use in conversion
*
* @returns the number of characters in ptr as byte
*/
uint8_t my_itoa(uint32_t data, uint8_t* ptr, uint32_t base);



/*
* @brief converts a c-string to integer 
* 
* @param ptr the address of the string
* @param digits the number of characters in ptr
* @param base the number system to use in conversion
*
* @returns the number of characters in ptr as byte
*/
uint32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);


#endif /* __DATA_H__ */
