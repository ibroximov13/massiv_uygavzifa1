#include <stdio.h>
#include "massiv_kutubxona.h"

int main() {
    int a[] = {12, 21, 71, 24, 85, 12, 30, 25};
    int n = sizeof(a) / sizeof(a[0]); 
    printf("Eng katta son: %d\n", max_max(a, n));
    printf("Eng kichkina son: %d\n", min_min(a, n));
}
