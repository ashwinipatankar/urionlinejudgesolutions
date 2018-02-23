#include <stdio.h>
#include <string.h>

int main()
{
    char l[501];
    int count = 0;
    gets(l);
    count = strlen(l);
    
    if (count <= 140) printf("TWEET\n");
    else printf("MUTE\n");
    
}