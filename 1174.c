#include <stdio.h>


int main() {
    #define AR 100
    double arr[AR];
    double y;
    int i = 0;
    for (i=0; i < AR; i++) {
        scanf("%lf", &y);
        arr[i] = y;
        
    }
    for (i=0; i < AR; i++) {
        if (arr[i] <= 10.0) printf("A[%d] = %0.1lf\n", i, arr[i]);
    }
}