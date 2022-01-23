#include <stdio.h>

int main() {
	int r, a[30], n=0, cnt, k, m;
	char b, s; // A=65, Z=90, a=97, z=122
	scanf("%d", &r);
	scanf("%c", &s);
	for (k=0; k<r; k++) {
		for (m=0; m<30; m++) a[m]=0;
		cnt=0;
		scanf("%c", &s);
		while (s>='a' && s<='z') {
			a[s-97]++;
			if (a[s-97]>1) cnt = 1;
			b=s;
			scanf("%c", &s);
			while (s==b && s>='a' && s<='z') {
				scanf("%c", &s);
			}
		}
		if (cnt==0) n++;
	}
	printf("%d", n);

	return 0;
}