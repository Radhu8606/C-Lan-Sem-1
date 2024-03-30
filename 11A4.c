//Calculate xpowery without using power function.
#include<stdio.h>
void main(){
	int i,x,y,mul=1;
	printf("Enter the x:");
	scanf("%d",&x);
	printf("Enter the y:");
	scanf("%d",&y);
	for(i=1;i<=y;i++){
		mul=x*mul;
	}
	printf("%d",mul);
}

