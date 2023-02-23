#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int value;
    struct node *ptr_next;
}node_x;
node_x *head;

void print_list();
void add_last_node(int);
void add_first_node(int);
void delete_last_node();
void delete_first_node();
void add_node(int,int);
void delete_node(int);
int main(void)
{
    int option, val, position;
    while(option!=10)
    {
    printf("Select an option to perform a linked list operation\n");
    printf("0: Create a linked list by adding a first node\n");
    printf("1: Add a node at the end\n");
    printf("2: Add a node at any position\n");
    printf("3: Remove a node at the end\n");
    printf("4: Remove a node at the beginning\n");
    printf("5: Remove a node at any position\n");
    printf("6: View the list\n");
    printf("10:Quit\n");
    scanf("%d",&option);
    switch(option){
        case 0: 
            printf("Enter the value to be stored in the new node\n");
            scanf("%d",&val);
            add_first_node(val);
            break;
        case 1:
            printf("Enter the value to be stored as the last node\n");
            scanf("%d",&val);
            add_last_node(val);
            break;
        case 2:
            printf("Enter a position to add a node in the list\n");
            scanf("%d",&position);
            printf("Enter the value to be stored in the new node\n");
            scanf("%d",&val);
            add_node(position,val);
            break;   
        case 3:
            delete_last_node();
            break;    
        case 4:
            delete_first_node();
            break;    
        case 5:
            printf("Enter a position to delete a node in the list\n");
            scanf("%d",&position);
            delete_node(position);
            break;    
        case 6:
            print_list();
            break;
        case 10:
            exit(0);
            break;      
        default:
            printf("Invalid option\n");
            break;
        }
    }
return 0;
}
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
        printf("\nNode inserted at the beginning of list\n");
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
    ptr = malloc(sizeof(node_x));
    ptr->value=val;
    if(head!=NULL)
    {
        ptr->ptr_next = head;
        head = ptr;
        printf("\nFirst node replaced\n");
    }
    else
    {
        ptr->ptr_next=NULL;
        head = ptr;
        printf("\nNode created\n");
    }

}
void delete_last_node()
{
    node_x *ptr = head;
    node_x *temp;
    if(ptr==NULL)
    {
        printf("\nEmpty list\n");
    }
    else if(head->ptr_next==NULL)
    {
        free(head);
        printf("\nFirst Node deleted\n");
    }
    else{
        while(ptr->ptr_next!=NULL)
        {
            temp = ptr;
            ptr = ptr->ptr_next;
        }
        temp->ptr_next=NULL;
        free(ptr);
        printf("\nLast Node deleted\n");
    }


}
void delete_first_node(){
    node_x *ptr = head;
    if(ptr==NULL)
    {
        printf("\nEmpty list\n");
    }
    else
    {
        head=ptr->ptr_next;
        free(ptr);
        printf("\nNode deleted\n");
    }

}
void add_node(int position,int val)
{
    node_x *ptr = head;
    node_x *ptr_prev;
    int counter = 0;
    if(ptr==NULL)
    {
        printf("\nEmpty list\n");
    }
    else{
        if(position == 1)
        {
            add_first_node(val);
        }
        while(ptr!=NULL)
        {
            if(counter==position)
            {
            node_x *temp  = malloc(sizeof(node_x));
            temp->value=val;
            temp->ptr_next=ptr->ptr_next;
            ptr_prev->ptr_next=temp;
            printf("\nNode added\n");
            break;
            }
            ptr_prev=ptr;
            ptr=ptr->ptr_next;
            counter++;
        }
        if (position == counter+1)
        {
            add_last_node(val);
        }
        else
        {
            printf("\nPosition not Found\n");
        }
    }



}
void delete_node(int position)
{
    node_x *ptr = head;
    node_x *ptr_prev;
    int counter = 0;
    if(head==NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
    if(position == 1)
    {
        delete_first_node();
    }
    else{
        while(ptr!=NULL)
        {
        if(counter == position)
        {
            ptr_prev->ptr_next = ptr->ptr_next;
            free(ptr);
            printf("\nNode deleted\n");
            break;
        }
        ptr_prev = ptr;
        ptr = ptr->ptr_next;
        counter++;
        }
        if (position > counter)
        {
            printf("\nElement not Found\n");
        }
    } 
    }
    

}