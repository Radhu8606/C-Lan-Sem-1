#include<stdio.h>
void main()
{
	int i,j;
	printf("enter the value of i and j : \n");
	scanf("%d %d",&i,&j);
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
