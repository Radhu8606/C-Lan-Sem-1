// Print digits of given number.
#include<stdio.h>
void main(){
    int i,n,count=1;
    printf("Enter the n ");
    scanf("%d",&n);
    while(n>10){
    	n=n/10;
    	count=count+1;
	}
	printf("%d",count);
}

