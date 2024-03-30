//Find maximum and minimum between two numbers using function.
#include<stdio.h>
void main(){
	int n1,n2,res,max,min;
	printf("Enter n1 and n2=");
	scanf("%d %d",&n1,&n2);
	com(n1,n2);
}
    void com(int n1,int n2){
    	int max,min;
    	if(n1>n2){
    		max=n1;
    		min=n2;
		}
		else{
			max=n2;
			min=n1;
		}
		printf("%d %d",max,min);
	}
