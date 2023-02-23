#include <stdio.h>
int sumofsquares(int upper,int lower);
int main(){
	int upper_limit,lower_limit,reads;
	printf("Enter the lower limit and upper limit \n");
	//scanf("%d%d",&upper_limit,&lower_limit);
	while(reads=scanf("%d%d", &lower_limit, &upper_limit),reads==2 && lower_limit<upper_limit)
	{
		sumofsquares(upper_limit,lower_limit);
		printf("\nEnter the next set of upper and lower limits\n");	
	}
	
	return 0;
}
int sumofsquares(int upper,int lower)
{
	int sum=0;
	int i;
	for(i=lower;i<upper+1;i++)
	{
		int squarelimit=i*i;
		sum =squarelimit+sum;	
	
	}
	printf("The sum of squares of values from %d to %d is %d ",lower,upper,sum);
}