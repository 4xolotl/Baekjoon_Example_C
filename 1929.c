#include <stdio.h>

int main() {
	int m, n, j, k, i, a[1000010];

	scanf("%d%d", &m, &n);
	
	for (i=m; i<=n; i++) a[i]=i;

	for (i=2; i<=n/2; i++) {
		for (j=i; j<=n/i; j++) 
			if (i*j<=n && i*j>=m) {
				a[i*j]=0;
			}
	}
	if (m==1) m=2;
	for (i=m; i<=n; i++) if (a[i]!=0) printf("%d\n", a[i]);

	return 0;
}