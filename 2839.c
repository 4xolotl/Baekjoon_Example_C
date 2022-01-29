#include <stdio.h>

int main() {
	int n, t, f, i=0;

	scanf("%d", &n);

	if (n%5==0) i/=5;
	else if ()i += n/5;
	n %= 5;
	i += n/3;
	if (i==0) printf ("-1");
	else printf("%d", i);

	return 0;
}