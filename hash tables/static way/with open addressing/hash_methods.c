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
        for(int i = 0; i < TABLE_SIZE; i++)
        {
            int try = (i + index) % TABLE_SIZE;
            if(hash_table[try] == NULL)
            {
                hash_table[try] = p;
                return true;
            }
            return false;
        }
    }
    else{
        hash_table[index] = p;
        return true;
    }
}
bool delete_person(char *name)
{
    int index = hash_function(name);
    for(int i = 0; i < TABLE_SIZE; i++)
    {
        int try = (i + index) % TABLE_SIZE;
        if(check_person(name))
        {
            hash_table[try] = NULL;
            return true;
        }
        else{
            return false;
        }
    }

}
bool check_person(char* name)
{
    int index = hash_function(name);
    for(int i = 0; i < TABLE_SIZE; i++)
    {
        int try = (i + index) % TABLE_SIZE;
        if(hash_table[try]!= NULL)
        {
            if (strncmp(hash_table[index]->name ,name, TABLE_SIZE) == 0)
            {
                return true;
            }
        }
        else{
            return false;
        }
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
            printf("%d\t%s\t%d\n",i,hash_table[i]->name,hash_table[i]->age);
        }
    }
    printf("\n______________END__________________\n");
}

