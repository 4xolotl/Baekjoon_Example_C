#include <stdio.h>

int main() {
	int n, k, a, i, k;

	scanf("%d", &n);

	for (k=0; k<n/3; k++) {
		for (i=0;i<n/3; i++) {
			printf("***");
		}
		printf("\n");
		for (i=0;i<n/3; i++) {
			printf("* *");
		}
		printf("\n");
		for (i=0;i<n/3; i++) {
			printf("***");
		}
	}

	return 0;
}