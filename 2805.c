#include <stdio.h>

<<<<<<< HEAD
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
	
=======
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

>>>>>>> 465b1ab242b072699e29971528245b07528a3aea
	return 0;
}