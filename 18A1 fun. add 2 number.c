//Add two numbers using function.
#include<stdio.h>
void main(){
	int n1,n2,res;
	printf("Enter the n1 and n2=");
	scanf("%d %d",&n1,&n2);
	res=sum(n1,n2);
	printf("%d",res);
}

	int sum(int n1,int n2){
		int n3;
		n3=n1+n2;
		return n3;
	}
