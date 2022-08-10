#include <stdio.h>

int main(){
	int i, pick[30010], n, max=0, j, cnt;

	scanf("%d", &n);

	for (i=0; i<n; i++) {
		scanf("%d", &pick[i]);
	}

	for (i=0; i<n-1; i++) {
		cnt = 0;
		for (j=i+1; j<n; j++) {
			if (pick[i]>pick[j]) {
				cnt++;
			}
			else break;
		}
		max = (max < cnt ? cnt:max);
	}

	printf("%d", max);
	
	return 0;
}