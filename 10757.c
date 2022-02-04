#include <stdio.h>

int main() {
	char a[10010], b[10010], p, la, lb;
	int i, m=0;
	
	for (i=1;;i++) {
		scanf("%c", &p);
		if (48 <= p && p <= 57) a[i] = p-48;
		else if (p == ' ') {
			la = i;
			break;
		}
	}
	for (i=1;;i++) {
		scanf("%c", &p);
		if (48 <= p && p <= 57) b[i] = p-48;
		else {
			lb = i;
			break;
		}
	}
	a[0]=0;
	b[0]=0;
	if (la==lb) {
		for (i=1; i<=lb; i++) {
			if (a[la-i] + b[lb-i] > 9) {
				if (b[lb-i-1] < 10 && b[lb-i-1] >= 0) b[lb-i-1] += 1; //반올림 함수 만들기
				else {
					m=1;
					b[lb-i-1] = 1;
				}
			}
			else b[lb-i] = (a[la-i] + b[lb-i]) % 10;
		}
		if (m==1) for (i=0; i<lb+1; i++) printf("%d", b[i]);
		else for (i=1; i<lb; i++) printf("%d", b[i]);
	}
	else if (la < lb) {
		for (i=0; i<=la; i++) {
			if (a[la-i] + b[lb-i] > 9) {
				b[lb-i-1] += 1;
			}
			else {
				b[lb-i] = (a[la-i] + b[lb-i]) % 10;
			}
		}
		for (i=0; i<lb; i++) printf("%d", b[i]);
	}
	else if (lb < la) {
		for (i=0; i<=lb; i++) {
			if (a[la-i] + b[lb-i] > 9) {
				a[la-i-1] += 1;
			}
			else {
				a[la-i] = (a[la-i] + b[lb-i]) % 10;
			}
		}
		for (i=0; i<la; i++) printf("%d", a[i]);
	}
	return 0;
}