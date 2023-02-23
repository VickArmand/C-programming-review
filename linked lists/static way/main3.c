#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    node *head;
    node one;
    node two;
    one.data = 4;
    two.data = 5;
    head = &one;
    one.next= &two;
    two.next= NULL;
    printf("Value is %d\n",head->data);
    printf("Value is %d\n",head->next->data);
    return 0;
}