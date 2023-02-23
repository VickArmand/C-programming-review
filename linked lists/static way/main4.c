#include <stdio.h>
#include "main.h"

int main(void)
{
    node *head;
    node new = {4,NULL};
    node new_two = {34, NULL};
    node new_three = {45, NULL};
    node *temp;
    head= &new;
    head->next= &new_two;
    head->next->next= &new_three;
    printf("%d\n", head->data);
    printf("%d\n", head->next->data);
    printf("%d\n", head->next->next->data);
    /** Iterating the linked list*/
    temp=head;
    while(temp != NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    return 0;
}