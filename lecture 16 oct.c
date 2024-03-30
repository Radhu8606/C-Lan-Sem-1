//placement quetion
#include<stdio.h>
void main(){
	int i,count,temp;
	printf("Enter the size of array");
	scanf("%d",&n);
	int a[i];
	for(i=0;i<n;i++){
		printf("Enter an element into a[%d]:",i);
		scanf("%d",&a[i]);
	}
	a[i]=a[j];
	for(i=0;i<n;i++){
		for(j=0;j<n/2;j++){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	if(a[i]=a[j]){
		
		
	}
}
