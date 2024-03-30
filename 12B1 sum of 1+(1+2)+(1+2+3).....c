//Find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4) + …+ (1+2+3+4+…. +n).
#include<stdio.h>
void main(){
	int i,j,n,sum,add=0;
	printf("Enter the n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=0;
		for(j=1;j<=i;j++){
		sum=sum+j;
		}
		add=sum+add;
	
	}
		printf("%d",add);
}
