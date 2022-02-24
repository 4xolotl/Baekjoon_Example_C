#include <stdio.h>

int main() {
	int t, n, i, j, a, b, k;

	scanf("%d", &t);

	for (k=0; k<t; k++) {
		scanf("%d", &n);
		a = n/2;
		while (1) {
			j=1;
			for (i=1; i<a; i++) {
				if (a%i==0) j++;
			}
			if (j==2) {
				b=n-a;
				j=1;
				for (i=1; i<b; i++) {
					if (b%i==0) j++;
				}
				if (j==2) break;
			}
			a--;
		}
		printf("%d %d\n", a, b);
	}
	return 0;
	
}