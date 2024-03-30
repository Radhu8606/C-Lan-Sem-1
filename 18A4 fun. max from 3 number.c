//Return the maximum of three floating-point numbers.
#include<stdio.h>
void com(float n1,float n2,float n3);
void main(){
	float n1,n2,n3;
	printf("Enter n1,n2 and n3=");
	scanf("%f %f %f",&n1,&n2,&n3);
	com( n1, n2, n3);
}
    void com(float n1,float n2,float n3){
   
    	float max,min;
    	if(n1>n2){
    		if(n1>n3){
    			max=n1;
    			min=n3;
			}
			else{
				max=n3;
				min=n1;
			}
		}
		else{
			if(n2>n3){
				max=n2;
				min=n3;
			}
			else{
				max=n3;
				min=n2;
			}
		}
		printf("%f %f",max,min);
	}
