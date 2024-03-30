//Print 1 to 10 then modify program Print 1 to n using while and do while loop.
#include<stdio.h>
void main(){
	int i=1,n;
	printf("Enter the value of n ");
	scanf("%d",&n);
	do{
		printf("%d",i);
		i=i+1;
	}	while(i<=n);
}
