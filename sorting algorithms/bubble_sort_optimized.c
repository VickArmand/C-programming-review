#include <stdlib.h>
#include "sort.h"
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int swap = 1; /* swap flag is used to determine whether 2 elements of an array need to be swapped*/
    int temp;
    for(i = 0; i < size && swap; i++)
    {
        printf("Iteration %lu\n",i);
        for (j = 0; j < size - i - 1; j++)
        {
            swap = 0;
            printf("Sub-Iteration %lu\n",j);
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                swap = 1;
            }
            print_array(array, size);
        }
        
    }
}