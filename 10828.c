#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() {
	int a, b, c, i, j, n, tmp, num=0, st[100050], cu=0;
	char *pu = "push", *to = "top", *si = "size", *em = "empty", *po = "pop";
	char s1[10], s2[10];

	scanf("%d", &n);
	memset(st, -1, sizeof(st));

	for (i=0; i<n; i++) {
		scanf("%s", s1);

		if (strcmp(pu, s1) == 0) {
			cu+=1;
			scanf("%d", &num);
			st[cu] = num;
		}
		else if (strcmp(po, s1) == 0) {
			printf("%d\n", st[cu]);
			if (cu!=0) {
				st[cu]=-1;
				cu-=1;
			}
		}
		else if (strcmp(to, s1) == 0) {
			printf("%d\n", st[cu]);
		}
		else if (strcmp(si, s1) == 0) {
			printf("%d\n", cu);
		}
		else if (strcmp(em, s1) == 0) {
			if (cu==0) printf("1\n");
			else printf("0\n");
		}
		
	}

	return 0;
}