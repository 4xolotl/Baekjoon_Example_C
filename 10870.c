#include <stdio.h>

int p(int a, int b, int c, int t) {
	if (c==t) return a;
	
	return p(b, a+b, ++c, t);
}
int main() {
	int  t;

	scanf("%d", &t);
		
	printf("%d", p(0, 1, 0, t));

	return 0;
}

