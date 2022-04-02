#include <stdio.h>
#include <math.h>

int row=1, column=1, r=9;
void line() {
	printf("%d \n", row);
	row++;
}

void sprint(double n, int k) {
	int i, l=1, j;

	for (i=0; i<pow(3,k)/3; i++) {
		((row==(r+1)/2-1 || row==(r+1)/2 || row==(r+1)/2+1) && (column+1)%3==0) ? printf("   ") : ((row+1)%3==0) ? printf("* *"): printf("***");
		column++;
	}
	if (row==(r+1)/2+1) r*=3;
	line();
	column=1;
}

void bbb(int n) {
	int i;

	for (i=0; i<n; i++) {
		printf("   ");
	}
}

void star(int n) {
	int i;


}

int main() {
	int i, j, m, k, l=1;
	double n, kt;

	// n+1 해서 반 나누고 k 구하면 깔끔할듯
	scanf("%lf", &n);
	kt = log(n) / log(3.0);
	k = kt / 1;
	n = ++n/2.0;

	for (j=0; 0<=j && j<n; j+=l) {
		sprint(n, k);
		if (j==n-1) l=-2;
	}
	

	
	return 0;
}