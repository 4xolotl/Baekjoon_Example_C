#include <stdio.h>
#include <string.h>

int main() {
	char a[1001];
	int n, i;

	scanf("%d", &n);
	getchar();
	for (i=0; i<n; i++) {
		gets(a);
		printf("%c%c\n", a[0], a[strlen(a)-1]);
	}


	return 0;
}