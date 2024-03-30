//find factors of the given number
#include<stdio.h>
void main(){
	int i=1,n;
	printf("Enter the n ");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
			printf("%d\n",i++);
		}
		else{
			i++;
		}
	}
}
