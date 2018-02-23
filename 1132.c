#include <stdio.h>


int main() {
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define max(a, b) (((a) > (b)) ? (a) : (b))
     int x, y;
    int sum, i;

    scanf("%d", &x);
    scanf("%d", &y);
    
    for (i= min(x,y); i <= max(x,y); i++)  {
        if (i%13 != 0) {
            sum+=i;
        }
    }
    printf("%d\n", sum);
}