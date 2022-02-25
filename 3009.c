#include <stdio.h>

int main() {
	int a, b, c, d, e, f;

	scanf("%d%d", &a, &b);
	scanf("%d%d", &c, &d);
	scanf("%d%d", &e, &f);

	printf("%d %d", (a==c)?e:(c==e)?a:c, (b==d)?f:(d==f)?b:d);

	return 0;
}