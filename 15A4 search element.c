// Search element in array.
#include<stdio.h>
void main(){
		int i,j,n,k,count=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter the element into array[%d]:",i);
		scanf("%d",&a[i]);
	}
    printf("Enter the element:");
    sacnf("%d",&k);
    for(i=0;i<n;i++){
    	if(a[i]==k){
    	count=1;
    	break;
		}
	}
	if(count==1){
		printf("Your element is in array");
	}
	else{
		printf("Your element is not in array");
	}
}
