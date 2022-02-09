#include <stdio.h>

int main() {
	char a[10010], b[10010], p;
	int i, m, la, lb;
	
	for (i=1;;i++) {
		scanf("%c", &p);
		if (48<=p && p<=57) a[i]=p-48;
		else break;
	}
	la=i-1;
	for (i=1;;i++) {
		scanf("%c", &p);
		if (48<=p && p<=57) b[i]=p-48;
		else break;
	}
	lb=i-1;
	a[0]=0;
	b[0]=0;
	if (la<lb) {
		m=lb-la;
		for (i=0; i<lb; i++) a[lb-i]=a[la-i];
		for (i=0; i<=m; i++) a[i]=0;
		la=lb;
	}
	else if (lb<la) {
		m=la-lb;
		for (i=0; i<lb; i++) b[la-i]=b[lb-i];
		for (i=0; i<=m; i++) b[i]=0;
		lb=la;
	} m=0;
	for (i=0; i<lb; i++) {
		if (a[la-i] + b[lb-i] > 9) {
			if (i==lb-1) m=1;
			b[lb-i-1] += 1;
		}
		b[lb-i]= (a[la-i]+b[lb-i]) % 10;
	}
	if (m==1) i=0;
	else i=1;
	for (;i<=lb; i++) printf("%d", b[i]);
	return 0;
}