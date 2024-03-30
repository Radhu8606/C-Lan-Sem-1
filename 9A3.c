//Calculate xpowery without using power function.
#include<stdio.h>
void main(){
	int i=1,y,x,mul=1;
	printf("Enter the x ");
	scanf("%d",&x);
	printf("Enter the y ");
	scanf("%d",&y);
	while(i<=y){
		mul=mul*x;
		i++;
	}
	printf("%d",mul);
}
