// Read n numbers from user and print in normal and reverse order.
//1st normal order
#include<stdio.h>
void main(){
	int i,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n;i++){
		printf("%d\n",arr[i]);
	}
}


