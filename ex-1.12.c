#include <stdio.h>
#define IN 1 /*Inside a word*/
#define OUT 0 /*Outside a word*/

/*Implementacion del comando wc*/

int main(void){
	long char_c,word_c,line_c;
	int c,state;
	state = OUT;
	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\t' || c == '\n'){
			state = OUT;
			putchar('\n');
			continue;
		}
		/*else if(state == OUT){
			state = IN;
		} */
		putchar(c);
	}
 	//printf("newlines: %ld, words: %ld, chars: %ld\n", line_c, word_c, char_c);
}
