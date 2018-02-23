#include <stdio.h>

int readAndFetch() {
    char a;
    int x=0, y=0, z=0;
    scanf("%c", &a);
    if (a=='_') x = 0;
    else (a == '*') x = 1;
 
    
}

int main() {

    char arr[10];
    int count = 0;
    int number = 0;
    char x;
    int intmode = 1,  cawcawmode =0 ;
    int mode=0;
    do {
        scanf("%c", &x);
        switch(x) {
            case '_':
            break;
            case '*':
            break;
            case 'c':

            break;
            case 'a':
            break;
            case 'w':
            break;
            default:
            break;
        }

        count++;

    }while(count < 3);

    
}