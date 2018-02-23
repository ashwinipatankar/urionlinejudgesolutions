#include <stdio.h>


int main() {

    
    int n = 0;
    int i = 0;
    int x = 0, g = 0;
    while (scanf("%d", &n ) != EOF) {
scanf("%d", &x);
        g = x;
        for (i=1; i < n ; i++) {
            scanf("%d", &x);
            if (x > g) g = x;
        }
    if (g < 10 ) printf("1\n");
    else if (g >= 10 && g < 20  ) printf("2\n");
    else printf("3\n");
    }
    
}