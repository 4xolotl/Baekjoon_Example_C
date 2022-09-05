#include <stdio.h>

int main() {
	int i, k, n, money[13], year, temp;

	scanf("%d%d", &money, &year);

	for (i=1; i<year+1; i++) {
		money[i] = money[i-1]*1.05;
		if (i>=3) {
			money[i] = (money[i] < money[i-3]*1.2) ? money[i-3]*1.2 : money[i];
		}
		if (i>=5) {
			money[i] = (money[i] < money[i-5]*1.35) ? money[i-5]*1.35 : money[i];
		}
	}

	printf("%d", money[year]);

	return 0;
}