#include <stdio.h>
#define IN 1 /*Inside a word*/
#define OUT 0 /*Outside a word*/

/*Implementacion del comando wc*/

int main(void){
	long char_c,word_c,line_c;
	int c,state;
	state = OUT;
	char_c = word_c = line_c = 0;
	while((c = getchar()) != EOF){
		++char_c;
		if(c == '\n') 
			++line_c;
		if(c == ' ' || c == '\t' || c == '\n'){
			state = OUT;
		}
		else if(state == OUT){
			state = IN;
			++word_c;
		} 
	}
	printf("newlines: %ld, words: %ld, chars: %ld\n", line_c, word_c, char_c);
}
