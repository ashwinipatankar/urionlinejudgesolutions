#include <stdio.h>
#include <string.h>

int main() {

    int o, a = 0;
    scanf("%d %d", &o, &a);
    char action[20];
    int i = 0;
    for (i=0; i < a; i++) {
        scanf("%s", action);
        if (strcmp(action, "fechou")==0) o += 1;
        else if (strcmp(action, "clicou")==0) o--;
    }
    printf("%d\n", o);
}