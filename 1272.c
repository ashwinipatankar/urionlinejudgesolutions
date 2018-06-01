#include <stdio.h>

int main(void) {
    int n, i, j, k, sum =0;
    char codestr[51];
    char instr[51];
    char *line  = NULL;
    char x;
    size_t len = 0;
    scanf("%d", &n);
    scanf("%c", &x);
    for (i=0; i < n; i++) {
        k = 0;
        len = getline(&line, &len, stdin);
        if (line[0] != ' ') {
            codestr[k++] = line[0];
        }
        for (j=0; j < (len-1); j++) {
            if (line[j] == ' ' && line[j+1] != ' ' && line[j+1] != '\n') {
                
                codestr[k++] = line[j+1];
            } 
        }
        codestr[k] = '\0';
        printf("%s\n", codestr);
        
    }
    return 0;
}