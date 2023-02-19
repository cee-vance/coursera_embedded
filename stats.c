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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  int test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  sort_array((int*) test, SIZE);
  // print_array((int*)test,SIZE);
  print_statistics(test, SIZE);
  print_array(test,SIZE);

}

/* Add other Implementation File Code Here */

// prints min,max ,median, mean of stats to the console with label
void print_statistics(int *stats, int len){
	// assumes stats is sorted by descending
	int min = find_minimum(stats, len);
	int max = find_maximum(stats,len);
	int med = find_median(stats, len);
	int mean = find_mean(stats, len);
	
	printf("max:%d\n",max);
	printf("min:%d\n", min);
	printf("mean:%d\n", mean);
	printf("median:%d\n", med);
	
	
}

// prints the contents of stats to the console , delimited by comma
void print_array(int *stats, int len){
	for(int i = 0; i < len;i++){
		printf("[%d]:%d \n", i+1,stats[i]);
	}
	
	
}

// find median of stats
int find_median( int * stats, int len){
		return stats[len/2];
}

// find mean of stats
int find_mean(int *stats, int len){
	
	/*
		steps:
			1) perform sum of stats
			2) divide stats by len
	*/
	
	int sum = 0;
	for( int i =0 ; i < len;i++){
		sum+= stats[i];
	}
	
	return (int) sum / len;
}


// find max of stats
int find_maximum( int * stats, int len){
	return stats[0];
}

// find min of stats
int find_minimum(int * stats, int len){
	return stats[len-1];

}

// sorts stats in-place
void sort_array( int *stats, int len){
	
	// quicksort
	
	
	quickSort(stats,0,len-1);
	
	// now reverse for descending order
	
	reverse(stats,len);
}
// a utility function for reversing an array
void reverse( int *arr, int len){
	
	int offset = len-1;
	for(int i = 0; i < len/2;i++){
		
		int temp = arr[i];
		arr[i] = arr[offset];
		arr[offset] = temp; 
		offset--;
	}
}


 // A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i
        = (low
           - 1); // Index of smaller element and indicates
                 // the right position of pivot found so far
 
    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}



























