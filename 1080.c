/*
 * 1080.c
 *
 *  Created on: Dec 26, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>

int main(int argc, char **argv) {
	int N;
	int i;
	int position=0, highest=0;


	for (i=0; i < 100; i++){
		scanf("%d", &N);
		if (N > highest) {
			position = i;
			highest = N;
		}

	}
	printf("%d\n%d\n", highest, position);
}
