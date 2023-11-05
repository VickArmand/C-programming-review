#include <stdio.h>
#include "sort.h"
/**
 * This function demonstrates selection sort by
 * obtaining minimum value of the array
 * and placing it at the right index on the left
 * @array: integer array
 * @size: length of array
*/
void selection_sort(int *array, size_t size)
{
    int i, j, min, temp;
    for (i = 0; i < size; i++)
    {
        min = array[i];/* initializing the minimum element */
        for (j = i + 1; j < size; j++)/* loop to find the minimum element of the array*/
        {
            if (array[j] < min)
            {
                min = array[j];
                /* after finding the minimum element we swap the elements */
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
                print_array(array, size);
            }
        }
    }
}