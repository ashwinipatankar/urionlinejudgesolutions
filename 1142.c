#include <stdio.h>


int main() {
     int x = 0, y = 1;
     int i = 0;

     scanf("%d", &x);

     for (i=0; i < x; i++) {
         printf("%d ", y++);
         printf("%d ", y++);
         printf("%d ", y++);
         printf("PUM\n");
         //printf("%d %d %d PUM\n",y++, y++, y++ );
         y++;
     }
}