#include <stdio.h>

int generateValue (char *str) {
    if (str[0] == 'p' && str[1] == 'e') return 1;
    else if (str[0] == 'p' && str[1] == 'a') return 2;
    else if (str[0] == 't') return 3;
    else if (str[0] == 'l') return 4;
    else if (str[0] == 's') return 5;
    return 0;
}

int printResult(int x, int y) {
    int arr[6][6];
    arr[1][1] = 0; 
    arr[1][2] = 2; 
    arr[1][3] = 1; 
    arr[1][4] = 1; 
    arr[1][5] = 5; 
    arr[2][1] = 2; 
    arr[2][2] = 0; 
    arr[2][3] = 3; 
    arr[2][4] = 4; 
    arr[2][5] = 2; 
    arr[3][1] = 1; 
    arr[3][2] = 3; 
    arr[3][3] = 0; 
    arr[3][4] = 3; 
    arr[3][5] = 5; 
    arr[4][1] = 1; 
    arr[4][2] = 4; 
    arr[4][3] = 3; 
    arr[4][4] = 0; 
    arr[4][5] = 4; 
    arr[5][1] = 5; 
    arr[5][2] = 2; 
    arr[5][3] = 5; 
    arr[5][4] = 4; 
    arr[5][5] = 0; 
    return arr[x][y];
}
int main(void) {
    int n = 0;
    int i = 0;
    char r[100], s[100];
    int rajesh, sheldon = 0;
    int ret = 0;
    scanf("%d", &n);
    for (i=0; i < n; i++) {
        scanf("%s%s", r, s);
        rajesh = generateValue(r);
        sheldon = generateValue(s);
        ret = printResult(rajesh, sheldon);
        if (ret == rajesh) printf("rajesh\n");
        else if (ret == sheldon) printf("sheldon\n");
        else printf("empate\n");
ret = 0;
        }
        

    


    return 0;
}

