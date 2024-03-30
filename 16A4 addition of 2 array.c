//Perform Addition of two matrices.
#include<stdio.h>
void main(){
	int n,m;
	printf("Enter row and col:");
	scanf("%d %d",&n,&m);
	int a[n][m],b[n][m],c[n][m],i,j;
		for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter the elements :");
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter the elements :");
			scanf("%d",&b[i][j]);
		}
	}
		for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		printf("%d", (a[i][j]+b[i][j]));
		}
		printf("\n");
	}
}
