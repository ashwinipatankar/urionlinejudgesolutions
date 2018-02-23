#include <stdio.h>

int main() {

    int x = 0, i = 0;
    int sum = 0;
    for (i=0; i < 4; i++) {
        scanf("%d", &x);
        sum+= x;
    }
    printf("%d\n", sum - 3);
}