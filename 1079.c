/*
 * 1079.c
 *
 *  Created on: Dec 26, 2017
 *      Author: ashwini.p
 */

#include <stdio.h>


int main() {

	int N;
	double arr1[N+1];
	double arr2[N+1];
	double arr3[N+1];
	double x, y, z=0;
	double numerator = 0.0;
	int i=0;
	scanf("%d", &N);


	for (i=0; i<N;i++) {
		scanf("%lf %lf %lf", &x, &y, &z);
		arr1[i] = x;
		arr2[i] = y;
		arr3[i] = z;

	}

	for (i=0; i<N; i++) {
		numerator = (arr1[i]*2 + arr2[i]*3+arr3[i]*5);
		//printf("%lf %lf %lf %lf\n", arr1[i], arr2[i], arr3[i], numerator);
		printf("%0.1lf\n", numerator/10.0);
	}
}
