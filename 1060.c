/*
 * 1060.c
 *
 *  Created on: Dec 26, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>

int main(int argc, char **argv) {
	int i = 0;
	int count = 0;
	double number;

	for (i=0; i<6; i++) {
		scanf("%lf", &number);
		if (number > 0 ) count++;
	}
	printf("%d valores positivos\n", count);


}
