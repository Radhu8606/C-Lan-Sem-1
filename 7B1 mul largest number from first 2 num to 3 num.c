//read 3 numbers,multiply largest number from first two numbers to third one using switch
#include<stdio.h>
void main()
{
	int a,b,c,temp;
	printf("enter value of a,b,c : \n");
	scanf("%d %d %d",&a,&b,&c);
	temp=(a>b)?1:0;
	switch(temp)
	{
		case 0 : printf("ans is : %d",b*c);
		break;
		case 1 : printf("ans is : %d",a*c);
		break;
	}
}
