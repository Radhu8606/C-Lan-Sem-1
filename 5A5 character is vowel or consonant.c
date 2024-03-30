//find largest number from given three number
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter the value of a");
	scanf("%d",&a);
	printf("Enter the value of b");
	scanf("%d",&b);
	printf("Enter the value of c");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("a is largest");
		}
		else{
			printf("c is largest");
		}
	}
	else{
		if(b>c){
			printf("b is largest");
		}
		else{
			printf("c is largest");
		}
	}
}
