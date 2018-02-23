#include <stdio.h>

int main () {
    int i = 0, x =0;

    signed int arr[10];

    scanf("%d", &x);
    arr[0] = x;
    for (i = 1; i < 10; i++) {
        arr[i] = 2 * arr[i-1];
    }
    for (i=0; i < 10; i++) {
        printf("N[%d] = %d\n", i, arr[i]);
    }
}