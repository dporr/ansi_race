#include <stdio.h>
int main(void){
	/*Convierte celcius a fahrenheit*/
	float upper,step;
	float cel,fahr;
	upper=300;
	for(step=0;step<=upper;step+=20){
		cel=step;
		printf("%3.0f\t%6.1f\n", (9.0*cel/5.0)+32, cel);
	}	
	return 1;
}
