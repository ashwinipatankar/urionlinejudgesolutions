#include <stdio.h>

int main() {
    int n = 0;
    int cases = 1;
    while(scanf("%d", &n)!= EOF){
    int i , count = 0;
    int j =0;
    if (n == 0) {
        printf("Caso %d: 1 numero\n0\n", cases++);
    }
    else if (n == 1) printf("Caso %d: 2 numeros\n0 1\n", cases++);
    else {
        for (i=0; i <=n; i++) {
            
            for (j=0; j<i; j++) {
         count++;
            }
        }
        printf("Caso %d: %d numeros\n", cases++, count+1);
        printf("0");
        for (i=0; i <=n; i++) {
            
            for (j=0; j<i; j++) {
                printf(" %d", i);
            }
        }
        printf("\n");
    }
    printf("\n");
    }
/*
    for (i=0; i < n; i++) {
        for (j=0; j<= i; j++) {
            printf("%d ", i);
            count++;
        }
    }
    */
}