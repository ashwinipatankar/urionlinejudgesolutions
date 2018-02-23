/*
 * 1073.c
 *
 *  Created on: Dec 26, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>

int main(int argc, char **argv) {
	int N=0;
	scanf("%d", &N);

	int i=0;
	for(i=1; i<=N; i++){
		if(i%2 == 0) {
			printf("%d^2 = %d\n", i, i*i);
		}
	}
}
