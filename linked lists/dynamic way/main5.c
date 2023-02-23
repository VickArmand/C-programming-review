#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    node *head;
    node *ptr;
    node *first = NULL;
    node *second = NULL;
    node *third = NULL;

    first = malloc(sizeof(node));
    second = malloc(sizeof(node));
    third = malloc(sizeof(node));

    first->data=10;
    second->data=20;
    third->data=30;

    first->next=second;
    second->next=third;

    head = first;

    ptr = head;
    while(ptr != NULL)
    {
        printf("%d->",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
    return 0;
}