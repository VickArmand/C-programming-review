#include "lists.h"
node_x *head;
void print_list(){
    node_x *ptr = head;
    int counter = 0;
    if(ptr==NULL)
    {
        printf("\nEmpty list\n");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("%d ->", ptr->value);
            ptr = ptr->ptr_next;
            counter++;
        }
        printf("END\n");
        printf("%d elements found\n", counter);
    }
    
}
void add_last_node(int val)
{
    node_x *ptr = head;
    node_x *temp = malloc(sizeof(node_x));
    if (head==NULL)
    {
        head = temp;
        head->ptr_next = NULL;
        head->value = val;
        printf("Node inserted at the beginning of list\n");
    }
    else
    {
        while(ptr->ptr_next!=NULL)
        {
            ptr=ptr->ptr_next;
        }
        ptr->ptr_next=temp;
        temp->value = val;
        temp->ptr_next= NULL;
        printf("\nNode added at the end of list\n");
    }
}
void add_first_node(int val)
{
    node_x *ptr;
    if(head!=NULL)
    {
        printf("First node present\n");
    }
    else
    {
        ptr = malloc(sizeof(node_x));
        ptr->value=val;
        ptr->ptr_next=NULL;
        head = ptr;
        printf("Node created\n");
    }

}
void delete_last_node()
{
    node_x *ptr = head;
    node_x *temp;
    if(ptr==NULL)
    {
        printf("Empty list\n");
    }
    else if(head->ptr_next==NULL)
    {
        free(head);
        printf("First Node deleted\n");
    }
    else{
        while(ptr->ptr_next!=NULL)
        {
            temp = ptr;
            ptr = ptr->ptr_next;
        }
        temp->ptr_next=NULL;
        free(ptr);
        printf("Last Node deleted\n");
    }


}
void delete_first_node(){
    node_x *ptr = head;
    if(ptr==NULL)
    {
        printf("Empty list\n");
    }
    else
    {
        head=ptr->ptr_next;
        free(ptr);
        printf("Node deleted\n");
    }

}
void add_node(int position,int val)
{
    node_x *ptr = head;
    node_x *ptr_prev;
    int counter = 0;
    if(ptr==NULL)
    {
        printf("Empty list\n");
    }
    else if(position == 0)
    {
        add_first_node(val);
    }
    else{
        while(ptr!=NULL)
        {
            if(counter+1==position)
            {
            node_x *temp  = malloc(sizeof(node_x));
            temp->value=val;
            temp->ptr_next=ptr->ptr_next;
            ptr_prev->ptr_next=temp;
            printf("Node added\n");
            }
            ptr_prev=ptr;
            ptr=ptr->ptr_next;
            counter++;
        }
        if (position > counter+1)
        {
            printf("Position not Found\n");
        }
    }



}
void delete_node(int position)
{
    node_x *ptr = head;
    node_x *ptr_nxt;
    int counter = 0;
    if(head==NULL)
    {
        printf("Empty List\n");
    }
    else if(position == 0)
    {
        delete_first_node();
    }
    else
    {
        while(ptr!=NULL)
        {
            if(counter+1 == position)
            {
                ptr_nxt = ptr->ptr_next;
                ptr->ptr_next = ptr->ptr_next->ptr_next;
                free(ptr_nxt);
                printf("Node deleted\n");
                break;
            }
            ptr = ptr->ptr_next;
            counter++;
        }
        if (position > counter+1)
        {
            printf("Position not Found\n");
        }
    }

}