#include <stdio.h>

int main() {
    #define ME 1000
    int t=0;
    int vec[ME];

    scanf("%d", &t);

    int i=0;
    int j = 0;
    for (i=0; i < ME; i++ ) {
        vec[i] = j++;
        if (j==t)  j = 0;
        printf("N[%d] = %d\n", i, vec[i]);
    }
}