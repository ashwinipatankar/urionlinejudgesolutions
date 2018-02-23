/*
 * 1099.c
 *
 *  Created on: Dec 27, 2017
 *      Author: ashwini.p
 */

#include <stdio.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define max(a, b) (((a) > (b)) ? (a) : (b))
int main(int argc, char **argv) {

	int N, first, last;

	scanf("%d", &N);
	int i = 0, j = 0, sum = 0;
	int arr[N];
	for (i = 0; i < N; i++) {
		scanf("%d %d", &first, &last);
		for (j = min(first, last) + 1; j < max(first, last); j++) {
			if (j % 2 != 0) {
				sum += j;
			}
		}
		arr[i] = sum;
		sum = 0;
	}
	for (i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}

}
