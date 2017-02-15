#include <stdio.h>

/*
Conteo de blanks,newlines y tabs en un archivo de texto
*/
int main(void){
	int c;
	long blank_c,tab_c,newline_c;
	blank_c = tab_c = newline_c = 0;
	while((c = getchar())!=EOF){
		if(c == ' ') ++blank_c;
		if(c == '\t') ++tab_c;
		if( c == '\n') ++newline_c;
	}
	printf("blanks: %ld tabs: %ld newlines: %ld",blank_c,tab_c,newline_c);
}
