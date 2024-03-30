//electricity bill
#include<stdio.h>
void main(){
	float u,bill,tb;
	printf("Enter the units");
	scanf("%f",&u);
	if(u<=50){
		bill=u*0.50;
		printf("Bill =%f",bill);
	}
	else if(u<=150){
		bill=u*0.50+(100-u)*0.75;
		printf("Bill =%f",bill);
	}
	else if(u<=250){
		bill=u*0.50+100*0.75+(u-150)*1.20;
		printf("Bill =%f",bill);
	}
	else{
		bill=u*0.50+100*0.75+100*1.20+(u-250)*1.50;
		printf("Bill =%f",bill);
	}
	tb=bill+bill*0.20;
	printf("Total Bill =%f",tb);
}
