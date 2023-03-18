#include "sort.h"
void print_array(int *array, size_t size)
{
    size_t i = 0;
    for (; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}