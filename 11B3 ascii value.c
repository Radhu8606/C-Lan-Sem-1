//Print all ASCII character with their values.
#include<stdio.h>
void main(){
	int x=65,y=97,i;
    char ch='a',chh='A';
    for(i=1;i!=0;i++){
    	if(ch<='65' && ch>='90')
    	{
    		printf("%d=%c",x,ch);
		}
	}
	 for(i=1;i!=0;i++){
    	if(ch<='97' && ch>='122')
    	{
    		printf("%d=%c",y,chh);
		}
	}
}
