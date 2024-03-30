//Count total number of negative elements in array.
#include<stdio.h>
void main(){
		int i,j,n,count=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter the element into array[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	
	if(a[i]<0){
		count++;
	}

}
      printf("total number of negative elements in array:%d",count);
}
