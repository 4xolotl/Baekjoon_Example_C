#include <stdio.h>
#include <string.h>

int main() {
	char a[10001], b[10001], p;
	int i, up, m;
	
	for (i=0;;i++) {
		scanf("%c", &p);
		if (1 <= p && p <= 9) a[i] = p;
		else if (p == ' ') break;
	}
	for (i=0;;i++) {
		scanf("%c", &p);
		if (1 <= p && p <= 9) b[i] = p;
		else if (p == ' ') break;
	}

	if (sizeof(a) < sizeof(b)) {
		for (i=0; i<sizeof(a); i++) {
			if (a[i] + b[i] > 9) {
				a[i+1] = a[i+1]+1;
			}
		}
	}
	return 0;
}