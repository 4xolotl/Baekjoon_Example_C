#include <stdio.h>

int main() {
	int t, n=0, i=0, x, k, j;

	scanf("%d", &t);

	for (; i<t; i++) {
		j=0;
		scanf("%d", &x);
		for (k=1;k<x;k++) {
			if (x%k==0) j++;
		}
		if (j==1) n++;
	}
	printf("%d", n);

	return 0;
}