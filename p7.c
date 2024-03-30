#include<stdio.h>
void add(int,int);
void main(){
	int a=4,b=4;
	int sum;
	sum = add(a,b);
	printf("addition=%d",sum);
}
void add(int a,int b){
	int s=a+b;
	return s;
	
}
