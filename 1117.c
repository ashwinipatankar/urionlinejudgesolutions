/*
 * 1117.c
 *
 *  Created on: Dec 27, 2017
 *      Author: ashwini.p
 */



#include <stdio.h>

int main(int argc, char **argv) {
	double x, sum, avg;
	int count =0;

	do {
		scanf("%lf", &x);
		if (x >= 0 && x <= 10.0) {
			count++;
			sum = sum + x;
		} else printf("nota invalida\n");

	}while(count <2);
	printf("media = %0.2lf\n", sum / 2.0);
}
