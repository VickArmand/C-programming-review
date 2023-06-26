#include <stdio.h>

const int MAX = 3;

int main () {

   int  var[] = {10, 100, 200};
   int  i, *ptr;

   /* let us have address of the first element in pointer */
   ptr = var;
   i = 0;
	
   while ( ptr <= &var[MAX - 1] ) {
    /**
     * increments the variable pointer so long as 
     * the address to which it points is either less than 
     * or equal to the address of the last element of the array, 
     * which is &var[MAX - 1] 
    */

      printf("Address of var[%d] = %p\n", i, ptr );
      printf("Value of var[%d] = %d\n", i, *ptr );

      /* point to the next location */
      ptr++;
      i++;
   }
	
   return 0;
}