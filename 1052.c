/*
 * 1052.c
 *
 *  Created on: Dec 26, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>


int main(int argc, char **argv) {
	char months[][100] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

	int number ;

	scanf("%d", &number);

	printf("%s\n", months[number-1]);


}
