#include <stdio.h>

int main() {
	int x, y, k, l, t, m, i, j=0, l, sum, n;

	scanf("%d", &t);

	for (i=0; i<t; i++) {
		scanf("%d", &x);
		scanf("%d", &y);
		k = y-x;
		for (n=0;;n++) {
			for (sum=0; k<sum;j++) {
				sum += j;
				if (k < sum) break;
				sum += j;
			}
		}


	}


	return 0;
}