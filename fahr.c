#include <stdio.h>

int main(void){
	/*Imprime los grados fahrenheit de 0 a 300 y su equivalente en celcius*/
	int low=0;
	int upper=300;
	int step=20;
	int fahr=low;
	while(fahr<=upper){
		int celcius = 5 * (fahr - 32)/9;
		printf("%d\t%d\n",fahr,celcius);
		fahr+=step;
	}
	return 1;
}
