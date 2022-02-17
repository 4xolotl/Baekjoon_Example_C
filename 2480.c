#include <stdio.h>

int main() {
	int a, b, c, p=0, i=3;

	scanf("%d%d%d", &a, &b, &c);
	
	if (a==b && a==c && b==c) printf("%d", 10000+a*1000);
	else if (a!=b && a!=c && b!=c) printf("%d", ((a<b) ? ((c<b) ? b : (a<c) ? c : a) : ((c<a) ? a : (b<c) ? c : b))*100);
	else printf("%d", ((a==b||a==c) ? a : b)*100+1000);

	return 0;
}