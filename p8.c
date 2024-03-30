#include<stdio.h>
void power(int,int);
void main(){
	int num,pow,res;
	printf("enter the number:");
	scanf("%d",&num);
	printf("enter the power:");
	scanf("%d",&pow);
	res=power(num,pow);
	printf("%d's power %d=%d",num,pow,res);
}
void power(int num,int pow){
	int r=1,p;
	while(p>=1){
		r=r*num;
		p--;
	}
}
