#include <stdio.h>
#include <string.h>

int main() {
	int n;
    char a[22];
    scanf("%d", &n);
    while(n--) {
        scanf("%s", a);
        if (strlen(a)<6 || strlen(a)>9) printf("no\n");
        else printf("yes\n");
    }
}