//Print multiplication table of a given number.
#include<stdio.h>
void main(){
	int i=1,n,mul=0;
	printf("Enter the number ");
	scanf("%d",&n);
	while(i<=10){
		mul=i*n;
		printf("%d*%d=%d\n",i,n,mul);
		i++;
	}
}
