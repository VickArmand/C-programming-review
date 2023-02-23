#include <stdio.h>
/**
 * hash function 
*/
unsigned long int hash_djb2(const unsigned char* str)
{
    unsigned long int hash = 5381;
    int c;
    while((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c*/
    }
    return (hash);
}
int main(void)
{
    unsigned char* key1 = "hetairas";
    unsigned char* key2 = "mentioner";
    printf("%ld\n",hash_djb2(key1) % 1024);
    printf("%ld\n",hash_djb2(key2) % 1024);

}