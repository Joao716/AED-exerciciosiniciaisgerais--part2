#include <stdio.h>
float getSum(int num);
int main(){
	int num;
	do{
		printf("insert a number\n");
		scanf("%d",&num);
	}while(num<=0);
	printf("%f",getSum(num));
	return 0;
}
float getSum(int num){
	float result;
	int i;
	for(i=0;i<num;i++){
		result+=(float)1/(i+1);
	}
	return result;
}
