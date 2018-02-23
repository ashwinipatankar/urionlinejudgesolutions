#include <stdio.h>


int main() {
    signed int x , y = 0;
    signed int result = 0;
    int n = 0;
    signed int z = 0;

    scanf("%d", &n);
    int i = 0;
    scanf("%d", &x);
    for (i=1; i < n; i++) {
        scanf("%d", &y);
        if (y>x) result++;
        else if (y<x) result--;
        else if (y==x){
             printf("0\n");
             return 0;
        }
        if (result > 1 || result < -1) {
            printf("0\n");
            return 0;
        }
        x = y;

    }
    if (result == 1 || result == -1 || result == 0) {
        printf("1\n");
    }
    else printf("0\n");
}