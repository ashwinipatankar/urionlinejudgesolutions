#include <stdio.h>

int main() {

    int arr[] = {0,0,0,0};
    int x=0;

    do {
        scanf("%d", &x);
        if (x >0 && x < 4) arr[x]++;

    }while(x != 4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", arr[1]);
    printf("Gasolina: %d\n", arr[2]);
    printf("Diesel: %d\n", arr[3]);
}