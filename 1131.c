#include <stdio.h>


int main() {
    int x, y;
    int total , inter, grem, draw;

    scanf("%d%d", &x, &y);
    total++;
    if (x == y) draw++;
    else if (x < y) grem++;
    else if (x > y) inter++;
    int choice = 1;
    while(choice == 1) {
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &choice);
        if (choice==1) {
            scanf("%d%d", &x, &y);
            total++;
            if (x == y) {
                draw++;

            }else if (x < y) {
                grem++;

            }else if (x > y){
                inter++;
            }
        }
        else {
            printf("%d grenais\n", total);
            printf("Inter:%d\n", inter);
            printf("Gremio:%d\n", grem);
            printf("Empates:%d\n", draw);
            if (inter > grem ) printf("Inter venceu mais\n");
            if (inter < grem ) printf("Gremio venceu mais\n");
            if (inter==grem) printf("Nao houve vencedor\n");
        }
    }
}