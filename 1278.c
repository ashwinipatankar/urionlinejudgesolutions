#include <stdio.h>

int getlenght(char *str)
{
    int k = 0;
    while (str[k] != '\0')
    {
        k++;
    }
    return (k - 1);
}
int main(void)
{
    char x;
    int n = 0;
    scanf("%d", &n);
    scanf("%c", &x);
    int i = 0;
    char arr[101][51];

    //char newstr[101][51];
    size_t len = 0;
    char *line = NULL;
    int maxlen = 0;
    int k, j = 0;
    int strlen = 0;
    while (n != 0)
    {
        maxlen = 0;
        i = j = k =0;
        for (i = 0; i < n; i++)
        {
            len = getline(&line, &len, stdin);

            k = 0;
            for (j = 0; j < len; j++)
            {
                if (line[j] >= 'A' && line[j] <= 'Z') arr[i][k++] = line[j];
                else if (line[j] == ' ' && line[j+1] >= 'A' && line[j+1] <= 'Z' && k != 0) arr[i][k++] = line[j];
                
                
            }
            arr[i][k++] = '\0';
            if (maxlen < (k - 1))
                maxlen = k - 1;
        }
        for (i = 0; i < n; i++)
        {
            strlen = getlenght(arr[i]);
            
            while (strlen < maxlen -1) {
                printf(" ");
                strlen++;
            }
            

            printf("%s\n", arr[i]);
        }
        
        scanf("%d", &n);
        
        scanf("%c", &x);
        if (n != 0) printf("\n");
    }

    return 0;
}