#include <stdio.h>

int main() {

    double i=0.0, j=0.0;

    scanf("%lf %lf", &i, &j);

    printf("%0.2lf%%\n", (j-i)*100.00/i);
}