#include <stdio.h>
int main(){
	int num,biggest=0;
	do{
		scanf("%d",&num);
		biggest=num>biggest?num:biggest;
		printf("%d\n",biggest);
	}while(num!=0);
	return 0;
}
