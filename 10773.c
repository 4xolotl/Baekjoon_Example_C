#include <stdio.h>

int main(){
	int n, i, list[100010], sum=0, j=0;

	scanf("%d", &n);

	for (i=0; i<n; i++) {
		scanf("%d", &list[j]);
		if (list[j] == 0) {
			j--;
		}
		else {
			j++;
		}
	}

	for (i=0; i<j; i++) {
		sum += list[i];
	}

	printf("%d", sum);

	return 0;
}