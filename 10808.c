#include <stdio.h>

int main() {
	int a[100]={0}, i=-26;
	char c=getchar();
	
	while (c!=EOF) {
		a[c-97]++;
		c=getchar();
	}
	while (i++){
		printf("%d ", a[i+25]);
	}

	return 0;
}