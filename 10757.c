#include <stdio.h>
#include <string.h>

int main() {
	char a[10001], b[10001], p;
	int i, m;
	
	for (i=0;;i++) {
		scanf("%c", &p);
		if (49 <= p && p <= 57) a[i] = p-48;
		else if (p == ' ') break;
	}
	for (i=0;;i++) {
		scanf("%c", &p);
		if (49 <= p && p <= 57) b[i] = p-48;
		else break;
	}

	if (sizeof(a) < sizeof(b)) {
		for (i=sizeof(a); i>=0; i--) {
			if (a[i] + b[i] > 9) {
				a[i+1] += 1;
			}
			else {
				a[i] = (a[i] + b[i]) % 10;
			}

			
		}
	}

	return 0;
}