#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    printf("%u\n", getpid());
    printf("%u\n", getppid());
    return 0;
}