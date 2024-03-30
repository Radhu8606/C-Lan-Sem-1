//Check whether the given number is palindrome or not.
#include<stdio.h>;
void main(){
	int i,n,rev=0;
	printf("Enter the number ");
	scanf("%d",&n);
	int num=n;
	while(n!=0){
	
		n=n/10;
		rev=(rev*10)+(n%10);
	}
	if(rev=num){
		printf("\nGiven number is palindrome");
	}
	else{
		printf("\nGiven number is not palindrome");
	}
}
