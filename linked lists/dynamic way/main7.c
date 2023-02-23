#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
    int n = {1,2,3,4};
    node * head, *node1, *node2, *node3, *node4;
    node1= malloc(sizeof(node));
    node1->data = 1, node1->next= NULL;
    node2= malloc(sizeof(node));
    node2->data = 1, node2->next= NULL;
    node1->next = node2;
    node3= malloc(sizeof(node));
    node3->data = 1, node3->next= NULL;
    node2->next = node3;
    node4= malloc(sizeof(node));
    node4->data = 1, node4->next= NULL;
    node3->next = node4;
    head = node1;
    node *traverser = head;
    while(head != NULL)
    {
        printf("%s %p\n",head->data,head);
        head = head->next;
    }
    while(traverser != NULL)
    {
        node *tmp = traverser;
        traverser = traverser -> next;
        free(tmp);
    }
    return 0;
}