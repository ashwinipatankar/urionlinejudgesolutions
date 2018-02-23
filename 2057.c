#include <stdio.h>


int main() {

    int s, t = 0;
    signed int z = 0;

    scanf("%d %d %d", &s, &t, &z);
    signed int total = s + t+ z;
    if (total < 24) printf("%d\n", total);
    else printf("%d\n", total - 24);
}