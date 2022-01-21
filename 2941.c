#include <stdio.h>

int main() {
	int l=0; 
	char a='a', b='a', c='a'; // A=65, Z=90, a=97, z=122
	
	while (0==0) {
		scanf("%c", &a);
		if (a == '='){
			if (b == 'z' && c == 'd')
				l--;
		}
		else if (a == 'j'){
			if (b == 'n' || b == 'l') {}
			else
				l++;
		}
		else if (a == '-') {}
		else if (a < 'a' || a > 'z')
			break;
		else
			l++;
		c=b;
		b=a;
	}

	printf("%d", l);

	return 0;
}