
#include<stdio.h>
int main(){
	int var;
	int *ptr;
	int **pptr;
	var=12;
	ptr=&var;
	pptr=&ptr;
	printf("value at var%d\n",var);
	printf("value at *ptr%d\n",*ptr);
	printf("value at **pptr%d\n",**pptr);
}
