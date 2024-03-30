//swap two number without using temp variable
#include<stdio.h>
void main(){
	int a,b;
	printf("Enter the value of a");
	scanf("%d",&a);
	printf("Enter the value of b");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("value of a=%d",a);
	printf("value of b=%d",b);
}
