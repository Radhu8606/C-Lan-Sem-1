//Print following patterns.(*,**,***,****,*****)
#include<stdio.h>
void main(){
	int i,j,n=5,k;
	for(i=0;i<n;i++){
		for(k=0;k<=n-i;k++){
			printf(" ");
		
		for(j=0;j<n-i;j++){
			printf("*");
		}
	
	}
		printf("\n");
	}
}
