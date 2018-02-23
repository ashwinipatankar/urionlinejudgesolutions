#include <stdio.h>


int main() {
    int n, h, m, o = 0;
    int i = 0;

    scanf("%d", &n);
    for (i=0; i < n; i++) {
        scanf("%d%d%d", &h, &m, &o);
        switch(o) {
            case 1:
            if (h<10) printf("0%d:", h);
            else printf("%d:", h);
            if (m < 10) printf("0%d - A porta abriu!\n", m);
            else printf("%d - A porta abriu!\n", m);
            
            break;
            case 0:
            if (h<10) printf("0%d:", h);
            else printf("%d:", h);
            if (m < 10) printf("0%d - A porta fechou!\n", m);
            else printf("%d - A porta fechou!\n", m);
            break;
        }
    }
}
