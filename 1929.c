#include <stdio.h>

int main() {
	int m, n, j, k, i, a[1000001];

	scanf("%d%d", &m, &n);

	for (i=m;i<=n;i++) a[i]=i;

	for (i=m; i<=n; i++) {
		j=0;
		for (k=1;k<i;k++) {
			if (i%k==0) j++;
		}
		if (j==1) {
			printf("%d\n", i);
		}
	}
	return 0;
}