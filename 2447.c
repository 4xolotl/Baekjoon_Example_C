#include <stdio.h>
#include <math.h>

void sss(int n) {
	int i;

	for (i=0; i<n; i++) {
		printf("***");
	}
}

void sbs(int n) {
	int i;

	for (i=0; i<n; i++) {
		printf("* *");
	}
}

void bbb(int n) {
	int i;

	for (i=0; i<n; i++) {
		printf("   ");
	}
}

int main() {
	int i, j, m, l=3;
	float n, k;

	scanf("%f", &n);
	k = log(n) / log(3.0);

	sss(n/3);
	printf("\n");
	l++;
	sbs(n/3);
	printf("\n");
	l++;
	sss(n/3);
	printf("\n");
	l++;
	for (i=2; i<=n/3+1; i++) {
		if (i%3==0) bbb(1);
		else {
			if (l%3==0)sss(1);
			else sbs(1);
		}
	}

	return 0;
}