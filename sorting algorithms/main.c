#include "sort.h"
#include <stdio.h>
int main(void)
{
    int array[] = {48,19,99,71,13,52,96,73,86,7};
    //int array[] = {1,2,3,4,5,6,7};
    size_t n = sizeof(array)/sizeof(array[0]);
    printf("_________BUBBLE SORT____________\n");
    bubble_sort(array, n);
    int arrayx[] = {48,19,99,71,13,52,96,73,86,7};
    printf("_________SELECTION SORT____________\n");
    selection_sort(arrayx, n);
    int arrayy[] = {48,19,99,71,13,52,96,73,86,7};
    printf("_________INSERTION SORT____________\n");
    selection_sort(arrayy, n);
}