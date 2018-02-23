#include <stdio.h>


int main() {
    int n,m=0;

    scanf("%d%d", &n, &m);
    int i, j = 0;
    signed int arr[n][m];
    for(i=0; i < n; i++) {
        for (j=0; j < m; j++) {
            scanf("%d",&arr[i][j] );
        }
    }

    for (i=0; i < n; i++) {
        for (j=0; j < m; j++) {
            if (arr[i][j]==7) {
                if ((i+2) < n && (j+2) < m) {
                if (arr[i][j+1]==7 && arr[i][j+2]==7 && arr[i+1][j]==7 && arr[i+1][j+1]==42 && arr[i+1][j+2]== 7 && arr[i+2][j] == 7 && arr[i+2][j+1]== 7 && arr[i+2][j+2]== 7) {
                    printf("%d %d\n", i+2, j+2);
                    return 0;
                }
                }
            }
        }
    }
    printf("0 0\n");
}