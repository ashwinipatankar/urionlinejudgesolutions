#include <stdio.h>

#include <math.h>
int main() {


    double i=0, j=0, k=0;

    do {
        scanf("%lf", &i);
        if (i == 0) break;
        scanf("%lf %lf", &j, &k);
        if (k == 100) printf("%d\n", (int)floor(sqrt(i*j)));
        else printf("%d\n", (int)floor(sqrt(i*j*100/k)));

    }while(i != 0);
}