#include <stdio.h>

int main(){
	int a[32], i, t;

	for (i=1; i<31; i++) {
		a[i-1] = i;
	}

	for (i=0; i<28; i++) {
		scanf("%d", &t);
		a[t-1]=0;
	}
	
	for (i=0; i<30; i++) {
		if (a[i] != 0) printf("%d\n", a[i]);
	}

	return 0;
}