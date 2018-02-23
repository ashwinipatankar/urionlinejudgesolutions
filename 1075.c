/*
 * 1075.c
 *
 *  Created on: Dec 26, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>

int main(int argc, char **argv) {
	int N;
	int i=0;

	scanf("%d", &N);

	for (i=1;i<=10000; i++) {
		if (i%N == 2) printf("%d\n", i);
	}
}


