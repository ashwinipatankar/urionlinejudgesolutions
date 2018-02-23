#include <stdio.h>


int main() {

    int x=0, y=0, n=0, i=0;
    scanf("%d", &n);
    for (i=0; i < n; i++) {
        scanf("%d%d", &x, &y);
        printf("%d\n", x+y);
    }
}