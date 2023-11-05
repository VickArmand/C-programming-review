#include <stdio.h>
int mid(int arr[], int target, int low, int high);
int main(void)
{
    int arr[] = {1,2,3,4};
    int target = 4;
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", mid(arr, target, 0, len - 1));
    return (0);
}
/**
 * mid - finds the index of the target in an array using binary search
 * @arr: sorted array
 * @target: element to search for
 * @low: lowest index
 * @high: highest index (length of array - 1)
*/
int mid(int arr[], int target, int low, int high)
{
    int mid;

    while(low <= high)
    {
        mid = (low + high) / 2;
        printf("%d\n", mid);
        if (target < arr[mid])
            high = mid - 1;
        else if (target > arr[mid])
            low = mid + 1;
        else
            break;
    }
    return mid;
}