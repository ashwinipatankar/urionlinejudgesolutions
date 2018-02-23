/*
 * 1020.c
 *
 *  Created on: Dec 20, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>

int main() {

	int ageindays = 0;
	int years, months, days = 0/

	scanf("%d", &ageindays);
	years = ageindays/365;
	months = (ageindays - years*365)/30;
	days = ageindays - (years * 365 + months * 30);
	printf("%d ano(s)\n", years);
	printf("%d mes(es)\n", months);
	printf("%d dia(s)\n", days);
}


