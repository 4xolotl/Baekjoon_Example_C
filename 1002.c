#include <stdio.h>

int main() {
	int x1, y1, r1, x2, y2, r2, t, i;

	scanf("%d", &t);

	for (i=0; i<t; i++) {
		scanf("%d%d%d%d%d%d", &x1, &y1, &r1, &x2, &y2, &r2);
		if (((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))/(r1*r1+r2*r2)==) printf("1");
		else if (((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))<) printf("0");
		else if ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)>r1*r1+r2*r2) printf("2");
	}

	return 0;
}