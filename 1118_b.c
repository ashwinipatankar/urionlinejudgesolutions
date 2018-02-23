#include <stdio.h>


int main() {

    int x = 0;
    signed int a, b =0;
    do {
        scanf("%d", &a);
        if (a >= 0 && a <= 10) {
            scanf("%d", &b);
            if (b >= 0 && b <= 10) {
                printf("media = %0.2f\n", ((float) (a + b))/2.0);
               
                //if (x != 1 || )
            }
        } else printf("nota inválida\n");
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &x);
    }while(x != 2);
}