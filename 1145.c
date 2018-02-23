#include <stdio.h>

int main() {
 int x = 0, y = 0, i =0, j=0;
 int number = 0;
 scanf("%d %d", &x, &y);
number = 1;
 for (i=1; number<=y; i++) {
     for (j=0; j < x && number <= y; j++) {
         if (j == x-1) {
printf("%d\n", number++);
         }
         else printf("%d ", number++);
         
     }
     
 }

}