/*
 * 1043.c
 *
 *  Created on: Dec 21, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>

void traparea(double a, double b, double c) {

	printf("Area = %0.1lf\n", (a+b)*c*0.5);

}
int main(int argc, char **argv) {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);

	if (((a+b) <= c) || ((b+c)<=a) || ((a+c)<=b)) {
		traparea(a, b, c);
	}
	else {
		printf("Perimetro = %0.1lf\n", a+b+c);
	}

	return 0;

}
