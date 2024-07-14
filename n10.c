#include <stdio.h>
#include "massiv_kutubxona.h"
int main() {
    int n;
    printf("n = "); scanf("%d",&n);
    int a[] = {2, 4, 6, 4};
    int c = sizeof(a) / sizeof(a[0]);
    
    printf("%d\n", son(a,n,c));
}