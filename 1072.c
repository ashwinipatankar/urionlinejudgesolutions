/*
 * 1072.c
 *
 *  Created on: Dec 26, 2017
 *      Author: ashwini.p
 */

#include <stdio.h>

int main(int argc, char **argv) {
	int testcases = 0;
	signed long int number =0;
	int i=0;
	int incount=0, outcount=0;

	scanf("%d", &testcases);

	for (i=0; i<testcases; i++) {
		scanf("%ld", &number);
		if (number >=10 && number <=20){
			incount++;
		}
		else outcount++;
	}
	printf("%d in\n", incount);
	printf("%d out\n", outcount);
}


