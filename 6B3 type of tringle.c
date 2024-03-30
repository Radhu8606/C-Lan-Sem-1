//Three sides of a triangle are entered through the keyboard, WAP to check whether the triangle is isosceles,
//equilateral, scalene or right angled triangle.
#include<stdio.h>
void main(){
	float a,b,c;
	printf("enter the sides of tringle");
	scanf("%f %f %f",&a,&b,&c);
	if (a==b && b==c){
		printf("Tringle is Equilateral");
	} 
	else if(a==b || b==c || c==a){
		printf("Tringle is Isosceles");
	}
	else{
		printf("Tringle is Scalene");
	}
	if((a*a)==(b*b)+(c*c) || (c*c)==(b*b)+(a*a) || (b*b)==(c*c)+(a*a)){
		printf("Tringle is Right Angled");
	}
}

