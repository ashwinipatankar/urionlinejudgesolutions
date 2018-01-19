/*
 * 2029.c
 *
 *  Created on: 16-Jan-2018
 *      Author: ashwinipatankar
 */


#include <stdio.h>

int main() {

	double v, d =0;
	double a = 0;
	double height  = 0;
	double r = 0;
	while(scanf("%lf", &v) != EOF) {
		scanf("%lf", &d);
		r = d / 2.0;
		height = v / (3.14 * r*r);
		a = 3.14 * r * r;
		printf("ALTURA = %0.2lf\n", height);
		printf("AREA = %0.2lf\n", a);

	}
}

