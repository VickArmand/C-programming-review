unsigned int power (unsigned int p, unsigned int b)
{
    unsigned int res = 1, i;
    for(i= 0; i < p; i++)
    {
        res *= b; 
    }
    return (res);
    // return (1 << p);
}
unsigned binary_to_uint(const char *b )
{
    unsigned int i, base = 2, pow = 0, value, sum = 0;
    const char* s;
    s = b;
    /**
     * Moving forward to identify the address of the final character in the string
    */
    while(*b != '\0')
    {
        b++;
    }
    b--;
    /**
     * Moving backward to obtain the products at each character and summing them to obtain the result
    */
    while(s <= b)
    {
        if (*b != '0' && *b != '1')
        {
            return (0);
        }
        i = *b - '0'; // obtaining the difference between the char in the string and '0' which yields an int
        value = i * (power(pow, base));
        sum += value; 
        pow++;
        b--;
    }
    return (sum);
}

