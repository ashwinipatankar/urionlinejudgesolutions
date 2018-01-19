/*
 * 2031.c
 *
 *  Created on: 15-Jan-2018
 *      Author: ashwinipatankar
 */

#include <stdio.h>
#include <string.h>

int main() {
	int n = 0;
	int i = 0;

	char p1[20], p2[20];
	int p1n, p2n = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%s%s", p1, p2);
		if (strcmp(p1, "ataque") == 0)
			p1n = 1;
		else if (strcmp(p1, "pedra") == 0)
			p1n = 2;
		else if (strcmp(p1, "papel") == 0)
			p1n = 3;
		if (strcmp(p2, "ataque") == 0)
			p2n = 1;
		else if (strcmp(p2, "pedra") == 0)
			p2n = 2;
		else if (strcmp(p2, "papel") == 0)
			p2n = 3;

		if (p1n == 1 && p2n ==1) printf("Aniquilacao mutua\n");
		else if (p1n == 1 && p2n ==2) printf("Jogador 1 venceu\n");
		else if (p1n == 1 && p2n ==3) printf("Jogador 1 venceu\n");
		else if (p1n == 2 && p2n ==1) printf("Jogador 2 venceu\n");
		else if (p1n == 2 && p2n ==2) printf("Sem ganhador\n");
		else if (p1n == 2 && p2n ==3) printf("Jogador 1 venceu\n");
		else if (p1n == 3 && p2n ==1) printf("Jogador 2 venceu\n");
		else if (p1n == 3 && p2n ==2) printf("Jogador 2 venceu\n");
		else if (p1n == 3 && p2n ==3) printf("Ambos venceram\n");
	}
}

