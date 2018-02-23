#include <stdio.h>

int main()
{
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define max(a, b) (((a) > (b)) ? (a) : (b))

    int X, Y;

    scanf("%d%d", &X, &Y);

    int i = 0;

    for (i = min(X, Y)+1; i < max(X, Y); i++)
    {
        if (i%5 == 2 || i%5 == 3) {
            printf("%d\n", i);
        }
    }
}