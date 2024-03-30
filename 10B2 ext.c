// Find whether the given number is prime or not using flag.
#include<stdio.h>
void manin(){
	int n,i=2,flag=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(i=n/2){
	  if(n%i==0){
	  	flag=1;
	  break;
	  }	
	  i++;
	}
	if(flag==0){
		printf("%d is prime number");
	}
	else{
		printf("%d is not prime number");
	}
}
