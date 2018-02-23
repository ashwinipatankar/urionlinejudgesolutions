/*
 * 1066.c
 *
 *  Created on: Dec 26, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>

int main(int argc, char **argv) {
	int i = 0;
		int count = 0;
		int positive = 0;
		int even = 0;
		int odd = 0;
		int negative = 0;

		int number;

		for (i=0; i<5; i++) {
			scanf("%d", &number);
			if (number%2 == 0 ) {
				even++;

			}else odd++;
			if (number > 0 ) {
				positive++;
			}else if (number < 0) negative++;
		}
		printf("%d valor(es) par(es)\n", even);
		printf("%d valor(es) impar(es)\n", odd);
		printf("%d valor(es) positivo(s)\n", positive);
		printf("%d valor(es) negativo(s)\n", negative);

}
