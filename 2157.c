#include <stdio.h>
void printSwitch(int x) {
    int arr[6];
    int i = 0;
    int j =0;
    while(x) {
        arr[i++] = x%10;
        x = x / 10;
    }
    while(i>0) {
        printf("%d", arr[j++]);
        i--;
    }
}
int main(void) {
    int n = 0;
    int x, y = 0;
    int i = 0;
    int j = 0;
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        scanf("%d%d", &x, &y);
        for (j=x; j<=y; j++) printf("%d", j);
        for (j=y; j>=x; j--) {
            printSwitch(j);
        }
        printf("\n");

    }
}