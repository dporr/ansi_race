#include <stdio.h>
#define ARRAY_SIZE 10
/*Cuenta la cantidad de ocurrencias de un digio, la cantidad de blanks,  la cantidad de cualquier otro caraceter*/
int main(void){
	int ndigit[ARRAY_SIZE];
	int c,i ,nblank,nother;
	nblank = nother = 0;
	for(i = 0;i < ARRAY_SIZE;i++)
		ndigit[i]=0;
	while((c = getchar()) != EOF){
		if(c >= '0' && c <= '9')
			++ndigit[c-'0']; //se resta -'0' para obtener el valor int de 'c', es decir valor de 1 a 9
		else if(c == ' ' || c == '\t' || c == '\n')
			++nblank;
		else
			++nother;
	}
	printf("digits =");
	for(i = 0;i < ARRAY_SIZE;i++)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n",nblank, nother);
}
