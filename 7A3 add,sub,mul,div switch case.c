//perform addition,subtraction,multiplication and division of 2 numbers as per user's choice using switch case
#include<stdio.h>
void main(){
	float a,b,ans;
	int n;
	printf("Enter the value of a");
	scanf("%f",&a);
	printf("Enter the value of b");
	scanf("%f",&b);
	scanf("%d",&n);
	switch(n){
		case 1:
			ans=a+b;
			printf("Addition =%f",ans);
			break;
		case 2:
			ans=a-b;
			printf("Subtraction =%f",ans);
			break;
		case 3:
			ans=a*b;
			printf("Multiplication =%f",ans);
			break;
		case 4:
			ans=a/b;
			printf("Division =%f",ans);
			break;
		default:
		    printf("Enter valid number");
		    break;
	}
} 
