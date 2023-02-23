#include "malloc.h"
#include <unistd.h>
// calling sbrk with a value of zero returns the current location of program break

void *my_malloc(size_t size)
{
    void *start = sbrk(0);
    if(size < 1)
    {
        return NULL;
    }
    else
    {
        sbrk(size);
        return (start);
    }
}