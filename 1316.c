#include <stdio.h>

int main() {
	int r, a[30], i, n=0, cnt, k, m;
	char b, s; // A=65, Z=90, a=97, z=122
	
	scanf("%d", &r);
	for (k=0; k<r; k++) {
		for (m=0; m<30; m++) a[m]=0;
		cnt=0;
		scanf("%c", &s);
		while (s>='a' && s<='z') {
			if (a[s-26]>1) {
				cnt=1;
				break;
			}
			a[s-26]++;
			b=s;
			while(s==b){
				scanf("%c", &s);
			}
		}
		if (cnt=0) n++;
	}
	printf("%d", n);

	return 0;
}