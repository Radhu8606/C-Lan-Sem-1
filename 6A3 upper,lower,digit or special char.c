//check whether the entered character is upper case,lower case,digit or any special character
#include<stdio.h>
void main(){
	char ch;
	printf("please enter character here");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z'){
		printf("\n upper case");
	}
	else if(ch>='a' && ch<='z'){
		printf("\n lower case");
	}
	else if(ch>='0' && ch<='9'){
		printf("\n digit");
	}
	else{
		printf("\n special character");
	}
}
