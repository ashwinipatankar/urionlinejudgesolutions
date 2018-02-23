#include <stdio.h>

int main() {
    int n=0, x = 0, y=0, sum=0;
    int i=0, j =0;
    int counter = 0;
    scanf("%d", &n);

    for (i=0; i < n; i++) {
        scanf("%d %d", &x, &y);

        for (j=0; counter < y; j++) {
            if ((x+j)%2 != 0) {
                sum += (x+j);
                counter++;
            }
        }
        printf("%d\n", sum);
        sum = 0;
        counter=0;
    }
}