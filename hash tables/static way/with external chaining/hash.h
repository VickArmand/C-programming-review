#ifndef _HASH_
#define _HASH_
#define MAX_SIZE 256
#define TABLE_SIZE 10
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
typedef struct p
{
    char name[MAX_SIZE];
    int age;
    struct p *next;
} person;
unsigned int hash_function(char *name);
bool insert_person(person *p);
bool delete_person(char *name);
bool check_person(char* name);
bool init_hash_table();
void print_table();
#endif