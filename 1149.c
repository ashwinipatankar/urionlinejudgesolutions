#include <stdio.h>


int main() {

    signed int a=0, n=0, i=0, sum =0;
    signed int number ;

    scanf("%d", &a);
    do {
        scanf("%d", &n);

    }while (n < 1);
    number = a;
    for (i=0; i < n; i++) {
        sum = sum + number;
        number++;
    }
    printf("%d\n", sum);
}