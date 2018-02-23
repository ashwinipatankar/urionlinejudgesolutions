#include <stdio.h>


int main() {


    char arr[20];
    gets(arr);
    int i = 0;
    for (i=0; i < 21; i++) {
        printf("%c %d\n", arr[i]), arr[i];
    }
}