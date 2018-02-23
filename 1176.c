#include <stdio.h>

long unsigned int arr[62];

void generateFibo() {
    arr[0] = 0;
    arr[1] = 1;
    int i = 0;
    for (i=2; i < 62; i++) {
        arr[i] = arr[i-1]+arr[i-2];
    }
}



int main() {

    generateFibo();
    int n=0, index = 0;

    scanf("%d", &n);
    int i = 0;
    for (i=0; i < n; i++) {
        scanf("%d", &index);
        printf("Fib(%d) = %ld\n", index, arr[index]);
    }

}