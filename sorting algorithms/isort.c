#include <stdio.h>
#include "sort.h"

void i_sort(int *array, size_t size)
{
    int i, j, temp, k;
    int keyindex;

    for (i = 0; i < size; i++)
    {
        keyindex = i + 1;
        for (j = 0; j < size; j++)
        {
            if (array[j] > array[keyindex])
            {
                temp = array[j];
                array[j] = array[keyindex];
                array[keyindex] = temp;
                print_array(array, size);
            }
        }
    }
}
int main(void)
{
    int array[] = {48,19,99,71,13,52,96,73,86,7};
    //int array[] = {1,2,3,4,5,6,7};
    size_t n = sizeof(array)/sizeof(array[0]);
    printf("_________INSERTION SORT____________\n");
    i_sort(array, n);
}