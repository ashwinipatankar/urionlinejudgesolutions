#include <stdio.h>

int main() {


    int n =0, i = 0;

    scanf("%d", &n);
    for (i=0; i < n; i++) {
        if (i != n-1) printf("Ho ");
        else printf("Ho!\n");
    }
    
}