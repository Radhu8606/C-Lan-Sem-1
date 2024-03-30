//structure
#include<stdio.h>
struct car{
	char car_name[30];
	float milage;
	int price;
};
void main(){
	int i;
	struct car c[5];
	for(i=0;i<5;i++){
		printf("Enter the car name:");
		scanf("%s",&c[i].car_name);
		printf("Enter milage:");
		scanf("%f",&c[i].milage);
		printf("Enter price:");
		scanf("%d",&c[i].price);
	}
	for(i=0;i<5;i++){
		if(c[i].price>500000){
			printf("\ncar name:%s",c[i].car_name);
			printf("\nmilage:%f",c[i].milage);
			printf("\nprice:%d",c[i].price);
		}
	}
}

