//check whether given number is odd or even using bitwise operator
#include<stdio.h>
void main(){
	int a,b;
	printf("Enter the value of a");
	scanf("%d",&a);
	b=a&1;
	if(a==1){
		printf("a is odd");
	}
	else{
		printf("a is even");
	}
}
