//input an integer number and check last digit of number is odd or even
#include<stdio.h>
void main(){
	int n,lastdigit;
	printf("Enter a number");
	scanf("%d",&n);
	lastdigit=n%10;
	if(lastdigit%2==0){
		printf("last digit is even");
	}
	else{
		printf("last digit is odd");
	}
}
