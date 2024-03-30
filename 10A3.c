//Find whether the given number is prime or not.
#include<stdio.h>
void main(){
	int i=1,n,count=0;
	printf("Enter the n ");
	scanf("%d",&n);
	while(i<=n){
	   if(n%i==0){
	   	 count=count+1;
	   }
	   i=i+1;
	}
	if(count==2){
		printf("Given number is prime number");
	}
	else{
		printf("Given number is not prime number");
	}
}
