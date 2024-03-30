//Get 10 numbers from user print count of odd, even numbers.
#include<stdio.h>
void main(){
	int i,countodd=0,counteven=0,a;
   for(i=1;i<=10;i++){
    printf("Enter number ");
   scanf("%d",&a);
   if(i%2==0){
   	counteven=counteven+1;
   }
   else{
   	countodd=countodd+1;
   }
   }
   printf("counteven = %d",counteven);
   printf("countodd  =%d",countodd);
}
