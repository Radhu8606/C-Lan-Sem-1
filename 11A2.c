//. Print sum of 1 to n numbers.
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter the number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("sum of numbers=%d",sum);
}
