#include <stdio.h>
int _atoi(char *s)
{
    int i = 0;
    char j;
    int res = 0;
    while (s[i] != '\0')
    {
        for(j = '0'; j<= '9'; j++)
        {
            if(s[i] == j)
            {
                res = (res * 10) + (j - '0');
            }
        }
        i++;
    }
    return (res);
}
int main(void)
{
    char *a = "0987654321";
    printf("%d\n", _atoi(a));
    a = "Hello World";
    printf("%d\n", _atoi(a));
    return (0);
}