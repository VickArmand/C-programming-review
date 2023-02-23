#include <stdio.h>
int main(){
	int a =20;
	int b= 10;
	printf("Value of a before function call %d\n",a);
	add(&a,&b);
	printf("Value of a after function call%d\n",a);
	return 0;
}
int add(int ptr1,int ptr2){
	ptr1 =10;
	ptr2= 20;
	int sum= ptr1-ptr2;
	printf("Result is %d\n",sum);
}