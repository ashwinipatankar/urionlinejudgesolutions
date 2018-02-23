/*
 * 1048.c
 *
 *  Created on: Dec 26, 2017
 *      Author: ashwini.p
 */

#include <stdio.h>

void printmessage(double newsalary, double increase, double percentage) {
	printf("Novo salario: %0.2lf\n", newsalary);
	printf("Reajuste ganho: %0.2lf\n", increase);
	printf("Em percentual: %0.0lf %\n", percentage);
}

int main() {

	double csalary;
	double percentageincrease = 0;
	double newsalary;

	scanf("%lf", &csalary);

	if (csalary >= 0 && csalary <= 400.00) {
		percentageincrease = 15;

	} else if (csalary >= 400.01 && csalary <= 800.00) {
		percentageincrease = 12;

	} else if (csalary >= 800.01 && csalary <= 1200.00) {
		percentageincrease = 10;

	} else if (csalary >= 1200.01 && csalary <= 2000.00) {
		percentageincrease = 7;

	} else if (csalary >= 2000.01) {
		percentageincrease = 4;

	}
	newsalary = csalary + csalary * percentageincrease / 100.00;

	printmessage(newsalary, newsalary - csalary, percentageincrease);
}
