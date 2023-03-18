#include "hash.h"
person *hash_table [TABLE_SIZE];
unsigned int hash_function(char * name)
{
    int length = strnlen(name, MAX_SIZE);
    unsigned int hash_value = 0;
    for (int i = 0; i < length; i++)
    {
        hash_value += name[i];
        hash_value = (hash_value * name[i]) % TABLE_SIZE;
    }
    return hash_value;
}
bool init_hash_table()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        hash_table[i] = NULL; // table is initialy empty
    }
    return true;
}
bool insert_person(person *p)
{
    int index = hash_function(p -> name);
    if (p == NULL)
    {
        return false;
    }
    else if (hash_table[index]!= NULL)
    {
        p -> next = hash_table[index];
        hash_table[index] = p; 
    }
    else{

        hash_table[index] = p; 
        return true;
    }
}
bool delete_person(char *name)
{
    int index = hash_function(name);
    if(check_person(name))
    {
        hash_table[index] = NULL;
        return true;
    }
    else{
        person *tmp = hash_table[index];
        person *prev;
        while((tmp != NULL) && (strncmp(tmp->name ,name, MAX_SIZE) != 0))
        {
            prev = tmp;
            tmp = tmp -> next;
        }
        prev -> next = tmp -> next;
        tmp = NULL;
        return true;
    }
}
bool check_person(char* name)
{
    int index = hash_function(name);
    person *tmp = hash_table[index];
    if(hash_table[index]!= NULL)
    {
        if (strncmp(hash_table[index]->name ,name, MAX_SIZE) == 0)
        {
            return true;
        }
        else
        {
            while(tmp != NULL)
            {
                if (strncmp(tmp->name ,name, MAX_SIZE) == 0)
                {
                    return true;
                    break;
                }
                tmp = tmp -> next;
            }
        }
    }
    else{
        return false;
    }
}
void print_table()
{
    printf("\n______________START__________________\n");
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if(hash_table[i]== NULL)
        {
            printf("%d\t%s\t%s\n",i,"empty","empty");
        }
        else{
            printf("%d",i);
            person *tmp = hash_table[i];
            while(tmp != NULL)
            {
                printf("\t%s\t%d ->",tmp->name,tmp->age);
                tmp = tmp -> next;
            }
            printf("\tEND\n");
        }
    }
    printf("\n______________END__________________\n");
}

