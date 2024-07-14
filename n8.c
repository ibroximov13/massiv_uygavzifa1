#include <stdio.h>
#include "massiv_kutubxona.h"
int main() {
    int a ;
    printf("a = "); scanf("%d",&a);
    int b[] = {4, 5, 6, 7};
    int c = sizeof(b) / sizeof(b[0]);
    inni_olish(a, b,c );
    printf("]\n");
}