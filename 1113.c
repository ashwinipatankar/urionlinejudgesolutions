/*
 * 1113.c
 *
 *  Created on: Dec 27, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>

int main(int argc, char **argv) {
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define max(a, b) (((a) > (b)) ? (a) : (b))
 int x, y;
 int i=0, sum=0;
 do {
	 scanf("%d %d", &x, &y);
	 if (x>0 && y >0) {
		 if (x > y) printf("Decrescente\n");
		 else if (x < y) printf("Crescente\n");

	 }

 }while (x!= y);
}
