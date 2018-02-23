#include <stdio.h>

int main()
{
    signed int x = 0, y = 0;

    scanf("%d %d", &x, &y);

    signed int q = 0, r = 0;
    if (x > 0)
    {
        q = x / y;
        r = x % y;
        if (r < 0)
            r = r * -1;
    }
    else {
        if ( y > 0) {
        q = x /y ;
        q = q -1;
        r = x - (y*q);
        } else {
            q = x / y;
            
            q = q+1;
            r = x - (y*q);
        }
    }
    printf("%d %d\n", q, r);
}