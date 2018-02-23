#include <stdio.h>
#include <string.h>
int main() {
    int n = 0;
    long int f = 0, s = 0;
    int i = 0;

    char fn[100], sn[100], fc[20], sc[20];

    scanf("%d", &n);
    for (i=0; i < n; i++) {
        scanf("%s %s %s %s", fn, fc, sn, sc);
        scanf("%lld %lld", &f, &s);
        if ((f+s)%2 == 0) {
            if (strcmp(fc, "PAR") == 0) {
                printf("%s\n", fn);

            }else printf("%s", sn);
        }else {
            if (strcmp(fc, "PAR") == 0) {
                printf("%s\n", sn);

            }else printf("%s\n", fn);
        }
        
    }
}