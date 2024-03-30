//Print following patterns.(12345,1234,123,12,1)
#include<stdio.h>
void main(){
	int i,j,n=5;
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			printf("%d",j+1);
		}
		printf("\n");
	}
}
