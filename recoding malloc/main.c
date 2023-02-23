#include "malloc.h"
#include "stdio.h"
int main(void)
{
    int *intptr;
    float *floatptr;
    char* str;
    intptr = my_malloc(sizeof(int));
    if(intptr == NULL)
    {
        printf("couldn't allocate memory");
        return (1);
    }
    floatptr = my_malloc(sizeof(int));
    if(floatptr == NULL)
    {
        printf("couldn't allocate memory");
        return (1);
    }
    str = my_malloc(sizeof(int));
    if(str == NULL)
    {
        printf("couldn't allocate memory");
        return (1);
    }
    *intptr = 1024;
    *floatptr = 98.7;
    str[0] = 'H';
    str[1] = 'E';
    str[2] = 'L';
    str[3] = 'L';
    str[4] = 'O';
    str[5] = '\0';
    printf("*intptr is %d\n",*intptr);
    printf("*floatptr is %f\n",*floatptr);
    printf("str is %s\n",str);
    return 0;
}