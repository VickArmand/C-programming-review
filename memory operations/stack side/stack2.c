#include <stdlib.h>
char *s;
s = strdup("Best School");
if (s != NULL)
{
    free(s);
}