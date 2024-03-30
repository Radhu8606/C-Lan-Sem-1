//check whether number is even or odd using conditional operator
#include<stdio.h>
void main()
{
	int a;
	printf("enter value of a : \n");
	scanf("%d",&a);
	(a%2==0)?printf("number is even"):printf("number is odd");
}
