#include <stdio.h>
#include "sort.h"

void quick_sort(int *array, size_t size)
{
    int i, j, temp, k;
    size_t pivot = 0, left = 0, right = size - 1;
    //pivot = (i + size) / 2;

    for (i = left; i <= right; i++)
    {
        for (j = left; j < right; j++)
        {
            printf("Pivot is %d\n", array[pivot]);
            printf("Pivot index is %lu\n", pivot);
            printf("Left index is %lu\n", left);
            printf("Right index is %lu\n", right);
            print_array(array, size);
            if (array[j] < array[pivot] && pivot < right)
            {
                temp = array[j];
                array[j] = array[pivot];
                array[pivot] = temp;
                pivot = j;
            }
            else if (array[j] < array[pivot] && left < right)
            {
                temp = array[j];
                array[j] = array[pivot];
                array[pivot] = temp;
                pivot = j;
            }
            else if (left == pivot && right == pivot)
            {
                pivot = left / 2;
            }
            left++;
            right--;
        }
    }
}
int main(void)
{
    //int array[] = {48,19,99,71,13,52,96,73,86,7};
    //int array[] = {1,2,3,4,5,6,7};
    int array[] = {24,9,29,14,19,27};
    size_t n = sizeof(array)/sizeof(array[0]);
    printf("_________INSERTION SORT____________\n");
    quick_sort(array, n);
}