//Copy all elements of one array to another.
#include<stdio.h>
void main(){
	int i,j,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
		printf("Enter the element into array[%d]:",i);
		scanf("%d",&a[i]);
	}
	  	for(i=0;i<n;i++){
	    b[i]=a[i];
	    printf("\nEnter the elements into b[%d]=%d",i,b[i]);
	}
}
