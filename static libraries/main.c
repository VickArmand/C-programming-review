#include "main.h"
int main()
{
    habari();
    hi();
    wagwan();
    hello();
    return 0;
}
//gcc -c .\habari.c .\hello.c .\hi.c  .\wagwan.c - creating object files
// ar rc libhello.a *.o - Archiving the object files(all .o files) to the libhello to create a static library
// ranlib libhello.a
// libhello.a contains code for the 4 functions
//  gcc main.c -L. libhello.a - Compiles main.c with a static library
// -L tells the compiler to look for a static library 