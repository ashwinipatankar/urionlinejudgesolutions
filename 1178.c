#include <stdio.h>

int main() {
    double x = 0.0 ;

    int i = 0;
    scanf("%lf", &x);

    for (i=0; i < 100; i++) {
        printf("N[%d] = %0.4lf\n", i, x);
        x = x/2.0;
    }
}