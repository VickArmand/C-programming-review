#include <stdlib.h>
#include "sort.h"
/**
 * bubble sort works by comparing 2 adjacent elements starting from the left
*/
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int temp;
    for(i = 0; i < size; i++)
    {
        printf("Iteration %lu\n",i);
        for (j = 0; j < size - i - 1; j++)
        {
            printf("Sub-Iteration %lu\n",j);
            if (array[j] > array[j + 1])
            { 
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            print_array(array, size);
        }
        
    }
}