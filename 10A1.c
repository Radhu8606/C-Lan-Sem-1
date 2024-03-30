//Find out sum of first and last digit of a given number.
#include<stdio.h>
void main(){
	int n,i,ld,sum,rem;
	printf("Enter the n ");
	scanf("%d",&n);
	ld=n%10;
	while(n>10){
		n=n/10;
	}
	sum=ld+n;
	printf("%d",sum);
}
