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
    struct Person *ptr;
    ptr = &person1;
    ptr->name = "John Doe";
    ptr->age = 39;
    ptr->job = "Network Administrator";
    printf("------------:Person Details:-----------\n");
    printf("Person Name: %s\n",ptr->name);
    printf("Person Age: %d\n",ptr->age);
    printf("Person Occupation: %s\n",ptr->job);
    printf("-------------:FIN:--------------------\n");
    printf("------------:Person Details:-----------\n");
    printf("Person Name: %s\n",(*ptr).name);
    printf("Person Age: %d\n",(*ptr).age);
    printf("Person Occupation: %s\n",(*ptr).job);
    printf("-------------:FIN:--------------------\n");
    return (0);
}