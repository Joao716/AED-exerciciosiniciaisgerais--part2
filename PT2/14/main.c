#include <stdio.h>
int main(){
	int num;
	printf("insert a number\n");
	scanf("%d",&num);
	if(num>=15 && num<=30){
		printf("*");
	}else{
		printf("##");
	}
	return 0;
}
