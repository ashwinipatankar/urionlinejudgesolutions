#include <stdio.h>

int main () {
    int n = 0, x = 0, sum = 0;
    int i = 0, j=1;
    scanf("%d", &n);

    for (i=0; i < n; i++ ) {
        scanf("%d", &x);
        sum = 0;
        j= 1;
        while(j <= x) {
            if (x%j == 0)  sum+=j;
            j++;
            //if (sum > (x+1)) break;
        }
        if (sum > (x+1)) printf("%d nao eh primo\n", x);
        else printf("%d eh primo\n", x);
    }
}