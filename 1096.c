/*
 * 1096.c
 *
 *  Created on: Dec 27, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>


int main(int argc, char **argv) {
	int I=0, J=0;


	for (I=1; I <=9; I+=2) {
		for (J=7; J>=5; J--){
			printf("I=%d J=%d\n", I, J);
		}
	}
}
