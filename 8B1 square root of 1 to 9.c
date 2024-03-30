//Print number and its square root for 0 to 9.
#include<stdio.h>
#include<math.h>
void main(){
	float i=0,square;
	while(i<=9){
		square=sqrt(i);
		printf("\n %f",square,i);
		i++;
	}
}
