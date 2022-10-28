#include <stdio.h>
int main(){
	const float distributor=0.1;
	const float taxes=0.46;
	float factoryPrice,result;
	printf("what's the factory price\n");
	scanf("%f",&factoryPrice);
	result=factoryPrice+factoryPrice*distributor+factoryPrice*taxes;
	printf("%f",result);
	return 0;
}
