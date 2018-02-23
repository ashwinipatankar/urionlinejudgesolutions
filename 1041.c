/*
 * 1041.c
 *
 *  Created on: Dec 20, 2017
 *      Author: ashwini.p
 */

#include <stdio.h>

int main(int argc, char **argv) {
	float x, y = 0.0;

	scanf("%f %f", &x, &y);
	if ((x==0) && (y == 0)) {
		printf("Origem\n");

	}
	if ((x == 0 )&& (y > 0)) {
		printf("Eixo Y\n");

	}
	if ((x>0) && (y == 0)) {
		printf("Eixo X\n");
	}
	if ((x > 0) && (y > 0)){
		printf("Q1\n");
	}
	if ((x > 0) && (y < 0)){
		printf("Q4\n");
	}
	if ((x < 0) && (y > 0)) {
		printf("Q2\n");
	}
	if ((x < 0) && (y < 0)) {
		printf("Q3\n");
	}
}
