#include <stdio.h>
// 1-misol
int max_max(int a[], int n) {
    int max = a[0];
    for(int i = 1; i < n; i++) {
        if(max < a[i]){
            max = a[i];
        }
    }
    return max;
}
int min_min(int a[], int n) {
    int min = a[0];
    for(int i = 1; i < n; i++) {
        if(min > a[i]){
            min = a[i];
        }
    }
    return min;
}

// 2-misol
int ortacha_qiymat(int n, int a[]){
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    int bb = (int)sum / n;
    return bb;
}

// 3-misol
void bor(int a[], int m, int n){
    int i=0;
    while(i<m){
        i++;
        if(a[i] == n){
            printf("true");
        } 
    }
}

// 4-misol
void indeks(int a[], int m, int n){
    if(n >= 0 && n < m) {
        printf("Natija: %d\n", a[n]);
    } else {
        printf("Natija: 0\n");
    }
}

// 5-misol
void oxiri(int a[], int m, int n){
    int b[n + 1];

    for(int i = 0; i < m; i++) {
        b[i] = a[i];
    }
    b[m] = n;

    for(int i = 0; i < m + 1; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
}

// 6-misol
void boshi(int a[], int m, int n) {
    int b[n + 1];

    b[0] = n;
    for(int i = 0; i < m; i++) {
        b[i + 1] = a[i];
    }

    for(int i = 0; i < m + 1; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
}

// 7-misol
void joy(int massiv[], int m, int a, int b) {
    int massiv2[m + 1];
    for (int i = 0; i < a; i++) {
        massiv2[i] = massiv[i];
    }
    massiv2[a] = b;
    for (int i = a; i < m; i++) {
        massiv2[i + 1] = massiv[i];
    }
    
    printf("[");
    for (int i = 0; i < m + 1; i++) {
        printf("%d", massiv2[i]);
        if (i < m) {
            printf(",");
        }
    }
}


// 8-misol
void inni_olish(int a, int b[], int c){
    int b2[c - 1];
    for (int i = 0, j = 0; i < c; i++) {
        if (i != a) {
            b2[j++] = b[i];
        }
    }
    
    printf("[");
    for (int i = 0; i < c - 1; i++) {
        printf("%d", b2[i]);
        if (i < c - 2) {
            printf(",");
        }
    }
}

// 9-misol
void kochirish(int a[], int b[], int c){
    for (int i = 0; i < c; i++) {
        b[i] = a[c - 1 - i];
    }
    
    printf("[");
    for (int i = 0; i < c; i++) {
        printf("%d", b[i]);
        if (i < c - 1) {
            printf(",");
        }
    }
}

// 10-misol
int son(int a[], int n, int c) {
    int sum = 0;
    for (int i = 0; i < c; i++) {
        if (a[i] == n) {
            sum++;
        }
    }
    return sum;
}