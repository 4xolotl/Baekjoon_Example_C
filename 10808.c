#include <stdio.h>
main(){int a[26]={0},i=-26;char c=getchar();while(c!=EOF){a[c-97]++;c=getchar();}while(i++)printf("%d ",a[i+25]);}