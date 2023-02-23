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
    first->next=malloc(sizeof(node));
    second = first->next;
    second->next=malloc(sizeof(node));
    third=second->next;

    first->data=10;
    first->next->data=20;
    third->data=30;

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