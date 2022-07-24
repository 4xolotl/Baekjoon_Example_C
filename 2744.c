#include <stdio.h>

int main(){
	char c;

	scanf("%c", &c);

	while (c != '\n') {
		if (c > 'Z') printf("%c", c-32);
		else printf("%c", c+32);
		scanf("%c", &c);
	}


	return 0;
}