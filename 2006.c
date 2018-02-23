#include <stdio.h>


int main() {

    int t=0;
    int a, b, c, d, e = 0;
    int count = 0;
    scanf("%d",&t);
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    if (a == t) count++;
    if (b == t) count++;
    if (c == t) count++;
    if (d == t) count++;
    if (e == t) count++;
    printf("%d\n", count);

}