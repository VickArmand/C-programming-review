int _isdigit(char c)
{
    char i;
    int isdigit = 0;
    for (i = '0'; i<= '9'; i++)
    {
        if (i == c)
        {
            isdigit = 1;
        }
    }
    return (isdigit);
}
