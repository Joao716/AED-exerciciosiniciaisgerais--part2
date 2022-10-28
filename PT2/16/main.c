#include <stdio.h>
#include <stdbool.h>
bool is_prime(int num);
int main(){
	int num;
	do{
		printf("insert a number\n");
		scanf("%d",&num);
	}while(num<0);
	if(is_prime(num)){
		printf("the number is prime");
	}else{
		printf("the number's not prime");
	}
	return 0;
}
bool is_prime(int num){
	bool result=true;
	int aux=num;
	while(aux>1){
		if(num%aux==0 && aux!=num){
			result=false;
			break;
		}
		aux--;
	}
	return result;
}
