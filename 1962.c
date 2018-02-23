#include <stdio.h>


int main() {

    int i = 0;
    int j = 0;
    int n = 0;
    signed int x=0;

    scanf("%d", &n);
    for (i=0; i < n; i++) {
        scanf("%d", &j);
        x = j - 2015;
        if (x < 0) printf("%d D.C.\n", x*-1 );
        else printf("%d A.C.\n", x+1);
        
    }

}