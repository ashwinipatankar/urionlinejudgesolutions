#include <stdio.h>

int main() {

    int i=0, n = 0;
    int x = 0;

    scanf("%d", &n);
    for (i=0; i < n; i++) {
        scanf("%d", &x);
        printf("%d\n", x%2);
    }
}