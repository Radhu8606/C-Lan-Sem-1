//calculate gross salary
#include<stdio.h>
void main(){
	int b,h,d,g;	
	printf("Enter the value of b");
	scanf("%d",&b);
	if(b>=30000){
		h=b*0.3;
		d=b*0.95;
		g=h+d+b;
		printf("Gross salary =%d",g);
	}
	else if(b>=20000){
		h=b*0.25;
		d=b*0.9;
		g=h+d+b;
		printf("Gross salary =%d",g);	
	}
	else if(b>=10000){
		h=b*0.2;
		d=b*0.8;
		g=h+d+b;
		printf("Gross salary =%d",g);	
	}
	else{
		printf("Enter number above 10000");
	}
}
