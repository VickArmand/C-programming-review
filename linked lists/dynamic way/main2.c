#include <stdio.h>
#include <stdlib.h>
#include "main2.h"

int main(void)
{
    node *head = malloc(sizeof(node));
    head ->data = 4;
    head ->next = NULL;
    printf("Node inserted at the beginning of list\n");
    printf("Value is %d\n",head->data);
    return 0;
}