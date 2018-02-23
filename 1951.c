/*
 * 1951.c
 *
 *  Created on: Dec 26, 2017
 *      Author: ashwini.p
 */
#include <stdio.h>

int main(int argc, char **argv) {

	double income ;
	double tax ;
	scanf("%lf", &income);


	if (income >=0 && income <=2000.00) {
		printf("%s\n", "Isento");
	}
	else if (income > 2000.00 && income <= 3000.00) {
		printf("R$ %0.2lf\n", (income - 2000.00)* 0.08);

	}
	else if (income > 3000.00 && income <= 4500.00) {
		tax = (income - 3000.00)*0.18 + 1000.00*0.08;
		printf("R$ %0.2lf\n", tax);


	}
	else if (income > 4500.00) {
		tax = (income - 4500.00)*0.28 + 1000.00*0.08 + 1500.00*0.18;
				printf("R$ %0.2lf\n", tax);
	}
}


