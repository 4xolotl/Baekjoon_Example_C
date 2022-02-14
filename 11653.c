#include <stdio.h>

int main() {
	int i=2, n;

	scanf("%d", &n);
	while (n!=1) {
		if (n%i==0) {
			n/=i;
			printf("%d\n", i);
		}
		else i++;
	}
	return 0;
}