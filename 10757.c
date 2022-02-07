#include <stdio.h>

int main() {
	char a[10010], b[10010], p, la, lb;
	int i, m;
	
	for (i=1;;i++) {
		scanf("%c", &p);
		if (48 <= p && p <= 57) a[i] = p-48;
		else break;
	}
	la = i;
	for (i=1;;i++) {
		scanf("%c", &p);
		if (48 <= p && p <= 57) b[i] = p-48;
		else break;
	}
	lb = i;
	a[0]=0;
	b[0]=0;
	if (la<lb) {
		m=lb-la;
		for (i=0; i<m; i++) a[lb-i-2]=a[lb-i-2];
		for (i=0; i<m; i++) a[i]=0;
		la=lb;
	}
	else if (lb<la) {
		m=la-lb;
		for (i=0; i<m; i++) b[la-i]=b[la-i];
		for (i=0; i<m; i++) b[i]=0;
		lb=la;
	}
	for (i=0; i<=lb; i++) {
		if (a[la-i] + b[lb-i] > 9) {
			b[lb-i-1] += 1;
		}
		b[lb-i] = (a[la-i] + b[lb-i]) % 10;
	} for (i=0; i<lb; i++) printf("%d", b[i]);
	return 0;
}