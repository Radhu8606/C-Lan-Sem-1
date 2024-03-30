//Calculate the average, geometric and harmonic mean of n elements in an array.
#include<stdio.h>
void main(){
	int i,j,n;
	printf("Enter the size of array=");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	printf("Enter the elements into array[%d]:",i);
	scanf("%d",&a[i]); 
	 int sum=0,ave,;
    for(i=0;i<n;i++){
    	sum=sum+a[i];
	}
	printf("sum of all elements=\n%d",sum);
	ave=sum/n;
	printf("average=\n%d",ave);
	//geometric mean formula=n(under root )X1*X2*X3*....*Xn
	//n=number of terms
	
}

