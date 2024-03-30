//array for distance between given 2 number
#include<stdio.h>
void main(){
		int n,r,i,ans,count=0;
	scanf("%d",&n);
	scanf("%d",&r);
	ans=n^r;
	for(i=0;i<31;i++){
		count=count+ans&1;
		ans=ans>>1;
	}
	printf("%d",count);
}
