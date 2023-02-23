#include <string.h>
#include <stdlib.h>

int main(void)
{
    while(1)
        memset(malloc(1024),'a',1024);// memset is used to fill memory with a constant byte. 
        // It fills the first 1024 bytes(1kb) of memory area pointed to by the address provided by malloc with a constant byte 'a'
    return (0);
}
// beware this program may really affect your memory so its best if you don't run it to avoid crashing 