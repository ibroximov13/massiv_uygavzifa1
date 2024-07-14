#include <stdio.h>
#include "massiv_kutubxona.h"

int main() {
    int a[] = {6, 25, 91, 23, 72, 9, 18, 6};
    int m = sizeof(a) / sizeof(a[0]);
    int n;
    printf("n = "); scanf("%d",&n);
    printf("Yangi massiv: ");
    oxiri(a,m,n);
}
