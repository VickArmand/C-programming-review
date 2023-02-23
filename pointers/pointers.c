	#include <stdio.h>
	int main()
	{
	int value=20;
	int *ptr= &value;
	// * is used to dereference a pointer meaning obtaining the value stored in a memory address
	// ptr stores the address while *ptr obtains the value
	printf("%d\n",*ptr);
	/*Print the address of the value variable*/
	printf("%p\n",ptr);
	printf("%p\n",&value);
		
	}
	