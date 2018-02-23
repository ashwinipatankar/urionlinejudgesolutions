#include <stdio.h>


int main() {

  signed int n = 0;
  double sum=0, count = 0;
  double average = 0.0;
scanf("%d", &n);

  while (n>=0) {
      
      sum = sum + n;
      count++;
      scanf("%d", &n);
  }
  average = sum/count;
  printf("%0.2lf\n",average );
}