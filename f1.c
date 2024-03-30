//add two number using add(int int) function
#include<stdio.h>
void add(int,int);
   void main(){
		int a,b;
		printf("Enter the a:");
		scanf("%d",&a);
		printf("Enter the b:");
		scanf("%d",&b);
		add(a,b);
}
   void add(int a,int b){
   	int sum;
   	sum=a+b;
   	printf("Addition=%d",sum);
}
