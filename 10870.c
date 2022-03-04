#include <stdio.h>

int main() {
	int n[25]={0, 1}, i=1, t;

	scanf("%d", &t);
	
	for (; i<t; i++) {
		n[i+1]= n[i] + n[i-1];
	}
	
	printf("%d", n[t]);

	return 0;
}