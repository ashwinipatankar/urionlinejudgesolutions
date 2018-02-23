/*
 * 1065.c
 *
 *  Created on: Dec 26, 2017
 *      Author: ashwini.p
 */

#include <stdio.h>

int main(int argc, char **argv) {
	int i = 0;
	int count = 0;
	float sum = 0;
	int number;

	for (i=0; i<5; i++) {
		scanf("%d", &number);
		if (number%2 == 0 ) {
			count++;

		}
	}
	printf("%d valores pares\n", count);

}


