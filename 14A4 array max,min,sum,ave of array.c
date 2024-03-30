//Find Max, Min, Sum, Avg. of given numbers from an array.
#include<stdio.h>
void main(){
	int i,j,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n],max=a[0],min=a[0],sum=0,ave;
	for(i=0;i<n;i++){
		printf("Enter the element into a[%d]:",i);
		scanf("%d/n",&a[i]);
	}
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	printf("sum=%d",sum);
	ave=sum/n;
	printf("average=%d",ave);
	for(i=0;i<n;i++){
		if(a[i]>a[0]){
			max=a[i];
		}
		printf("%d",max);
	}
}
