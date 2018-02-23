/*
 * 1116.c
 *
 *  Created on: Dec 27, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>

int main(int argc, char **argv) {
	double x, y;
	int N;
	int i;

	scanf("%d", &N);
	for (i=0; i < N; i++){
		scanf("%lf %lf", &x, &y);
		if (y==0) printf("divisao impossivel\n");
		else printf("%0.1f\n", x/y);
	}
}
