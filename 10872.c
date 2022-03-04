#include <stdio.h>

int p(int n, int d);

int main() {
	int n;

	scanf("%d", &n);
	printf("%d", p(n, 1));
	return 0;
}

int p(int n, int d) {
	if (d==n) return d;
	d*=n;
	d++;
	p(n, d);
}