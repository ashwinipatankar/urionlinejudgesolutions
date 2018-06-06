#include <stdio.h>

int main(void) {
    int final[11];
    int x, y =0;
    int result = 0;
    int i = 0;
    int j = 0;
    scanf("%d%d", &x, &y);
    while(x != 0 && y != 0) {
        result = x + y;
        
        for (i=0; result > 0; i++) {
            final[i] = result % 10;
            result  = result / 10;
        }
        for (j= (i-1); j >= 0; j-- ) {
            if (final[j] != 0) printf("%d", final[j]);
            final[j] = 0;
        }
        printf("\n");
        scanf("%d%d", &x, &y);

    }

    return 0;
}