#include <stdio.h>

/*
Reemplaza:
	tabs con la literal '\t'
	backspace con '\b'
	backslash con '\\'
*/
int  main(void){
	int c;
	while((c = getchar()) != EOF){
		if(c == '\t'){
			 printf("\\t");
			continue;	
		}
		/*if(c == ' '){
			 printf("\\b");
			continue;
		}*/
		if(c == '\\'){
			printf("\\\\");
			continue;
		}
		putchar(c);	
	}

	return 1;
}
