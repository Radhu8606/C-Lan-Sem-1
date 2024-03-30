//Count numbers higher than the average of an array.
#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter the size of array=");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	printf("Enter the elements into array[%d]:",i);
	scanf("%d",&a[i]); 
}
    int sum=0,ave,count=0;
    for(i=0;i<n;i++){
    	sum=sum+a[i];
	}
	printf("sum of all elements=\n%d",sum);
	ave=sum/n;
	printf("average=\n%d",ave);
	for(i=0;i<n;i++){
		if(a[i]>ave){
			count=count+1;
		}
	}
	printf("numbers which are higher than average of an array=\n%d",count);
}
