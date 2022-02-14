#include <stdio.h>
#include <math.h>

int main() {
	int t, i=0;
	long long k, x, y;

	scanf("%d", &t);

	for (;i<t;i++) {
		scanf("%lld %lld", &x, &y);
		k=(int)sqrt(y-x);
		if ((y-x)==k*k) printf("%lld\n", 2*k-1);
		else if (k*k<(y-x)&&(y-x)<=k*k+k) printf("%lld\n", 2*k);
		else printf("%lld\n", 2*k+1);
	}
	return 0;
}