#include <stdio.h>

int main() {
	int i=0, a=1, cnt=0; // a=0 -> blank, a=1 -> letter
	char s; // 'A' <= s <= 'z'
	
	scanf("%c", &s);
	if (s== ' ') scanf("%c", &s);
	
	while (1==1){
		while (s <= 'z' && s >= 'A' && s != ' ') {
			if (a==1) cnt++;
			scanf("%c", &s);
			a=0;
		}
		if (s == ' ') a=1, scanf("%c", &s);
		if ((s <= 'z' && s >= 'A' && s != ' ')!= 1) break;
	}

	printf("%d", cnt);
	
	
	return 0;
}