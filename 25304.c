#include <stdio.h>

int main(){
	int s1, s2=0, n, p, m, i;

	scanf("%d%d", &s1, &n);

	for (i=0; i<n; i++) {
		scanf("%d%d", &p, &m);
		s2 += p*m;
	}

	if (s1==s2) printf("Yes");
	else printf("No");

	return 0;
}