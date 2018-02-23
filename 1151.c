#include <stdio.h>


int main() {
    int i=0, n=0;
    int arr[]= {0,1,0};
    int count = 0, j = 1;
    scanf("%d", &n);
    printf("%d %d", j-1, j);
    
    
    for (i=2; i < n; i++){
        
        
        j = arr[1] + arr[0];
        arr[0] = arr[1];
        arr[1] = j;
        if (i == n-1)  printf(" %d\n", j);
        else printf(" %d", j);
    }
}