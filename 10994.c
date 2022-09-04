#include <stdio.h>

void star(int x, int y, int n) {
	if (x%2 == 0 && y%2 == 0) {
		printf(" ");
		return;
	}
	else if (n==1) {
		printf("*");
		return;
	}
	else star(x/3, y/3, n/3);
}

int main() {
	int i, n, x, y, s;

	scanf("%d", &n);

	for (y=0; y<4*n-3; y++) {
		for (x=0; x<4*n-3; x++) {
			if ()
			printf("*");
		}
		printf("\n");
	}

	return 0;
}