//Pass an array in function to print array elements.
#include<stdio.h>
int pass(int a[],int n);
void main(){
	int n,i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter element into array[%d]:",i);
		scanf("%d",&a[i]);
	}
	 pass(a,n);
}
int pass(int a[],int n){
	int i;
		for(i=0;i<n;i++){
		printf("Enter element into array[%d]:%d",i,a[i]);
		
	}
}
