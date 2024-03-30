//Count number of positive, negative and zero elements from 3 X 3 matrix.
#include<stdio.h>
void main(){
	int i,j,a[3][3],p=0,n=0,z=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the elements into array[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]>0){
				p=p+1;
			}
			else if(a[i][j]<0){
				n=n+1;
			}
			else{
				z=z+1;
			}
}
}
      printf("positive numbers=%d",p);
      printf("negative numbers=%d",n);
      printf("zero elements=%d",z);
}
