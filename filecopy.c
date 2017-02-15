#include <stdio.h>
/*Lee e imprime los caracteres hasta encontrar un EOF.*/
int main(void){
	int c; /*int es capaz de almacenar el valor EOF,char no*/
	while((c = getchar()) != EOF)
		printf("%c",c);
}
