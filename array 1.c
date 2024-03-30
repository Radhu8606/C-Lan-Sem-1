// array for decimal to binary
#include<stdio.h>
void main(){
	int n,i,rem;
	scanf("%d",&n);
	int bin[32];
	for(i=0;i<32;i++){
		bin[i]=0;
	}
	for(i=0;n!=0;i++){
		rem=n%2;
		n=n/2;
		bin[i]=rem;
	}
	for(i=31;i>=0;i--){
		printf("%d",bin[i]);
	}
}

