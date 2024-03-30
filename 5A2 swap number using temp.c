//swap two number using temp variable
#include<stdio.h>
void main(){
	int a,b,temp;
	printf("Enter the value of a");
	scanf("%d",&a);
	printf("Enter the value of b");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("value of a=%d",a);
	printf("value of b=%d",b);
}
