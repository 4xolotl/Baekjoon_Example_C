#include <stdio.h>

void star(int i, int j, int n) {
    if (i%3==1 && j%3==1) {
        printf(" ");
        return;
    }
    else if (n==1) {
        printf("*");
        return;
    }
    else star (i/3, j/3, n/3);
}
int main() {
    int n, i, j;
    scanf("%d", &n);
    
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) star(i, j, n);
        printf("\n");
    }
}