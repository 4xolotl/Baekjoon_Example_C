#include <stdio.h>

int main() {
	int i, v, a, b;

	scanf("%d%d%d", &a, &b, &v);
	v -= a;	
	i = v/(a-b)+1;
	if (v%(a-b)>0) i++;
	printf("%d", i);

	return 0;
}