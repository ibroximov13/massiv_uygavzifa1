#include <stdio.h>
#include "massiv_kutubxona.h"

int main() {
    int a[] = {6, 25, 91, 23, 72, 9, 18, 6};
    int n = sizeof(a) / sizeof(a[0]);
    
    printf("O'rtacha qiymat: %d\n", ortacha_qiymat(n,a));
}
