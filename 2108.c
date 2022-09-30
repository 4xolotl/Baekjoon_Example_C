#include <stdio.h>
#include <stdlib.h>

int calmean(int *ary, int n, int min, int max) {
	int i, sum=0;
	int mean;

	for (i=min+4000; i<max+4001; i++) {
		sum += ary[i]*(i-4000);
	}

	mean = (abs((sum*10 / n) % 10) <5)? sum/n: (sum<0)? sum/n-1: sum/n+1;

	return mean;
}

int calmid(int *ary, int n, int min, int max) {
	int i, mid=(n+1)/2;

	for (i=min+4000; i<max+4001; i++) {
		mid -= ary[i];
		if (mid<=0) return i;
	}
}

int calmode(int *ary, int n, int min, int max) {
	int i, mode_val=0,index1=-1, index2=-1;

	for (i=min+4000; i<max+4001; i++) {
		if (mode_val<ary[i]){
			index2 = -1;
			mode_val = ary[i];
			index1 = i;
		}
		else if (mode_val==ary[i] && index2==-1) {
			index2 = index1;
			index1 = i;
		}
	}

	return index1-4000;
}

int calrange(int *ary, int n, int min, int max) {
	return max-min;
}

int main() {
	int ary[8002]={0}, i, n, t;
	int mean, mid, mode, range, min=4000, max=-4000;

	scanf("%d", &n);


	for (i=0; i<n; i++) {
		scanf("%d", &t);
		if (t<min) min=t;
		if (max<t) max=t;
		ary[t+4000]++;
	}

	mean = calmean(ary, n, min, max);
	mid = calmid(ary, n, min, max)-4000;
	mode = calmode(ary, n, min, max);
	range = calrange(ary, n, min, max);
	
	printf("%d\n%d\n%d\n%d", mean, mid, mode, range);
	return 0;
}