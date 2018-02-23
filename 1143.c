#include <stdio.h>


int main() {


    int N=0;
    int i = 0;

    scanf("%d", &N);

    for (i=1; i <= N; i++) {
        printf("%d %d %d\n", i, i*i, i*i*i);
    }
}