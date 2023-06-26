#include <stdio.h>
/**
 * You can also use an array of pointers to 
 * character to store a list of strings as follows 
*/
const int MAX = 4;
 
int main () {

   char *names[] = {
      "Zara Ali",
      "Hina Ali",
      "Nuha Ali",
      "Sara Ali"
   };
   /**
    * names is an array of pointers 
    * since each element is of type char *
    * 
   */
   int i = 0;

   for ( i = 0; i < MAX; i++) {
      printf("Value of names[%d] = %s\n", i, names[i] );
   }
   
   return 0;
}