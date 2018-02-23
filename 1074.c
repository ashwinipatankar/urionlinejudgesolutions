/*
 * 1074.c
 *
 *  Created on: Dec 26, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>

int main(int argc, char **argv) {
	int N;
	scanf("%d", &N);
	signed int x[N];
	int i;

	for (i=0; i < N; i++) {
		scanf("%d", &x[i]);
	}
	for (i=0; i < N; i++) {
		if (x[i]==0) {
			printf("NULL\n");
		}
		else if (x[i] >0 && x[i]%2 == 0) {
			printf("EVEN POSITIVE\n");

		}else if (x[i]  >0 && x[i] %2 != 0) {
			printf("ODD POSITIVE\n");
		}
		else if (x[i] <0 && x[i] %2 == 0) {
			printf("EVEN NEGATIVE\n");

		}
		else if (x[i] <0 && x[i] %2 != 0) {
			printf("ODD NEGATIVE\n");
		}
	}
}
