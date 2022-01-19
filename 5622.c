#include <stdio.h>

int main() {
	int sum=0; 
	char s; // A=65, Z=90, a=97, z=122
	
	while (0==0) {
		scanf("%c", &s);
		if (s < 'A' || s > 'Z') {
			printf("%d", sum);
			break;
		}
		if (s <= 'C') sum += 3;
		else if (s <= 'F') sum += 4;
		else if (s <= 'I') sum += 5;
		else if (s <= 'L') sum += 6;
		else if (s <= 'O') sum += 7;
		else if (s <= 'S') sum += 8;
		else if (s <= 'V') sum += 9;
		else if (s <= 'Z') sum += 10;
	}
	return 0;
}