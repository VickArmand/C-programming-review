#include <stdio.h>
void print_triangle(int size)
{
    int i,j;
    if(size > 0)
    {
        for (i = 0; i < size; i++)
        {
            for (j = 0; j <= i; j++)
            {
                printf("#");
            }  
            printf("\n");
        }
    }
    else
    {
        printf("\n");
    }
}
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}