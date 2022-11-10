#include <stdio.h>

int main() {
	int i, k, n, m, t, j=2;
	int a[100][100]={0};

	scanf("%d%d", &n, &m);

	while (j--) {
		for (i=0; i<n; i++) {
			for (k=0; k<m; k++) {
				scanf("%d", &t);
				a[i][k] += t;
			}
		}
	}

	for (i=0; i<n; printf("\n"), i++) {
		for (k=0; k<m; printf(" "), k++) {
			printf("%d", a[i][k]);
		}
	}

	return 0;
}