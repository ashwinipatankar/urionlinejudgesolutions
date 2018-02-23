#include <stdio.h>

int main() {
    double highest = 0, current = 0;
    int enrol = 0, henrol = 0;
    int x = 0;
    int i=0, n = 0;


    scanf("%d", &n);
    for (i=0; i < n; i++) {
        scanf("%d%lf", &enrol, &current);
        if (current > highest){
            highest = current;
            henrol = enrol;
        }
    }

    if (highest >= 8.0) printf("%d\n", henrol);
    else printf("Minimum note not reached\n");

}