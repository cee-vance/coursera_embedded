#include "data.h"

// function definitions



uint32_t my_atoi( uint8_t* ptr, uint8_t digits, uint32_t base){

	// check if it's negative
		
	int isNeg = *ptr == '-';
	
	int res = 0;
	// iterate through p
	for(int i = 0; i < digits;i++){
		// convert to number system
		int dig = *(ptr+i);
		// 0-9
		if(dig <= 57){
			dig -= '0';
		} // A-F
		else{
			dig -= 55;
		}
		
		res = res * base + dig; 
	
	}
	if ( isNeg)
		res *= -1;
		
	return res;
		
}

uint8_t my_itoa( uint32_t data, uint8_t *ptr, uint32_t base){
	// auxiliary memory zeroes out for building result
	static char buf[32] = {0};
	// looping variable
	int i = 30;
	// check if there is a negative sign in front
	int isNeg = 0>data;
	
	// keep building the output while are not 0
	for(; data && i; --i, data /= base){
		// index the modulus into this base 16 
		buf[i] = "0123456789ABCDEF"[ data % base];
	}
	// add the minus sign
	if( isNeg)
		buf[i] = '-';
	else
		i++;
		
	// put 30 - i characters back into ptr
	uint8_t j = 0;
	for(; i <=30;i++)
		ptr[j++] = buf[i];
	
	// null terminator
	ptr[j] = '\0';
	
	// return j
	return j;
	
	
	
}
