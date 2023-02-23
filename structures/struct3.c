#include <stdio.h>
struct Person
{
    /* data */
    char* name;
    int age;
    char* job;
};

int main(void)
{
    printf("%lu\n", sizeof(struct Person));
    return (0);
}