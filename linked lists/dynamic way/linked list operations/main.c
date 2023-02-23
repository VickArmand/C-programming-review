#include "lists.h"
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
    switch (option)
    {
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
    default:
        printf("Invalid option\n");
        break;
    }
    }
return 0;
}