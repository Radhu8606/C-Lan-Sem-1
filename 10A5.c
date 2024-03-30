//Print given number in reverse order.
#include<stdio.h>
void main(){
	int i,n,dig=0;
	printf("Enter the number ");
	scanf("%d",&n);
	while(n!=0){
	
	
		dig=(dig*10)+(n%10);
			n=n/10;
	}
	printf("Reverse number=%d",dig);
}
