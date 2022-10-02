#include <stdio.h>

int main() {
	int a, b;

	scanf("%d%d", &a, &b);

	printf("%d", (a*((100-b))<10000)?1:0);
	return 0;
}