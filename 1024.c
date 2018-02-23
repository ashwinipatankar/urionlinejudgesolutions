#include <stdio.h>
#include <string.h>

int main()
{
    int n = 0;
    char arr[1000];
    //char *arr = NULL;
    char newstr[1000];
    int i = 0;
    int j = 0;
    int k = 0;
    int length = 0;
    size_t size;
    scanf("%d", &n);
    signed int ret = 0;
    char c;

    scanf("%c", &c);
    for (i = 0; i < n; i++)
    {

        scanf("%[^\n]s", arr);
        scanf("%c", &c);
        //printf("Length: %d %s\n", strlen(arr), arr);

        length = strlen(arr);

        for (j = 0; j < length; j++)
        {
            if ((arr[j] > 64 && arr[j] < 91) || (arr[j] > 96 && arr[j] < 123))
            {
                
                    arr[j] = arr[j] + 3;
                
            }
        }
        k = length - 1;
        for (j = 0; j < length; j++)
        {
            newstr[j] = arr[k--];
        }
        newstr[length] = '\0';
        
        for (j= length/2; j < length ; j++) {
                c = newstr[j];
                newstr[j] = c -1;
                
        
        }
        

//        printf("Length: %d %s\n", strlen(newstr), newstr);
        printf("%s\n", newstr);
        memset(arr, 0, 1000);
        memset(newstr, 0, 1000);
    }
}