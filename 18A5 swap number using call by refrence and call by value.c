//Swap two numbers using call by value and call by reference.
//call by reference
#include<stdio.h>
 void func (*int ,*int );
int main(){
		
	int n2=10,n1=12
	printf("before swap n1=%d and n2=%d",n1,n2);
	swap(&n1,&n2);
	printf("After swap n1=%d and n2=%d",n1,n2);
	return 0;
}
   void swap(int *n1,int *n2){
   *n1=12;
   *n2=13;
}

