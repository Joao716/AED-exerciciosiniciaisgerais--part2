#include <stdio.h>
int numYears(float h1,float h2,float rate1,float rate2);
int main(){
	printf("%d",numYears(1.5,1.3,0.02,0.03));
	return 0;
}
int numYears(float h1,float h2,float rate1,float rate2){
	int i=0;
	float h1_initial=h1,h2_initial=h2;
	for(i=0;h1_initial>=h2_initial;i++){
	 	h1_initial+=rate1;
		h2_initial+=rate2;
	}
	return i;
}
