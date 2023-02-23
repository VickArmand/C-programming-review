
#include<stdio.h>
int main()
{
    int x = 3;  //...0011
    int y = 7;  //...0111
 
    // A typical use of '&&'
    if (y > 1 && y > x)
      printf("y is greater than 1 AND x\n");
 
    // A typical use of '&'
    int z = x & y;   // 0011
    
    printf("z = %d", z);
 
    return 0;
}