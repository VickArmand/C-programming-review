#include "sort.h"
void insertionSort(int *array, size_t n)
{
    size_t i,j;
    int key;
    for (i = 1; i < n; i++)
    {
        key = array[i];
        j = i - 1;
 
        // Move elements of array[0..i-1], 
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}