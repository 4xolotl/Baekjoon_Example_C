#include <stdio.h>

int main() {
	int t, h, w, n, i, k, nh, nw;

	scanf("%d", &t);
	for (i=0;i<t; i++){
		scanf("%d%d%d", &h, &w, &n);
		nh = n%h;
		if (nh==0) nh=h;
		nw = n/h+1;
		if (n%h==0) nw--;
		printf("%d%02d\n", nh, nw);
	}

	return 0;
}