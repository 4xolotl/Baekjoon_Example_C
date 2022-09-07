#include <stdio.h>

int main() {
	int i, j, n, chal, hand, arr[100], up;

	scanf("%d", &n);
	scanf("%d", &arr[0]);

	for (i=1; i<n; i++) {
		scanf("%d", &chal);

		for (j=0; j<i-1; j++) {
			if (chal< arr[i]) {
				hand = arr[i];
				arr[i] = chal;
				chal = hand;
			}
			else hand = chal;
		}
		arr[j+1] = hand;
	}

	for (i=0; i<n; i++) printf("%d\n", arr[i]);
	
	return 0;
}