//Print sum of series 1 � 2 + 3 � 4 + 5 � 6 + 7 � n
#include<stdio.h>
void main(){
	int i=1,n,sum=0;
	printf("Enter the number ");
	scanf("%d",&n);
	while(i<=n){
		if(i%2==0){
			sum=sum-i;
		}
		else{
			sum=sum+i;
	}
	i++;
	}
	printf("%d",sum);
}
