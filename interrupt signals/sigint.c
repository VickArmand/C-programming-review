#include <stdio.h>
#include <signal.h>

int main()
{
    printf("%d\n",SIGINT);
    printf("%d\n",SIGTERM);
    return(0);
}