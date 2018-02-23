#include <stdio.h>
#include <string.h>


int main() {
    int n = 0;

    char name[100];
    int power = 0;
    int i =0;

    scanf("%d", &n);
    for (i=0; i < n; i++) {
        scanf("%s %d", name, &power);
        if ((strcmp(name, "Thor")==0) ) {
            printf("Y\n");
        }else printf("N\n");
    }
}