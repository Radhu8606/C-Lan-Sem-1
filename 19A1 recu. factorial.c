//Find factorial of a number using function and recursive function.
#include<stdio.h>
int fact(int);
void main(){
	int f,n;
	printf("Enter the n");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial=%d",f);
}
   int fact(int n){
   	 if(n==0){
   	 	return 1;
		}
	
		else{
		return	n*fact(n-1);
		}
   }
