#include <stdio.h>

int main(void){
	int c;
	int blank_c = 0;
	while((c = getchar())!=EOF){
		if(c == ' ') ++blank_c;
		if(c != ' ') blank_c = 0;
		if(blank_c <= 1)
			printf("%c",c);
	}

}
