#include "add.h"
int main(void)
{
    int x = 10;
    int y = 20;
    printf("%d",add(x,y)); 
    printf("%d",minus(x,y));
    return(0);
}
// on compilation use gcc add.c main.c 