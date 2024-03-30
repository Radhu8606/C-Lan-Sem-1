//convert tempareture from fahrenhiet to celsius
#include<stdio.h>
void main(){
	int c,f;
	printf("Enter tempareture in fahrenhiet");
	scanf("%d",&f);
	c=((f-32)*5)/9;
	printf("tempareture in celsius =%d",c);
}
