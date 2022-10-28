#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
int main(){
	float weight,height;
	bool is_male;
	do{
		printf("what's your height?\n");
		scanf("%f",&height);
	}while(height<=0);
	char input;
	do{
		printf("are you male?[y/n]\n");
		input=getch();
	}while(input!='y' && input!='Y' && input!='n' && input!='N');
	is_male=input=='y' || input=='Y';
	if(is_male){
		weight=(height*72.7)-56;
		printf("\n%f",weight);
	}else{
		weight=(height*61.1)-42.7;
		printf("\n%f",weight);
	}
	return 0;
}
