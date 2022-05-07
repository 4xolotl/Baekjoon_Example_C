#include <stdio.h>
#include <math.h>

int row=1, column=1, r=9;
void line() {
	printf("%d \n", row);
	row++;
}

void sprint(double n, int k) {
	int i, l=1, j, kk;

	kk=pow(3,k)/1;

	for (i=0; i<pow(3,k)/3; i++) {
	if ((row>=(r+1)/2-r/9 && row<=(r+1)/2+r/9) && (column+1)%3==0) {
		for (j=0; j<r/9; j++) printf("   ");
	}
	else if ((row+1)%3==0) printf("* *");
	else printf("***");
		column++;
	}
	if (row==(r+1)/2+1) r*=3;
	line();
	column=1;
}

int main() {
	int i, j, m, k, l=1;
	double n, kt;

	// n+1 해서 반 나누고 k 구하면 깔끔할듯
	scanf("%lf", &n);
	kt = log(n) / log(3.0);
	k = kt / 1;
	n = ++n/2.0;

	for (j=0; -1<=j && j<=n; j+=l) {
		sprint(n, k);
		if (j==n) l=-2;
	}
	

	
	return 0;
}