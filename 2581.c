#include <stdio.h>

int main() {
	int m, n=0, i=0, x, k, j, l, min=10001, sum=0;

	scanf("%d%d", &m, &l);

	for (i=m; i<=l; i++) {
		j=0;
		for (k=1;k<i;k++) {
			if (i%k==0) j++;
		}
		if (j==1) {
			n++;
			if (i<min) 
				min=i;
			sum += i;
		}
	}
	if (sum!=0) printf("%d\n%d", sum, min);
	else printf("-1");

	return 0;
}