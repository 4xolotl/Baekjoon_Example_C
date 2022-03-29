#include <stdio.h>
#include <math.h>

int row=1, column=1;
void line() {
	printf("%d \n", row);
	row++;
}

void sprint(double n, int k) {
	int i;

	for (i=0; i<pow(3,k)/3; i++) {
		((row+1)%3==0) ? printf("* *"): printf("***");
	}
	line();
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
	int i, j, m, k;
	double n, kt;

	// n+1 해서 반 나누고 k 구하면 깔끔함
	scanf("%lf", &n);
	kt = log(n) / log(3.0);
	k = kt / 1;
	n = ++n/2.0;

	for (j=0; j<n; j++) {
		sprint(n, k);
	}
	

	/*

	sss(n/3);
	printf("\n");
	l++;
	sbs(n/3);
	printf("\n");
	l++;
	sss(n/3);
	printf("\n");
	l++;
	
	for (i=2; i<=n/3+1; i++) {
		if (i%3==0) bbb(1);
		else {
			if (l%3==0)sbs(1);
			else sss(1);
		}
	}
	printf("\n");
	l++;
	for (i=2; i<=n/3+1; i++) {
		if (i%3==0) bbb(1);
		else {
			if (l%3==0)sbs(1);
			else sss(1);
		}
	}
	printf("\n");
	l++;
	for (i=2; i<=n/3+1; i++) {
		if (i%3==0) bbb(1);
		else {
			if (l%3==0)sbs(1);
			else sss(1);
		}
	}
	printf("\n");
	sss(n/3);
	printf("\n");
	l++;
	sbs(n/3);
	printf("\n");
	l++;
	sss(n/3);
	printf("\n");
	l++;
	*/
	return 0;
}