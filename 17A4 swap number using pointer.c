//Swap value of two numbers using pointer.
#include<stdio.h>
void main(){
	int n1,n2,temp;
	printf("Enter the n1 and n2=");
	scanf("%d %d",&n1,&n2);
    temp=n1;
    n1=n2;
    n2=temp;
    int *a=&n1;
    int *b=&n2;
    printf("after swap =%d %d",*a,*b);
}
