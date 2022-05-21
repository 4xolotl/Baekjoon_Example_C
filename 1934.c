#include <stdio.h>

int main() {
	int t, j, k, a, b, i;

	scanf("%d", &t);

	for (i=0; i<t; i++) {
		j=1;
		k=1;

		scanf("%d%d", &a, &b);

		while (a*j != b*k) {
			if (a*j < b*k) j++;
			else k++;
		}
		printf("%d\n", a*j);
	}
	
	return 0;
}