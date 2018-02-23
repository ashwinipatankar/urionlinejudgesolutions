#include <stdio.h>


int main() {
    int n = 0;
    scanf("%d", &n);

    int i = 0, j = 0;
    int arr[n][n];
    for (i=0; i < n; i++) {
        for (j=0; j < n; j++) {
            if (i == n/2 && j == n/2) {
            arr[i][j] = 2;    
            } else  arr[i][j] = 1;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}