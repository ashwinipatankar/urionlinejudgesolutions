#include <stdio.h>

int main() {

    int j=0, n=0;
    int i=0, x = 0, y = 0;

    scanf("%d%d", &j, &n);
    int arr[n];
    for (i=0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i= 0; i < n-1; i++) {
        if ((arr[i]+j < arr[i+1]) ||( arr[i+1]+ j < arr[i])) {
            printf("GAME OVER\n");
            return 0;
        }
    }
    printf("YOU WIN\n");
}