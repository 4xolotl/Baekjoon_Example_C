#include <stdio.h>

int main() {
	int t, n=0, i=0;
	long long k, x, y, sum=0, j=1;

	scanf("%d", &t);

	for (; i<t; i++) {
		scanf("%lld", &x);
		scanf("%lld", &y);
		k=y-x;
		for (;k>sum;n++) {
			sum+=j;
			n++;
			if (k<=sum) break;
			sum+=j;
			j++;
		}
		printf("%d", n);
	}
	return 0;
}