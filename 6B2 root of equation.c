// Determine the roots of the equation ax2+bx+c=0
#include<stdio.h>
#include<math.h>
void main(){
	float a,b,c,r1,r2,D;
	printf("Enter the value of a,b,c for quadratic equation ax2+bx+c= ");
	scanf("%f %f %f",&a,&b,&c);
	if(4*a*c<=b*b){
		D=(b*b)-(4*a*c);
		r1=((-b)+sqrt(D)/(2*a));
		r2=((-b)-sqrt(D)/(2*a));
		printf("root are r1=%d and r2=%d",r1,r2);
	}
	else{
		printf("roots are imaginary");
	}
}
