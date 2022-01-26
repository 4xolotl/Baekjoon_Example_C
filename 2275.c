#include <stdio.h>

int main() {
	int i, k, j=1, n, s=1, a=1;
	
	scanf("%d", &n);
	for (k=1; k<n && j!=n; k+=2){
		for (i=1; i<k && j<n; i++ && j++) {
			printf("%d", i);
		}
		for (; i>0 && j<n; i-- && j++) {
			printf("%d", i);
		}
	}
	printf("\n%d/\n", i);
	
	j=1;
	for (k=2; k<n && j<=n; k+=2){
		for (i=1; i<k && j<n; i++ && j++) {
			printf("%d", i);
		}
		for (; i>0 && j<n; i-- && j++) {
			printf("%d", i);
		}
	}
	printf("\n%d\n", i);

	return 0;
}