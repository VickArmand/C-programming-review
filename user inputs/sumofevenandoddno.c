#include <stdio.h>
int main(){
	int value;
	printf("Enter any integer apart from 0 \n");
	scanf("%d",&value);
	int sumofeven=0;
	int sumofodd=0;
	while(value!=0)
	{
	int odd,even,i;

	if(value%2==0)
	{
		even=value;
		sumofeven=sumofeven+even;
	}
	else{
		odd=value;
		sumofodd=sumofodd+odd;
	}
	printf("\nThe sum of odd numbers is %d ",sumofeven,"\n");
	printf("\nThe sum of even numbers is %d ",sumofodd,"\n");
	printf("\nEnter any integer apart from 0 \n");
    scanf("%d",&value);
	}
	
	return 0;
}
