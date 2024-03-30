//Count number of even or odd number from an array of n numbers.
#include<stdio.h>
void main(){
	int i,n,odd=0,even=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[i];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	if(a[i]%2==0){
		even=even+1;
	}
	else{
		odd=odd+1;
	}
}
	printf("odd number =%d",odd);
	printf("even number =%d",even);
}
