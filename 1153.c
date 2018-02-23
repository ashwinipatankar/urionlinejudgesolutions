#include <stdio.h>


int factorial (int x) {
    if (x == 0) return 1;
    else x = x *factorial(x-1);
    return x;
}
int main() {

    int i = 0, n = 0;

    scanf("%d", &n);

    printf("%d\n", factorial(n));
}