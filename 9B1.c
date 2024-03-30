//Print all uppercase and lowercase alphabets.
#include<stdio.h>
void main(){
		int x=65,y=97;
		while(x>=65 && x<=97){
			printf("%c",x);
			x++;
		}
		while(y>=97 && y<=122){
			printf("%c",y);
			y++;
		}
	}
