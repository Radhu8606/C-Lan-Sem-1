//Find the sum and average of different numbers which are accepted by user as many as user wants.
#include<stdio.h>
void main(){
	int n,i,k;
	float sum=0,ave;
	printf("Enter the numbers of n ");
	scanf("%d",&k);
	while(i<=k-1){
		printf("Enter the number ");
		scanf("%d",&n);
		sum=sum+n;
		i++;
	}
	printf("%f\n",sum);
	ave=sum/k;
	printf("%f",ave);
}
