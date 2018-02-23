#include <stdio.h>


int main() {

    int x=0, i=0, sum = 0, count = 0;

    do {
        scanf("%d", &x);
        if (x != 0) {
        for (i=0; count < 5; i++) {
            if ((x+i)%2 == 0) {
                count++;
                sum+= (x+i);
            }
        }
        printf("%d\n", sum);
        sum = 0;
        count = 0;
        }
    }while(x != 0);
}