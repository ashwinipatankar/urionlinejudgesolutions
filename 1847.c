#include <stdio.h>


int main() {
    signed int a = 0, b = 0, c = 0;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b && c >= b) printf(":)\n");
    else if (b>a && c <= b) printf(":(\n");
    else if (b>a && c > b && (c-b) < (b-a)) printf(":(\n");
    else if (b>a && c > b && (c-b) >= (b-a)) printf(":)\n");
    else if (b < a && c < b && (b-c) < (a - b)) printf(":)\n");
    else if (b < a && c < b && (b-c) >= (a - b)) printf(":(\n");
    else if (a == b && c > b) printf(":)\n");
    else printf(":(\n");

}
