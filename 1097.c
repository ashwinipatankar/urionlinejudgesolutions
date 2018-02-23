/*
 * 1097.c
 *
 *  Created on: Dec 27, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>


int main(int argc, char **argv) {
	int I=0, J=0;
	int x = 5;


	for (I=1; I <=9; I+=2) {
		for (J=x+2; J>=x; J--){
			printf("I=%d J=%d\n", I, J);
		}
		x+=2;
	}
}
