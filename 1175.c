#include <stdio.h>
#include <string.h>

#define SWAP(x,y) do \
   { unsigned char swap_temp[sizeof(x) == sizeof(y) ? (signed)sizeof(x) : -1]; \
     memcpy(swap_temp,&y,sizeof(x)); \
     memcpy(&y,&x,       sizeof(x)); \
     memcpy(&x,swap_temp,sizeof(x)); \
    } while(0)
int main() {
    #define AR 20
    int i = 0;
    int j = 0;

    double arr[AR];
    double x;

    for (i=0; i< AR; i++) {
        scanf("%lf", &x);
        arr[i] = x;
    }
    for (i=0, j = AR-1; i < AR/2; i++, j--) {
        SWAP(arr[i], arr[j]);
    }
    for (i=0; i < AR; i++) {
        printf("N[%d] = %0.0lf\n", i, arr[i]);
    }
}