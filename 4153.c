#include <stdio.h>

int main() {
	int a, b, c;

	while (1) {
		scanf("%d%d%d", &a, &b, &c);
		if (a==0) break;
		if (a<c) {
			if (a*a+b*b==c*c || a*a+c*c==b*b) printf("right\n");
			else printf("wrong\n");
		}
		else {
			if (b*b+c*c==a*a || a*a+c*c==b*b) printf("right\n");
			else printf("wrong\n");
		}
	}

	return 0;
}