#include <stdio.h>

int main(){
	int n, i, a, b, c, sum=0, tmp;

	scanf("%d", &n);

	for (i=0; i<n; i++) {
		sum = i;
		tmp = i;

		for (;tmp>0;tmp/=10) {
			sum += tmp%10;
		}

		if (sum==n) {
			printf("%d", i);
			return 0;
		}
	}
	printf("0");
	

	return 0;
}