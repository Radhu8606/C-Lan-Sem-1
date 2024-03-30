//Count simple interest using function. (principal*roi*time period)/100
#include<stdio.h>
void main(){
	int p,r,t;
	printf("Enter principal,rate of interest and time period=");
	scanf("%d %d %d",&p,&r,&t);
	res(p,r,t);
} 
     void res(int p,int r,int t){
     	float si;
     	si=(p*r*t)/100;
     	printf("%d",si);
	 }
