#include "malloc.h"
#include <unistd.h>

void *my_malloc(size_t orders)
{
    static size_t total_goods; // total goods available
    static size_t sold_out; // used goods
    static void *start = NULL;
    size_t needed = 0; // goods needed
    void *supply; // supplies to customer
    if(start == NULL)
    {
        start = sbrk(0);
    }
    if (sold_out + orders > total_goods)
    {
        while (sold_out + orders > total_goods + needed)
        {
            needed += 10000;
        }
        total_goods += needed;
        sbrk(needed);
        if(orders < 1)
        {
            return NULL;
        }
        supply = start;
        start += orders;
        sold_out += orders;
        return supply;
    }
}