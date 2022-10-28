#include <stdio.h>
int main(){
	float C,F;
	printf("choose a temperature in celsius\n");
	scanf("%f",&C);
	F=(float)(9/5)*C;
	F+=32.0;
	printf("\n->%f",F);
	return 0;
}
