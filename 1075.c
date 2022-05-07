#include <stdio.h>

int main() {
	int a, b, c, i;

	scanf("%d%d", &a, &b);

	for (i=0; i<100; i++) {
		if ((a/100*100 + i)%b == 0) break;
	}
	printf("%02d", i);

	return 0;
}