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
 * @file stats.h 
 * @brief function prototypes for week 1 assignment
 *
 * <Add Extended Description Here>
 *
 * @author Collin H.
 * @date 2/19/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief print_statistics
 *
 * a function that prints the statistics of an array including
 * max, min , mean , and median
 *
 * 
 * @param stats an array of integers
 * @param len is an integer that holds the number of ints in stats
 *
 * @return no return
 */
 void print_statistics( int *stats, int len);
 
/**
 * @brief find_median
 *
 * a function that returns the median value in
 * an array of integers
 *
 * @param 
 * @param stats an array of integers
 * @param len is an integer that holds the number of ints in stats
 *
 * @return no return
 */
 int find_median(int *stats, int len);
 
/**
 * @brief print_array
 *
 * prints the contents of an array of integers to the console
 * delimited by a comma
 *
 * 
 * @param stats an array of integers
 * @param len is an integer that holds the number of ints in stats
 *
 * @return no return
 */
 void print_array(int *stats, int len);
 
 /**
 * @brief find_mean
 *
 * a function that returns the mean or the floor of the 
 * mean as an integer , given an array of integers
 *
 * 
 * @param stats an array of integers
 * @param len is an integer that holds the number of ints in stats
 *
 * @return the mean rounded down to an integer
 */
 
 int find_mean(int *stats, int len);
 
 
 /**
 * @brief find_maximum
 *
 * a function that returns the largest value
 * in an array of integers
 *
 * @param 
 * @param stats an array of integers
 * @param len is an integer that holds the number of ints in stats
 *
 * @return the largest int in stats
 */
 
 int find_maximum(int *stats, int len);
 
 
 
  /**
 * @brief find_minimum
 *
 * a function that returns the smallest value
 * in an array of integers
 *
 * @param 
 * @param stats an array of integers
 * @param len is an integer that holds the number of ints in stats
 *
 * @return the smallest int in stats
 */
 
 int find_minimum(int *stats, int len);
 
  /**
 * @brief sort_array
 *
 * a function that sorts stats 
 * from largest to smallest in-place
 * uses selection sort
 * 
 * @param 
 * @param stats an array of integers
 * @param len is an integer that holds the number of ints in stats
 *
 * @return void
 */
 void sort_array(int *stats, int len);
 
 
/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition(int arr[], int low, int high);
 
  // A utility function to swap two elements
void swap(int* a, int* b);

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high);

// helper function for reversing an array of ints
void reverse(int *arr, int len);
 
 
 


#endif /* __STATS_H__ */
