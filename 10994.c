#include <stdio.h>

int main() {
	int i, n, x, y, s;

	scanf("%d", &n);

	for (y=0; y<4*n-3; y++) {
		for (x=0; x<4*n-3; x++) {
			if (y%2==0) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}