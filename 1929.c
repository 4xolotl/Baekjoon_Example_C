#include <stdio.h>

int main() {
	int m, n, j, k, i, a[1000001];
	
	scanf("%d%d", &m, &n);
	for (i=m;i<=n;i++) a[i]=i;

	for (i=2; i<n/2; i++) {
		for (j=2;j<n/i;j++) if (i%j==0) a[i]=0;
	}
	for (i=m;i<=n;i++) if (a[i]!=0 )printf("%d", a[i]=i);
	
	return 0;
}