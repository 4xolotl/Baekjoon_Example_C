#include <stdio.h>
#include <string.h>

int main() {
	int i, j, k, a, b;
	char s[30];

	scanf("%d", &a);

	for (i=0; i<a; i++){
		scanf("%d", &b);
		scanf("%s", s);
		for (j=0; j<strlen(s); j++){
			for (k=0; k<b; k++){
				printf("%c", s[j]);
			}
		}
		printf("\n");
	}

	return 0;
}