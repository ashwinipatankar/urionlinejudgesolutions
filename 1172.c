#include <stdio.h>


int main () {
    int i = 0;
    signed int arr[10];
    signed int x  = 0;

    for (i=0;i<10; i++) {
        scanf("%d", &x);
        if (x > 0)  arr[i] = x;
        else arr[i] = 1;
    }
    for (i=0; i < 10; i++) {
        printf("X[%d] = %d\n", i, arr[i]);
    }
}