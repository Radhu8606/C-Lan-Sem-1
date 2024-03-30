// Get 10 numbers from user print count odd,even number
#include<stdio.h>
void main()
{
	int n,odd=0,even=0;
	while(n<=9)
	{
		printf("enter n : \n");
		scanf("%d",&n);
		if(n%2==0)
		{
			even=even+1;
		}
		else
		{
			odd=odd+1;
		}
	}
	printf("even is : %d",even);
	printf("odd is : %d",odd);
}
