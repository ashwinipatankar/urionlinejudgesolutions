#include <stdio.h>

#include <string.h>
int main() {
    int c = 0;
    char title[100001];
    int i = 0;
    scanf("%d", &c);
    for (i=0; i < c; i++) {
        scanf("%s", title);
        printf("%0.2lf\n", (float) strlen(title)/100);
    }
}