/*
 * 1114.c
 *
 *  Created on: Dec 27, 2017
 *      Author: ashwini.p
 */

#include <stdio.h>

int main(int argc, char **argv) {
	 int x, y;

	 do {
		 scanf("%d", &x);
		 if (x == 2002) {
			 printf("Acesso Permitido\n");

		 }
		 else
			 printf("Senha Invalida\n");

	 }while (x!= 2002);
}


