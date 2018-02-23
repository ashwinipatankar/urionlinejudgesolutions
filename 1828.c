#include <stdio.h>
#include <string.h>

int whowon(int x, int y) {

    if (x == 3 && y == 2) return 1;
    else if (x == 2 && y == 3) return 2;
    else if (x==y) return 3;
    else if (x == 2 && y == 1) return 1;
    else if (x == 1 && y == 2) return 2;
    else if (x == 1 && y == 4) return 1;
    else if (x == 4 && y == 1) return 2;
    else if (x == 4 && y == 5) return 1;
    else if (x == 5 && y == 4) return 2;
    else if (x == 5 && y == 3) return 1;
    else if (x == 3 && y == 5) return 2;
    else if (x == 3 && y == 4) return 1;
    else if (x == 4 && y == 3) return 2;
    else if (x == 4 && y == 2) return 1;
    else if (x == 2 && y == 4) return 2;
    else if (x == 2 && y == 5) return 1;
    else if (x == 5 && y == 2) return 2;
    else if (x == 5 && y == 1) return 1;
    else if (x == 1 && y == 5) return 2;
    else if (x == 1 && y == 3) return 1;
    else if (x == 3 && y == 1) return 2;
}

int main() {
    char sheldon[20], raj[20];
    int shel = 0, ra = 0;
    int n=0, i=0;
    scanf("%d", &n);

    for (i=0; i < n; i++) {
        scanf("%s %s", sheldon, raj);
        if (strcmp(sheldon,"pedra" )==0)  shel = 1;
        else if (strcmp(sheldon,"papel" )==0)  shel = 2;
        else if (strcmp(sheldon,"tesoura" )==0)  shel = 3;
        else if (strcmp(sheldon,"lagarto" )==0)  shel = 4;
        else if (strcmp(sheldon,"Spock" )==0)  shel = 5;
        
        if (strcmp(raj,"pedra" )==0)  ra = 1;
        else if (strcmp(raj,"papel" )==0)  ra = 2;
        else if (strcmp(raj,"tesoura" )==0)  ra = 3;
        else if (strcmp(raj,"lagarto" )==0)  ra = 4;
        else if (strcmp(raj,"Spock" )==0)  ra = 5;

        switch(whowon(shel, ra)) {
            case 1: //sheldon
            printf("Caso #%d: Bazinga!\n", i+1);
            break;
            case 2://raj
            printf("Caso #%d: Raj trapaceou!\n", i+1);
            break;
            case 3://draw
            printf("Caso #%d: De novo!\n", i+1);
            break;
            default:
            break;
        }
        
    }
}
//pedra, papel, tesoura, lagarto e Spock