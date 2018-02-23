#include <stdio.h>



int main() {
    long long n = 0;
    int arr[12];
    scanf("%llu", &n);

    if ( n < 10) printf("%llu", n);
    else if (n >= 10 && n < 100) {
        arr[0] = n >> 2;
        arr[1] = n - arr[0]*10;
       // printf("%d\n%d", arr[1], arr[0]);
       printf("Arr0 = %d\n", arr[0]);
       printf("Arr1 = %d\n", arr[1]);

    }
    else if (n >= 100 && n < 1000) {
    }
    else if (n >= 1000 && n < 10000) {
    }
    else if (n >= 10000 && n < 100000) {
    }
    else if (n >= 100000 && n < 1000000) {
    }
    else if (n >= 1000000 && n < 10000000) {
    }
        else if (n >= 10000000 && n < 100000000) {
        }
        printf("\n");
}