#include <stdio.h>


int main() {

    int n = 0, i = 0, j = 0;
    int two, three, four, five = 0;

    scanf("%d", &n);

    for (i=0; i < n; i++) {
        scanf("%d", &j);
        if (j%2 == 0) two++;
        if (j%3 == 0) three++;
        if (j%4 == 0) four++;
        if (j%5 == 0) five++;
    } 

    printf("%d Multiplo(s) de 2\n", two);
    printf("%d Multiplo(s) de 3\n", three);
    printf("%d Multiplo(s) de 4\n", four);
    printf("%d Multiplo(s) de 5\n", five);
}
