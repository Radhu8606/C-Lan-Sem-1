//Find factorial of the given number.
#include<stdio.h>
void main(){
	int n,i,mul=1;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		mul=mul*i;
	}
	printf("%d",mul);
}
