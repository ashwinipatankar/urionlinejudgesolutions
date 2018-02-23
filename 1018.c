/*
 * 1018.c
 *
 *  Created on: Dec 19, 2017
 *      Author: ashwini.p
 */

#include <stdio.h>
#include <stdlib.h>

void printResult(int hundred, int fifty, int twenty, int ten, int five, int two,
		int one, int finalnumber) {
	printf("%d\n", finalnumber);
	printf("%d nota(s) de R$ 100,00\n", hundred);
	printf("%d nota(s) de R$ 50,00\n", fifty);
	printf("%d nota(s) de R$ 20,00\n", twenty);
	printf("%d nota(s) de R$ 10,00\n", ten);
	printf("%d nota(s) de R$ 5,00\n", five);
	printf("%d nota(s) de R$ 2,00\n", two);
	printf("%d nota(s) de R$ 1,00\n", one);

}

int checkFeasibility(int hundred, int fifty, int twenty, int ten, int five,
		int two, int one, int finalnumber) {
	int ret = -1;
	int total = 0;
	total = hundred * 100 + fifty * 50 + twenty * 20 + ten * 10 + five * 5
			+ two * 2 + one * 1;
	if (total == finalnumber) {
		printResult(hundred, fifty, twenty, ten, five, two, one, finalnumber);
		exit(0);
	}
	if (total > finalnumber) {
		ret = 2;
	}

	return ret;
}

void calculate (int finalnumber) {
	int one, two, five, ten, twenty, fifty, hundred, ret = 0;
	for (one = 0, ret = -1; one < finalnumber; one++) {
		for (two = 0, ret = -1; two < finalnumber; two++) {
			for (five = 0, ret = -1; five < finalnumber; five++) {
				for (ten = 0, ret = -1; ten < finalnumber; ten++) {
					for (twenty = 0, ret = -1; twenty < finalnumber; twenty++) {
						for (fifty = 0, ret = -1; fifty < finalnumber; fifty++) {
							for (hundred = 0, ret = -1; hundred < finalnumber;
									hundred++) {
								ret = -1;
								ret = checkFeasibility(hundred, fifty, twenty,
										ten, five, two, one, finalnumber);
								if (ret == 2) {
									ret = -1;
									break;
								}
							}
						}
					}
				}
			}

		}

	}
}

int main() {
	int finalnumber = 0;
	scanf("%d", &finalnumber);

	if ()

	calculate(finalnumber);


	return 0;
}
