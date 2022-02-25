#include <stdio.h>

int main() {
	double a;

	scanf("%lf", &a);
	a*=a;

	printf("%lf\n%lf", a*3.14159265358979, a*2);

	return 0;
}