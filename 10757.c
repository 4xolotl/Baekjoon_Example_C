#include <stdio.h>

int main() {
	char a[10001], b[10001], p, la, lb;
	int i, m=0;
	
	for (i=0;;i++) {
		scanf("%c", &p);
		if (49 <= p && p <= 57) a[i] = p-48;
		else if (p == ' ') {
			la = i;
			break;
		}
	}
	for (i=0;;i++) {
		scanf("%c", &p);
		if (49 <= p && p <= 57) b[i] = p-48;
		else {
			lb = i;
			break;
		}
	}

	if (la < lb) {
		for (i=0; i<la; i++) {
			if (a[i] + b[i] > 9) {
				if (b[i+1] < 10 && b[i+1] > 0) b[i-1] += 1;
				else {
					m=1;
					b[i-1] = 1;
				}
			}
			else {
				b[i] = (a[i] + b[i]) % 10;
			}
		}
		if (m==1) for (i=0; i<lb+1; i++) printf("%d", b[i]);
		else for (i=0; i<lb; i++) printf("%d", b[i]);
	}
	else if (la==lb) {
		for (i=0; i<lb; i++) {
			if (a[i] + b[i] > 9) {
				if (b[i+1] < 10 && b[i+1] > 0) b[i-1] += 1;
				else {
					m=1;
					b[i-1] = 1;
				}
			}
			else b[i] = (a[i] + b[i]) % 10;
		}
		if (m==1) for (i=0; i<lb+1; i++) printf("%d", b[i]);
		else for (i=0; i<lb; i++) printf("%d", a[i]);
	}
	else if (lb < la) {
		for (i=0; i<lb; i++) {
			if (a[i] + b[i] > 9) {
				if (b[i+1] < 10 && b[i+1] > 0) b[i-1] += 1;
				else {
					m=1;
					b[i-1] = 1;
				}
			}
			else {
				a[i] = (a[i] + b[i]) % 10;
			}
		}
		if (m==1) for (i=0; i<la+1; i++) printf("%d", a[i]);
		else for (i=0; i<la; i++) printf("%d", a[i]);
	}
	return 0;
}