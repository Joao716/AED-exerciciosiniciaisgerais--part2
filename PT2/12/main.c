#include <stdio.h>
int main(){
	int input;
	scanf("%d",&input);
	switch(input){
		case 1:
			printf("alimento nao perecivel");
			break;
		case 2:
			printf("alimento perecivel");
			break;
		case 3:
			printf("vestuario");
			break;
		case 4:
			printf("higiene");
			break;
		case 5:
			printf("utensilios domesticos");
			break;
		case 6:
			printf("equipamento informatico");
			break;
		default:
			printf("codigos invalidos");
			break;
	}
	return 0;
}
