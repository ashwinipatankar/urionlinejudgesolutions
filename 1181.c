#include <stdio.h>

#define ROW 12
int main() {
    double M[ROW][ROW];
    double entry = 0;
    double result = 0;

    
    int i = 0, j=0;
    char t;
    int x = 0;

    scanf("%d", &x);
    scanf("%s", &t);


    for (i=0; i < ROW; i++) {
        for (j=0; j< ROW; j++) {
            scanf("%lf", &entry);
            M[i][j] = entry;
        }
    }


    switch(t) {
        case 'S':
        for (i=0; i < ROW; i++) {
            result+= M[x][i];
        }
        break;
        case 'M':
        for (i=0; i < ROW; i++) {
            result+= M[x][i];

        }
        result = result / ROW;
        break;
        default:
        break;
    }
    printf("%0.1lf \n", result);


}