//Use string handling functions strlen(), strcmp(), strcpy(), strcat(), strrev(), strlwr() and strupr()
#include<stdio.h>
#include<string.h>
//strlen()
void main(){
	char s1[10];
	printf("Enter string:");
	gets(s1);
	printf("%d",strlen(s1));
	char s2[10];
	printf("Enter string:");
	gets(s2);
	
	if(strcmp(s1,s2)==0){
		printf("string are same");
	}
	else{
		printf("string are not same");
	}
	strcpy(s1,s2);
	printf("\nstring copy=");
	printf("\n string s1=%s",s1);
	strcat(s1,s2);
	printf("\nstring=");
	printf("\n%s",s1);
	strrev(s1);
	printf("\nreverse string=%s",s1);
}
