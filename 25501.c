#include <stdio.h>
#include <string.h>

int rep;

int recursion(char *s, int l, int r){
	rep = l+1;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
	
}

int isPalindrome(char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
	int i, n;
	char s[1010];

	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		scanf("%s", s);
		printf("%d", isPalindrome(s));
		printf(" %d\n", rep);
	}
}