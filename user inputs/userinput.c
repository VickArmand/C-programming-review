#include <stdio.h>
int main()
{
	int a = 0, b = 0, c = 0;
	printf("enter the value of a");
	scanf("%d", &a);
	printf("enter the value of b");
	scanf("%d", &b);
	c = a + b;
	printf("%d+%d=%d",a,b,c);
	return 0;
}