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
 * @file    stats.c
 * @brief   Simple application that performs statistical analytics on a dataset.
 *
 * @author  Alessia Celli
 * @date    18 June 2024
 *
 */


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  printf("Print Array:\n");
  print_array(test, SIZE);

  printf("Print Array after sorting:\n");
  sort_array(test, SIZE);
  print_array(test, SIZE);

  printf("Print Statistics:\n");
  print_statistics(test, SIZE);

}

/* Add other Implementation File Code Here */


void print_statistics(unsigned char* array, unsigned int size)
{
    unsigned char max = find_maximum(array, size);
    printf("Maximum\t=\t%u\n", max);

    unsigned char min = find_minimum(array, size);
    printf("Minimum\t=\t%u\n", min);

    unsigned int mean = find_mean(array, size);
    printf("Mean\t=\t%u\n", mean);

    unsigned char median = find_median(array, size);
    printf("Median\t=\t%u\n", median);
}


void print_array(unsigned char* array, unsigned int size)
{
    printf("Array elements: ");
    for (unsigned int i = 0; i < size; i++)
    {
        printf("%u\t", array[i]);
    }
    printf("\n");
}


unsigned char find_median(unsigned char* array, unsigned int size)
{
    unsigned int median = 0;

    sort_array(array, size);

    if (size % 2 != 0) {
        median = array[size/2];

    }
    else
    {
        median = (array[size/2-1] + array[size/2+1])/2;
    }
    return median;
}


unsigned char find_mean(unsigned char* array, unsigned int size)
{
    unsigned char mean = 0;
    unsigned int sum = 0;

    for (unsigned int i = 0; i < size; i++)
    {
        sum += array[i];
    }

    if (size != 0)
    {
        mean = round(sum/size);
    }

    return mean;
}


unsigned char find_maximum(unsigned char* array, unsigned int size)
{
    unsigned char value = 0;

    for (unsigned int i = 0; i < size; i++)
    {
        if (array[i] > value)
        {
            value = array[i];
        }
    }

    return value;
}


unsigned char find_minimum(unsigned char* array, unsigned int size)
{
    unsigned char value = 255;

    for (unsigned int i = 0; i < size; i++)
    {
        if (array[i] < value)
        {
            value = array[i];
        }
    }

    return value;
}


void sort_array(unsigned char* array, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
    {
        for (unsigned int j = i+1; j < size; j++)
        {
            if (array[j] > array[i]) {
                unsigned char tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}

