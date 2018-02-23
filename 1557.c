#include <stdio.h>
#include <math.h>

int main() {

    int n = 0, i = 0, j = 0;
    int x = 1, y = 1;
    int max_width = 8;
    int r = 0;
    do {
        scanf("%d", &n);
        if (n==0) break;
        r = pow(2, 2*(n-1)) ;//2 ^(n+1);
        
        if ( r < 10) max_width = 0;
        else if (r >= 10 && r <= 99) max_width = 2;
        else if (r >= 100 && r <= 999) max_width = 3;
        else if (r >= 1000 && r <= 9999) max_width = 4;
        else if (r >= 10000 && r <= 99999) max_width = 5;
        else if (r >= 100000 && r <= 999999) max_width = 6;
        else if (r >= 1000000 && r <= 9999999) max_width = 7;
        else if (r >= 10000000 && r <= 99999999) max_width = 8;
        //printf("r is %d max_width is %d\n", r, max_width);
        for (i =0; i < n; i++) {
            x = y;
            for (j=0; j < n; j++) {
                //if (j == (n-1)) printf("%*d",max_width, x);
                //else 
                printf("%*d ",max_width, x);
                x *= 2;

            }
            y *= 2;
            printf("\n");
        }
        printf("\n");
        x = 1;
        y = 1;
        r = max_width = 0;

    }while(n != 0);
}