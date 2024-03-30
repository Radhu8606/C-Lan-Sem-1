// Count number of positive or negative number from an array of n numbers.
#include<stdio.h>
void main(){
	int i,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int p=0,n=0;
	for(i=0;i<n;i++){
		if(a[i]>0){
			p=p+1
		}
		else{
			n=n+1
		}
	}
      printf("Positive number=%d",p);
      printf("Negative number=%d",n);
}
