#include "sort.h"

void b_sort(int *array, size_t size)
{
    int i, j, temp;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
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
    printf("_________BUBBLE SORT____________\n");
    b_sort(array, n);
}