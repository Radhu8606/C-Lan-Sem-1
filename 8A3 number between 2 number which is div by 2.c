//Print numbers between two given numbers which is divisible by 2.
#include<stdio.h>
void main(){
	int i,a,b;
	printf("Enter the value of a ");
	scanf("%d",&a);
	printf("Enter the value of b ");
	scanf("%d",&b);
	i=a;
	while(i<=b){
			if(i%2==0){
			printf("%d",i);
	}
		i=i+1;
	}
}
