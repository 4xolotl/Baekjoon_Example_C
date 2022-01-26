#include <stdio.h>

int main() {
	int i, k, j=1, n, a=1;
	
	scanf("%d", &n);
	n++;
	for (k=1; k<n && j!=n; k+=2){
		for (i=1; i<k && j<n; i++ && j++) {
			a=i;
		}
		for (; i>0 && j<n; i-- && j++) {
			a=i;
		}
	}
	printf("%d/", a);
	
	j=1;
	for (k=2; k<n && j<=n; k+=2){
		for (i=1; i<k && j<n; i++ && j++) {
			a=i;
		}
		for (; i>0 && j<n; i-- && j++) {
			a=i;
		}
	}
	printf("%d", a);

	return 0;
}