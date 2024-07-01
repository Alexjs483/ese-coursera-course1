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
 * @file    stats.h
 * @brief   Simple application that performs statistical analytics on a dataset.
 *
 * @author  Alessia Celli
 * @date    18 June 2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */
#include <math.h>


/**
 * @brief Print the statistics of an array.
 *
 * A function that prints the statistics of an array, including:
 * minimum, maximum, mean, and median.
 *
 * @param array pointer to input data array
 * @param size  size of the input array
 *
 * @return void.
 */
void print_statistics(unsigned char* array, unsigned int size);


/**
 * @brief Print the array elements on the screen.
 *
 * Given an array of data and a length, prints the array elements to the screen.
 *
 * @param array pointer to input data array
 * @param size  size of the input array
 *
 * @return void.
 */
void print_array(unsigned char* array, unsigned int size);


/**
 * @brief Compute the median of the array.
 *
 * Given an array of data and a length, returns the median value.
 *
 * @param array pointer to input data array
 * @param size  size of the input array
 *
 * @return  the median value.
 */
unsigned char find_median(unsigned char* array, unsigned int size);


/**
 * @brief Compute the mean of the array.
 *
 * Given an array of data and a length, returns the mean value.
 *
 * @param array pointer to input data array
 * @param size  size of the input array
 *
 * @return  the mean value.
 */
unsigned char find_mean(unsigned char* array, unsigned int size);


/**
 * @brief Compute the maximum of the array.
 *
 * Given an array of data and a length, returns the maximum value.
 *
 * @param array pointer to input data array
 * @param size  size of the input array
 *
 * @return  the maximum value.
 */
unsigned char find_maximum(unsigned char* array, unsigned int size);


/**
 * @brief Compute the minimum of the array.
 *
 * Given an array of data and a length, returns the minimum value.
 *
 * @param array pointer to input data array
 * @param size  size of the input array
 *
 * @return  the minimum value.
 */
unsigned char find_minimum(unsigned char* array, unsigned int size);

/**
 * @brief Sort the array from largest to smallest.
 *
 * Given an array of data and a length, sorts the array from largest to smallest.
 * (The zeroth element should be the largest value, and the last element (n-1) should be the smallest value.)
 *
 * @param array pointer to input data array
 * @param size  size of the input array
 *
 * @return  void.
 */
void sort_array(unsigned char* array, unsigned int size);


#endif /* __STATS_H__ */
