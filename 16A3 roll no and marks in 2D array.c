//Read and store the roll no and marks of 20 students using 2D array.
#include<stdio.h>
void main(){
	int i,j,a[20][2];
	for(i=0;i<20;i++){
		
			printf("\nEnter the roll no:");
			scanf("%d",&a[i][0]);
			printf("\nEnter the marks:");
			scanf("%d",&a[i][1]);
		
	}
	for(i=0;i<20;i++){
		for(j=0;j<2;j++){
		
			printf("%d",a[i][j]);
		}
	}
	printf("\n");
}
