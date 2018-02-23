/*
 * 1037.c
 *
 *  Created on: Dec 20, 2017
 *      Author: ashwini.p
 */

#include <stdio.h>

int main() {
	float number = 0.0;
	scanf("%f", &number);

	if (number < 0 || number > 100) {
		printf("Fora de intervalo\n");
		return 0;
	}

	//[0,25] (25,50], (50,75], (75,100].
	if (((number >= 0) && (number <= 25))) {
		printf("Intervalo [0,25]\n");
	}
	if ((number > 25) && (number <= 50)) {
		printf("Intervalo (25,50]\n");
	}
	if ((number > 50) && (number <= 75)) {
		printf("Intervalo (50,75]\n");
	}
	if ((number > 75) && (number <= 100)) {
		printf("Intervalo (75,100]\n");
	}
}
