#include <stdio.h>
#include <string.h>

int main() {
	int i, j;
	char ary[11];
	char t;
	gets(ary);

	for (i=0; i<strlen(ary)+1; i++) {
		for (j=1; j<strlen(ary)-i; j++) {
			if (ary[j] > ary[j-1]) {
				t = ary[j-1];
				ary[j-1] = ary[j];
				ary[j] = t;
			}
		}
	}
	puts(ary);

	return 0;
}