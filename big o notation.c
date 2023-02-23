#include <stdio.h>

int main(){
	int i,j,k;
	for(i=0; i<4;i++)
	{
		//This loop takes a big o notation of n
		printf("%d\n",i);
	}
	for(i=0; i<4;i++)
	{
		for(j=0; j<4;j++)
		{
			//The nested for loop takes a big o notation of n squared
			printf("%d%d\n",i,j);
		}
	}
	for(i=0; i<4;i++)
	{
		for(j=0; j<4;j++)
		{
			for(k=0; k<4;k++)
		{
			//The nested for loop takes a big o notation of n cubed
			printf("%d%d%d\n",i,j,k);
		}
		}
	}
}