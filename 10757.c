#include <stdio.h>

int main() {
	char a[10010], b[10010], p, la, lb;
	int i, m=0;
	
	for (i=1;;i++) {
		scanf("%c", &p);
		if (48 <= p && p <= 57) a[i] = p-48;
		else {
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
	if (la<lb) {
		for (i=0; i<=lb-la; i++) 
			p=a[i];
			a[i+1]=p;
		la=lb;
	}
	if (la==lb) {
		for (i=0; i<=lb; i++) {
			if (a[la-i] + b[lb-i] > 9) {
				b[lb-i-1] += 1;
			}
			b[lb-i] = (a[la-i] + b[lb-i]) % 10;
		} for (i=0; i<lb; i++) printf("%d", b[i]);
	}
	else if (la < lb) {
		for (i=0; i<=lb; i++) {
			if (i<=la) {
				if (a[la-i] + b[lb-i] > 9) {
					b[lb-i-1] += 1;
				}
				b[lb-i] = (a[la-i] + b[lb-i]) % 10;
			}
			else {
				if(b[lb-1]>9) b[lb-i-1] += 1;
			}
		}for (i=1; i<lb; i++) printf("%d", b[i]);
	}
	else if (lb < la) {
		for (i=0; i<lb+1; i++) {
			if (a[la-i] + b[lb-i] > 9) {
				a[la-i-1] += 1;
			}
			a[la-i] = (a[la-i] + b[lb-i]) % 10;
			
		}
		for (i=1; i<la; i++) printf("%d", a[i]);
	}
	return 0;
}