#include <stdio.h>

int main(){
	char s=getchar();

	while(s!=EOF) {
		printf("%c", s);
		s = getchar();
	}
	
	return 0;
}