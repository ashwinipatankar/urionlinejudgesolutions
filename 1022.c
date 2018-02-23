/*
 * 1022.c
 *
 *  Created on: Dec 20, 2017
 *      Author: ashwini.p
 */
#include <stdio.h>

int main() {
	int a, b, c, d = 0;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	if ((b > c) && (d > a) && ((c + d) > (a + b)) && (c > 0) && (d > 0)
			&& (a % 2 == 0))
		printf("Valores aceitos\n");
	else
		printf("Valores nao aceitos\n");
}

