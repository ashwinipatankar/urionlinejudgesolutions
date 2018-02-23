#include <stdio.h>


int main() {
    signed int x=0, z=0, i=0, sum=0;

    scanf("%d", &x);

    do {
        scanf("%d", &z);

    }while(z <= x);

    while (sum < z) {
        sum = sum + x;
        x++;
        i++;
    }
    printf("%d\n", i);
}