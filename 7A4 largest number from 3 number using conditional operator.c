//Find out largest number from given 3 numbers using conditional operator
#include<stdio.h>
void main(){
	int a,b,c,largestnumber;
	printf("Enter value of a ");
	scanf("%d",&a);
	printf("Enter value of b ");
	scanf("%d",&b);
	printf("Enter value of c ");
	scanf("%d",&c);
    largestnumber=a>b?(a>c?a:c):(b>c?b:c);
    printf("largest number =%d",largestnumber);
}
