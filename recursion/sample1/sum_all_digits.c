#include "main.h"
#include <stdio.h>
/**
 * sum_all_digits - sums all digit in a number
 * @n: unsigned int
*/

unsigned int sum_all_digits(unsigned int num)
{
    if(num / 10 == 0)
        return (num % 10);
    return (num % 10 + sum_all_digits(num / 10));
} 

int main (void)
{
    printf("%d\n",sum_all_digits(237));
    printf("%d\n",sum_all_digits(230));
    printf("%d\n",sum_all_digits(100));
    printf("%d\n",sum_all_digits(5));
    printf("%d\n",sum_all_digits(10));
    printf("%d\n",sum_all_digits(53));
}