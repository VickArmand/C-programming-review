#include <stdio.h>
#include "sort.h"

void q_sort(int *array, size_t size)
{
    int i, temp;
    size_t pivot = 0, left = 0, right = size - 1;
    //pivot = (i + size) / 2;

    for (i = left; i <= right; i++)
    {
        if (pivot == right && pivot == left)
        {
            printf("Equality\n");
            pivot = left / 2;
        }
        if (pivot <= right && pivot >= left)/* pivot is on the right side */
        {
            printf("pivot is on the right side\n");
            if (array[i] < array[pivot])
            {
                temp = array[i];
                array[i] = array[pivot];
                array[pivot] = temp;
                pivot = i;
            }
        }
        if (pivot <= left && pivot >= right)/* pivot is on the left side */
        {
            printf("pivot is on the left side\n");
            if (array[i] < array[pivot])
            {
                temp = array[i];
                array[i] = array[pivot];
                array[pivot] = temp;
                pivot = i;
            }
        }
        left++;
        right--;
        printf("Pivot is %d\n", array[pivot]);
        printf("i is %d\n", i);
        printf("Pivot index is %lu\n", pivot);
        printf("Left index is %lu\n", left);
        printf("Right index is %lu\n", right);
        print_array(array, size);
    }
}
int main(void)
{
    //int array[] = {48,19,99,71,13,52,96,73,86,7};
    //int array[] = {1,2,3,4,5,6,7};
    int array[] = {24,9,29,14,19,27};
    size_t n = sizeof(array)/sizeof(array[0]);
    printf("_________INSERTION SORT____________\n");
    q_sort(array, n);
}