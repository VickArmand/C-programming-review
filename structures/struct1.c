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
    struct Person person1;
    person1.name = "John Doe";
    person1.age = 39;
    person1.job = "Network Administrator";
    printf("------------:Person Details:-----------\n");
    printf("Person Name: %s\n",person1.name);
    printf("Person Age: %d\n",person1.age);
    printf("Person Occupation: %s\n",person1.job);
    printf("-------------:FIN:--------------------\n");
    return (0);
}