#include <stdio.h>
int main() {
	int map[100][100] = {0}, n, x, y, i, k, s=0;

	scanf("%d", &n);
	while (n--) {
		scanf("%d%d", &x, &y);
		i=k=10;
		printf("%d %d", i, k);
		for (i=x; i<x+10; i++) {
			for (k=y; k<y+10; k++) {
				if (map[i][k]!=1) {
					s++;
					map[i][k]=1;
				}
			}
		}
	}
	printf("%d", s);


	return 0;
}