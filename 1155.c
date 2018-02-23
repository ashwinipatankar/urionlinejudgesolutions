#include <stdio.h>


int main() {

    double s = 0.0;
    int i =0;

    for (i=1 ; i <=100; i++) {
        s = s + 1.0/i;
    }
    printf("%0.2lf\n", s);
}