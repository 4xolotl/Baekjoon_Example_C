#include <stdio.h>

int main() {
	int a, b, i, j, c, t;

	scanf("%d", &t);
	
	for (i=0; i<t; i++) {
		scanf("%d%d", &a, &b);
		c=1;
		for (j=0; j<b; j++) {
			c *= a;
			c %= 10;
			if (c==0) c=10;
		}
		printf("%d\n", c);
	}
	
	return 0;
}