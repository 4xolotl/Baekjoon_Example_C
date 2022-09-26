#include <stdio.h>

int main() {
	int ary[10001]={0}, i, n, t;
	scanf("%d", &n);

	for (i=0; i<n; i++) {
		scanf("%d", &t);
		ary[t]++;
	}
	t=0;
	for (i=0; i<n;) {
		if (ary[t]>0) {
			printf("%d\n", t);
			ary[t]--;
			i++;
		}
		else if (ary[t]==0)	t++;
	}

	return 0;
}