#include <stdio.h>
#include <string.h>

int main() {
	int i = 0;
	char s[120];
	int st[26]={-1};

	for (i=0; i<26; i++)
		st[i] = -1;

	scanf("%s", s);

	for (i = 0; i < strlen(s); i++) {
		if (st[s[i] - 'a'] == -1)
			st[s[i] - 'a'] = i;
		
	}

	for (i=0; i<26; i++)
		printf("%d ", st[i]);
	return 0;
}