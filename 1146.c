#include <stdio.h>

int main() {

    int x = 0, i = 0;

    do {
        scanf("%d", &x);
        for (i=1; i <=x; i++) {
            if (i==x) printf("%d\n", i);
            else printf("%d ", i);
        }

    }while(x != 0);
}