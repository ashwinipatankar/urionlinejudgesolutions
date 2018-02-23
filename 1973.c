#include <stdio.h>


int main() {

    int total=0, stolen = 0;
    int n  = 0, i = 0;
    int x = 0;
    scanf("%d", &n);
    int arr[n];
    for (i=0; i < n; i++) {
        scanf("%d", &x);
        arr[i] = x;        
        total += x;
    }
    i = 0;
    do {
        if (arr[i] != 0)     stolen += 1;
        if (arr[i]%2 ==  0) {
            //stolen += 1;
            break;
        }
        
        i++;

    }while ((i<n));
    printf("%d %d\n", stolen , total-stolen);
    
}