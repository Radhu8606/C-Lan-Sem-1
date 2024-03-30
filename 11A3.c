//Print multiplication table of a given number.
#include<stdio.h>
void main(){
	int i,n,mul;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		mul=i*n;
			printf("%d*%d=%d\n",i,n,mul);
	}

}
