#include <stdio.h>
#include "massiv_kutubxona.h"

int main() {
    int a,b;
    printf("a = "); scanf("%d",&a);
    printf("b = "); scanf("%d",&b);
    int massiv[] = {4, 5, 6, 7};
    int m = sizeof(massiv) / sizeof(massiv[0]);
    
    joy(massiv, m,a,b);
    printf("]\n");
}