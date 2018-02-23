#include <stdio.h>


int main() {

    double s = 0.0;
    int i =0, j=1;
    
    for (i=1 ; j <39; ) {
        s = s + j/i;
        j = j+2;
        i=i*2;
        
    }
    printf("%0.2lf\n", s);
}