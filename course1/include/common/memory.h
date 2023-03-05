/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file memory.h
 * @brief Abstraction of memory read and write operations
 *
 * This header file provides an abstraction of reading and
 * writing to memory via function calls. 
 *
 * @author Alex Fosdick
 * @date April 1 2017
 *
 */
#ifndef __MEMORY_H__
#define __MEMORY_H__

// some includes for working with memory
#include <stdlib.h>
#include <stdint.h>


/**
 * @brief Sets a value of a data array 
 *
 * Given a pointer to a char data set, this will set a provided
 * index into that data set to the value provided.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 * @param value value to write the the locaiton
 *
 * @return void.
 */
void set_value(char * ptr, unsigned int index, char value);

/**
 * @brief Clear a value of a data array 
 *
 * Given a pointer to a char data set, this will clear a provided
 * index into that data set to the value zero.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 *
 * @return void.
 */
void clear_value(char * ptr, unsigned int index);

/**
 * @brief Returns a value of a data array 
 *
 * Given a pointer to a char data set, this will read the provided
 * index into that data set and return the value.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 *
 * @return Value to be read.
 */
char get_value(char * ptr, unsigned int index);

/**
 * @brief Sets data array elements to a value
 *
 * Given a pointer to a char data set, this will set a number of elements
 * from a provided data array to the given value. The length is determined
 * by the provided size parameter.
 *
 * @param ptr Pointer to data array
 * @param value value to write the the locaiton
 * @param size Number of elements to set to value
 *
 * @return void.
 */
void set_all(char * ptr, char value, unsigned int size);

/**
 * @brief Clears elements in a data array
 *
 * Given a pointer to a char data set, this will set a clear a number
 * of elements given the size provided. Clear means to set to zero. 
 *
 * @param ptr Pointer to data array
 * @param size Number of elements to set to zero
 *
 * @return void.
 */
void clear_all(char * ptr, unsigned int size);


/*
 * @brief moves values pointed to by src to dst
 * 
 * @param src byte array holding the values to copy to
 * @param dst byte array pointing to the location to move src to 
 * @param length size_t indicates the number of bytes to move from src to dst
 *
 * @return pointer to dst
*/
uint8_t* my_memmove(uint8_t * src, uint8_t* dst, size_t length);

/*
 * @brief copys values pointed to by src to dst ,
 * 
 * @param src byte array holding the values to copy from
 * @param dst byte array pointing to the location to move src to 
 * @param length size_t indicates the number of bytes to move from src to dst

 * @return a pointer to dst 
 */
uint8_t* my_memcopy(uint8_t *src, uint8_t* dst, size_t length);


/*
 * @brief sets a  number of bytes pointed to by src to value
 * 
 * @param src byte pointer indicating where to start setting the values
 * @param length the number of bytes to set
 * @param value the value to set

 * @return a pointer to src
 */
uint8_t* my_memset(uint8_t *src,  size_t length, uint8_t value);


/*
 * @brief sets a specific number of bytes to zero
 * 
 * @param src the byte pointer to begin at
 * @param length the number of bytes to set to zero
 * 
 * @return pointer to src
*/
uint8_t* my_memzero(uint8_t* src, size_t length);


/*
 * @brief reverse the value pointed to by src
 *
 * @param src byte pointer to reverse
 * @param length the number of bytes to reverse in src
 * 
 * @return pointer to src
 *
 */
 uint8_t* my_reverse(uint8_t* src, size_t length);
 
 /*
  * @brief dynamically allocates a given number of bytes on the heap 
  *
  * @param length the number of bytes to allocate
  *
  * @return if successful returns a pointer to the memory location or NULL on error
 */
 uint32_t* reserve_words(size_t length);
 
 /*
  * @brief frees a dynamically allocated piece of memory
  *
  * @param src the 32-bit pointer of the memory location to free
  *
  */
  void free_words(uint32_t* src);
 
 
 
#endif /* __MEMORY_H__ */
