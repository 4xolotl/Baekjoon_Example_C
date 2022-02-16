#include <stdio.h>

int main() {
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	printf("%d %d", (a+c/60+(b+c%60)/60)%24, (b+c%60)%60);

	return 0;
}