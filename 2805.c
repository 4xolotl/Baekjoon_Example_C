#include <stdio.h>

int main (int argc, char*argv[]){
	int n, m, a[1000000], i, ii, sum, max=0;

	scanf("%d %d", &n, &m);

	for (i=0; i<n; i++) {
		scanf("%d", &a[i]);
		if (a[i] > max) max = a[i];
	}
	for (i=0; i<=max; i++) {
		sum=0;
		for (ii=0; ii<n; ii++) {
			if (a[ii] > i){
				sum += a[ii] - i;
			}
		}
		if (sum < m) {
			break;
		}
	}
	printf("%d", i-1);
	
	return 0;
}