/*
 * 2164.c
 *
 *  Created on: 17-Jan-2018
 *      Author: ashwinipatankar
 */

#include <stdio.h>

#include <math.h>
int main() {
	int number = 0;
	double fib = 0;
	double num1, num2 = 0;
	double nu, ny = 0;
	double x, y= 0;

	scanf("%d", &number);
	nu = 0.5 *(1+sqrt(5));
	ny = 0.5 *(1 - sqrt(5));
	x = pow(nu ,number);
	y = pow(ny, number);
	fib  = (x -y) / sqrt(5);;

	//fib = (num1 - num2) / sqrt(5);
	//fib = (double) ((((1+sqrt(5))/2)^number) - ((1-sqrt(5))/2)^number) / sqrt(5.0);
	printf("%0.1lf\n", fib);
}

