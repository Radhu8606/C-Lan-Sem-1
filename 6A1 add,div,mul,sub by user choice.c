//perform addition,subtraction,multiplication,division of 2 number as per user's choice
#include<stdio.h>
void main(){
	int a,b,add,sub,mul,div,choice;
	printf("Enter the value of a");
	scanf("%d",&a);
	printf("Enter the value of b");
	scanf("%d",&b);
	printf("1.addition,2.subtraction,3.multiplication,4.division");
	printf("Enter the choice");
	scanf("%d",&choice);
	if(choice==1){
		add=a+b;
		printf("addition=%d",add);
	}
	else if(choice==2){
		sub=a-b;
		printf("subtraction =%d",sub);
	}
	else if(choice==3){
		mul=a*b;
		printf("multiplication =%d",mul);
	}
	else if(choice==4){
		div=a/b;
		printf("division =%d",div);
	}
	else{
		printf("Enter valid choice");
	}
}
