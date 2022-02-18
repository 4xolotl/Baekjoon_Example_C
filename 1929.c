#include <stdio.h>

int main() {
	int m, n, j, k, i, a[100000];

	scanf("%d%d", &m, &n);
	
	for (i=m; i<=n; i++) a[i]=i;

	for (i=2; i<n/2; i++) {
		for (j=2; j<=n; j++) a[i*j]=0;
	}
	for (i=m; i<=n; i++) if (a[i]!=0) printf("%d\n", a[i]);

	return 0;
}