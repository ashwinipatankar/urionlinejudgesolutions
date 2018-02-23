#include <stdio.h>


int main() {

    int n=0, number = 0;
    int sum = 0;

    scanf("%d", &n);
    int i = 0;
    int j = 0;
    for (i=0, sum=0; i<n; i++) {
        scanf("%d", &number);
        for (j=1; j < number; j++) {
            if (number %j == 0) {
                sum+= j;
            }
        }
        
        if (sum == number) {
            printf("%d eh perfeito\n", number);
        } else printf("%d nao eh perfeito\n", number);
        sum = 0;
    }
}