/*
 * 1042.c
 *
 *  Created on: Dec 20, 2017
 *      Author: ashwini.p
 */

//int firstone = (A+B+abs(A-B))/2;
//  printf("%d eh o maior\n", (firstone+C+abs(firstone-C))/2);
#include <stdio.h>
int main(int argc, char **argv) {
	int arr[3];
	int ref[3];
	int x, y, z;
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);

	if (x > y && x > z) {

		if (y > z) {
			printf("%d\n", z);
			printf("%d\n", y);

		} else {
			printf("%d\n", y);
			printf("%d\n", z);

		}
		printf("%d\n", x);
	}
	if (y > x && y > z) {

		if (x > z) {
			printf("%d\n", z);
			printf("%d\n", x);

		} else {
			printf("%d\n", x);
			printf("%d\n", z);

		}
		printf("%d\n", y);
	}
	if (z > x && z > y) {

		if (x > y) {
			printf("%d\n", y);
			printf("%d\n", x);

		} else {
			printf("%d\n", x);
			printf("%d\n", y);

		}
		printf("%d\n", z);
	}
	printf("\n");
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);


}

