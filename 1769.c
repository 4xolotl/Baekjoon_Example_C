#include <stdio.h>

int rep=0;

int sep (int num){
	int i, n=0;
	
    if(num < 10) {
		if (num%3 == 0) {
			return 1;
		}
		else return 0;
	}
    else {
		for (i=0; num > 0; i++) {
			n += num%10;
			num /= 10;
		}
		rep++;
		return sep(n);
	}
}

int main() {
	char p, cashe;
	int i, sum1=0, r;
	
	for (i=0;;i++) {
		scanf("%c", &p);
		if (48<=p && p<=57) sum1 += p-48;
		else break;
	}
	if (i!=1) rep+=1;
	r = sep(sum1);
	printf("%d\n", rep);
	if (r==1) printf("YES");
	else printf("NO");

	return 0;
}