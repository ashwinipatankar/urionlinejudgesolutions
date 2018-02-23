/*
 * 1023.c
 *
 *  Created on: Dec 20, 2017
 *      Author: ashwini.p
 */

#include <stdio.h>

#include <math.h>

int main() {
	float a, b, c = 0.0;
	float R1, R2 = 0.0;
	scanf("%f %f %f", &a, &b, &c);

	if ((a == 0) || ((b * b - 4 * a * c) < 0)) {
		printf("Impossivel calcular\n");
		return 0;
	}
	R1 = (-b+sqrt(b*b - 4*a*c))/(2*a);
	R2 = (-b-sqrt(b*b - 4*a*c))/(2*a);

	printf("R1 = %0.5f\n", R1);
	printf("R2 = %0.5f\n", R2);

}
