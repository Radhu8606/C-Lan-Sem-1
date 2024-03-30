//Estimate the value of the mathematical constant e.(formula e=1+1/1!+1/2!+1/3!+....)
#include<stdio.h>
void main(){

	int i,j,n,mul=1;
	float add=1;
	printf("Enter the n:");
	scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
		mul=mul*i;
		add+=1.0/mul;	
	}
	
	printf("%f",add);
}
