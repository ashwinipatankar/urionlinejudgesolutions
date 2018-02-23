#include <stdio.h>

int main() {
    int n=0;
    scanf("%d", &n);

    int i = 0;
    for (i=1; i<= n; i++) {
        if (n%i == 0) printf("%d\n", i);
    }
}