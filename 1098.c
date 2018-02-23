/*
 * 1098.c
 *
 *  Created on: Dec 27, 2017
 *      Author: ashwini.p
 */

#include <stdio.h>

int main(int argc, char **argv) {
	double I = 0, J = 0;
	double x = 1;
	int count = 0;
	double y = 0;

	for (I = 0; I <= 2; I += 0.2) {
		for (J = x; count < 3; J++) {
			count++;
			if (I == 1 || I == 2 || I == 0) {

				printf("I=%1.0lf J=%l.0f\n", I, J);
			} else
				printf("I=%1.1lf J=%l.1f\n", I, J);

		}
		x = x + 0.2;
		count = 0;

	}

}
