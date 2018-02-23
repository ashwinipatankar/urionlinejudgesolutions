/*
 * 1078.c
 *
 *  Created on: Dec 26, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>

int main(int argc, char **argv) {
	int N;
	int i;
	scanf("%d", &N);

	for(i=1; i <=10; i++) {
		printf("%d x %d = %d\n", i, N, i*N);
	}
}
