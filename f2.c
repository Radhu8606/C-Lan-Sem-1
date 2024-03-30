//find maximum number from two number using function
#include<stdio.h>
void max(int,int);
void main(){
	int a,b;
		printf("Enter the a:");
		scanf("%d",&a);
		printf("Enter the b:");
		scanf("%d",&b);
		int maxvalue;
		maxvalue=max(a,b);
		 printf("maximum number =%d",maxvalue);
}
  void max(int a,int b){
  	int max;
  	if(a>b){
  		return a;
	  }
	  else{
	  return b;
	  }
	 
}
