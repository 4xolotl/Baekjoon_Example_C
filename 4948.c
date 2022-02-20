#include <stdio.h>

int main() {
	int m, n, j, k=0, i, a[250000];

	scanf("%d", &m);
	n=2*m;
	while (n!=0) {
		k=0;
		for (i=m; i<=n; i++) a[i]=i;
	
		for (i=2; i<=n/2; i++) {
			for (j=i; j<=n/i; j++) 
				if (i*j<=n && i*j>=m) {
					a[i*j]=0;
				}
		}
		for (i=m+1; i<=n; i++) if (a[i]!=0) k++;
		printf("%d\n", k);
		scanf("%d", &m);
		n=2*m;
	}
	return 0;
	
}