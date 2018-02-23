#include <stdio.h>
#include <math.h>
int main() {
    double resultm, resultx = 0;

    long long number = 0;
    scanf("%llu", &number);
    resultm = (double) number / log(number);
    resultx = 1.25506 * (double) number / log(number);
    printf("%0.1lf %0.1llf\n", resultm, resultx);

}