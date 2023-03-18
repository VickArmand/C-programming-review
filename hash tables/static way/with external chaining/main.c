#include "hash.h"
int main(void)
{
    printf("\n______________TESTING THE HASH FUNCTION____________\n");
    printf("Victor -> %d\n",hash_function("Victor"));
    printf("victor -> %d\n",hash_function("victor"));
    printf("Jacob -> %d\n",hash_function("Jacob"));
    printf("Martha -> %d\n",hash_function("Martha"));
    printf("Joan -> %d\n",hash_function("Joan"));
    printf("\n______________TESTING THE HASH FUNCTION____________\n");
    init_hash_table();
    person Martha = {.name = "Martha", .age = 20};
    insert_person(&Martha);
    person Joe = {.name = "Joe", .age = 28};
    insert_person(&Joe);
    person Matt = {.name = "Matt", .age = 23};
    insert_person(&Matt);
    person Claire = {.name = "Claire", .age = 25};
    insert_person(&Claire); 
    person Joan = {.name = "Joan", .age = 25};
    insert_person(&Joan);
    person Victor = {.name = "Victor", .age = 25};
    insert_person(&Victor);
    print_table();
    if(check_person("Martha"))
    {
        printf("PRESENT\n");
    }
    else{
        printf("ABSENT\n");
    }
    if(delete_person("Martha"))
    {
        printf("DELETED\n");
    }
    else{
        printf("NOT FOUND\n");
    }
    delete_person("Joe");
    print_table();
    
}