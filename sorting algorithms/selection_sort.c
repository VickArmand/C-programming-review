#include "sort.h"
/**
 * selection sort works by finding the minimum element in the array and swapping it to the left
*/
void selection_sort(int *array, size_t size)
{
    size_t i, j;
    int temp, min_index;
    for(i = 0; i < size; i++)
    {
        min_index = i;
        printf("Iteration %lu\n",i);
        for (j = i+1; j < size; j++)/* loop to find the minimum element of the array*/
        {
            if (array[i] > array[j])
            { 
                min_index = j;
            }
        }
        if (min_index != i)
        {
            temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;
            print_array(array, size);
        }
    }
}
