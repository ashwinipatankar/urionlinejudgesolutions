/*
 * 1095.c
 *
 *  Created on: Dec 27, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>

int main(int argc, char **argv) {
	int I=0, J=0;


	for (J=60, I=1; J>=0; J-=5, I+=3) {
		printf("I=%d J=%d\n", I, J);
	}

}
