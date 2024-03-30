#include<stdio.h>
void main(){
	char str[2];
	int i=0;
	scanf("%s",str);
	while(str[i]!='\0'){
		printf("%s",str[i]);
		i++;
	}
}
