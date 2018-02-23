/*
 * 1047.c
 *
 *  Created on: Dec 21, 2017
 *      Author: ashwini.p
 */



#include <stdio.h>


int main(int argc, char **argv) {
	int a, b, x, y;
	scanf("%d%d%d%d", &a, &x, &b, &y);
	int hours, minutes;
	if (a<b) {
		hours = b*60+y - a*60-x;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours/60, hours % 60);
	}
	if ((a == b)&&(x==y)) {
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}
	if (a>b) {
		hours = 24*60 - a*60 -x + b*60 +y;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours/60, hours%60);
	}
}
