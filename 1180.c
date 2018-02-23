#include <stdio.h>

int main(){
    int n = 0;
    int position = 0;
    signed int number = 0;
    signed int holder = 0;

    scanf("%d", &n);

    int i = 0;
    scanf("%d", &number);
    holder = number;
    for (i=1; i < n; i++) {
        scanf("%d", &number);
        if (number < holder) {
            holder = number;
            position = i;
        }
    }
    printf("Menor valor: %d\n", holder);
    printf("Posicao: %d\n", position);
}