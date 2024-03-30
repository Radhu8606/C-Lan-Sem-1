//Demonstrate int, float, double and char pointer.
#include<stdio.h>
void main(){
	int X=10;
	int *a=&X;
	printf("Address=%d",a);
	printf("\nvalue=%d",*a);
    float y=10;
	float *b=&y;
	printf("\nAddress=%d",b);
	printf("\nvalue=%f",*b);
	double p=10;
	double *r=&p;
	printf("\nAddress=%d",r);
	printf("\nvalue=%lf",*r);
	char q='a';
	char *k=&q;
	printf("\nAddress=%d",k);
	printf("\nvalue=%c",*k);
}
