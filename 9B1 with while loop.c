//Print all uppercase and lowercase alphabets.
#include<stdio.h>
void main(){
	char ch='A',c='a';
	while(ch>='A' && ch<='Z'){
		printf("%c",ch);
		ch++;
	}
		while(c>='a' && c<='z'){
		printf("%c",c);
		c++;
	}
}
