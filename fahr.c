#include <stdio.h>

int main(void){
	/*Imprime los grados fahrenheit de 0 a 300 y su equivalente en celcius;
	*Con punto flotante para mayor precicion
	*/
	float low,upper,step;
	float fahr,celcius;
	low=0;
	upper=300;
	step=20;
	fahr=low;
	while(fahr<=upper){
		celcius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f\t%6.1f\n",fahr,celcius);
		fahr+=step;
	}
	return 1;
}
