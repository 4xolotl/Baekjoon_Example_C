#include <stdio.h>

int main() {
	int n, k, ary[10001]={0}, i, t;
	scanf("%d%d", &n, &k);

	for (i=0; i<n; i++) {
		scanf("%d", &t);
		ary[t]++;
	}

	for (i=10000; ; i--) {
		k-=ary[i];
		if (k<=0) break;
	}
	printf("%d", i);

	return 0;
}