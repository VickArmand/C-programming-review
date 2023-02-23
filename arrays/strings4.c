#include <stdio.h>
void change(char *a)
{
    a[1] = 'x';
}
int main(void)
{
    char letters[4] = {'p','r','o','g'};
    printf(" Value before function call %c\n",letters[1]);
    change(letters);
    printf("Value after function call %c\n",letters[1]);
    return 0;
}