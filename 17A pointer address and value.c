//Print value and address of a variable.
#include<stdio.h>
void main(){
	int X=10;
	int *a=&X;
	printf("Address=%d",a);
	printf("\nvalue=%d",*a);
}
