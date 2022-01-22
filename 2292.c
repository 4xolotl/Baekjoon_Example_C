#include <stdio.h>

int main() {
	int n, b=2, c=6, d=1;

	scanf("%d", &n);

	while (b <= n) {
		b += c;
		c += 6;
		d++;
	}

	printf("%d", d);
    
	return 0;
}