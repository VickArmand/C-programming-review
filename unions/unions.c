#include <stdio.h>
/**
 * unions is a user defined data type
 * it has a similar format as for structure
 * the difference between structure and union is the memory allocation hence fewer bytes used(unions were used long ago when memory was expensive)
 * in structure the size of all members is considered hence much memory is used
 * while in unions all members are stored in one memory block(size of union is the maximum of the member sizes)
 * hence due to this unions store one value at a time which gets erased on updation(the last inserted value will be the only existing value in the union) while structures store all values in their respective locations
 * Therefore a union can be used when we want to process only one member at a time
 * while a structure xan be used when we require much memory to handle all members
*/
union demo 
{
    int a;
    char b;
    float c;
};
struct abc 
{
    int a;
    char b;
    float c;
};
int main()
{
    union demo var1;
    struct abc var2 ={12, 'b', 12.6};
    printf("size of the union is %d bytes\n", sizeof(var1));// size of 12
    printf("size of the union is %d bytes\n", sizeof(var2)); // size of 4
    var1.a = 12;
    var1.b = 'b';
    var1.c = 12.6;
    printf("\n______UNION VALUES_________\n");
    printf("current existing value in the union is %f\n", var1.c);
    printf("value of a in the union is %d\n", var1.a); // the reason for the garbage values is because the union is currently having the the value c only 
    printf("value of b in the union is %c\n", var1.b);
    printf("value of c in the union is %f\n", var1.c);
    printf("\n______UNION END_________\n");
    printf("\n______STRUCTURES VALUES_________\n");
    printf("value of a in the union is %d\n", var2.a);
    printf("value of b in the union is %c\n", var2.b);
    printf("value of c in the union is %f\n", var2.c);
    printf("\n______STRUCTURES END_________\n");
    return 0;
}