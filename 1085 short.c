#include <stdio.h>

int main() {
	int x, y, w, h;

	scanf("%d%d%d%d", &x, &y, &w, &h);
	
	printf ("%d", (x<=w/2)?(y<h/2)?(x<y)?x:y:(x<h-y)?x:h-y:(y<=h/2)?(w-x<y)?w-x:y:(w-x<h-y)?w-x:h-y);
	
	return 0;
}