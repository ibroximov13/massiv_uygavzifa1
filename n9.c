#include <stdio.h>
#include "massiv_kutubxona.h"

int main() {
    int a[] = {1, 2, 3, 4};
    int c = sizeof(a) / sizeof(a[0]);
    int b[c];

    kochirish(a, b, c);
    printf("]\n");
}