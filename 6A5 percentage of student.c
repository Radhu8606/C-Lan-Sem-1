//read marks of 5 subjects and calculate percentage
#include<stdio.h>
void main(){
	int m1,m2,m3,m4,m5;
	float per;
	printf("Enter the value of m1");
	scanf("%d",&m1);
		printf("Enter the value of m2");
	scanf("%d",&m2);
		printf("Enter the value of m3");
	scanf("%d",&m3);
		printf("Enter the value of m4");
	scanf("%d",&m4);
		printf("Enter the value of m5");
	scanf("%d",&m5);
	per=(m1+m2+m3+m4+m5)/100;
	if(per<=35){
		printf("Fail");
	}
	else if(per>=36 && per<=45){
		printf("Pass Class");
	}
	else if(per>=46 && per<=60){
		printf("Second Class");
	}
	else if(per>=61 && per<=70){
		printf("First Class");
	}
	else if(per>70){
		printf("Distinction");
	}
}
