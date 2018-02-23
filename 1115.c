/*
 * 1115.c
 *
 *  Created on: Dec 27, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>


int main(int argc, char **argv) {
	 signed int x, y;
	 int i=0, sum=0;
	 do {
		 scanf("%d %d", &x, &y);
		 if (x>0 && y >0) {
			printf("primeiro\n");
		 }
		 else if (x<0 && y > 0) {
			 printf("segundo\n");

		 }else if (x<0 && y <0) {
			 printf("terceiro\n");

		 }else if (x>0 && y < 0) {
			 printf("quarto\n");
		 }

	 }while (x!= 0 && y != 0);
}
