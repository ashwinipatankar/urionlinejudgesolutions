/*
 * 1046.c
 *
 *  Created on: Dec 21, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>


int main(int argc, char **argv) {
	int a, b;
	scanf("%d%d", &a, &b);
	if (a<b) {
		printf("O JOGO DUROU %d HORA(S)\n", b-a);
	}
	if (a == b) {
		printf("O JOGO DUROU 24 HORA(S)\n");
	}
	if (a>b) {
		printf("O JOGO DUROU %d HORA(S)\n", 24-a+b);
	}
}
