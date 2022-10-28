#include <stdio.h>
int main(){
	float discount12=0.12,discount23=0.23,discount45=0.45;
	float price;
	printf("insert the price\n");
	scanf("%f",&price);
	if(price<60){
		printf("%f, discount of 12 percent",price-price*discount12);
	}else if(price>=60 && price<135){
		printf("%f, discount of 23 percent",price-price*discount23);
	}else{
		printf("%f, discount of 45 percent",price-price*discount45);
	}
	return 0;
}
