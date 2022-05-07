#include <stdio.h>

int main() {
	int h[1000], n, m, i, ii, max=0, min=100000000;
	long long int sum;

	scanf("%d%d", &n, &m);

	for (i=0; i<n; i++) {
		scanf("%d", &h[i]);
		if (h[i] > max) max = h[i];
		if (h[i] < min) min = h[i];
	}

	for (i=max-m/n; i>0; i--){
		sum=0;
		for (ii=0; ii<n; ii++) sum+=(h[ii] > i) ? h[ii]-i : 0;
		if (sum >= m) break;
	}
	printf("%d", i);

	return 0;
}