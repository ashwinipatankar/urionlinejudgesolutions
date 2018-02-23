#include <stdio.h>

int main() {

    double price[6];
    price[1] = 1.50;
    price[2] = 2.50;
    price[3] = 3.50;
    price[4] = 4.50;
    price[5] = 5.50;

    double total = 0;
    int number = 0;
    int i = 0;
    int n = 0;
    int product  = 0, quantity = 0;
    scanf("%d", &n);
    for ( i = 0; i < n ; i++) {

        scanf("%d %d", &product, &quantity);
        total += (double) quantity * price[product - 1000];

    }
    printf("%0.2lf\n", total);
}

