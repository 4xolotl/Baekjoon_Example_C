#include <stdio.h>

int main() {
	int n, k, i, j, res[20][20];
	
	for (i=0; i<17; i++) res[i][1] = 1;
	for (j=1; j<17; j++) res[0][j] = j;

	for (i=1; i<16; i++) {
		for (j=2; j<16; j++) {
			res[i][j] = res[i][j-1] + res[i-1][j];
		}
	}

	scanf("%d", &n);

	for (i=0; i<n; i++) {
		scanf("%d", &k);
		scanf("%d", &j);
		printf("%d\n", res[k][j]);
	}

	return 0;
}