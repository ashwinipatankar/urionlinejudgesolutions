/*
 * 1021.c
 *
 *  Created on: Dec 20, 2017
 *      Author: ashwini.p
 */

#include <stdio.h>
#include <math.h>

int main() {
	float total = 0.00;
	scanf("%f", &total);
	int hundreds = 0, fifty = 0, twenty = 0, ten = 0, five = 0, two = 0,
			one = 0;
	int fiftycents = 0, twentyfive = 0, tencents = 0, fivecents = 0,
			onecent = 0;
	float amount = 0.00;
	hundreds = total / 100;
	fifty = (total - hundreds * 100) / 50;
	twenty = (total - hundreds * 100 - fifty * 50) / 20;
	ten = (total - hundreds * 100 - fifty * 50 - twenty * 20) / 10;
	five = (total - hundreds * 100 - fifty * 50 - twenty * 20 - ten * 10) / 5;
	two = (total - hundreds * 100 - fifty * 50 - twenty * 20 - ten * 10
			- five * 5) / 2;
	one = (total - hundreds * 100 - fifty * 50 - twenty * 20 - ten * 10
			- two * 2 - five * 5) / 1;
	amount = (total - hundreds * 100 - fifty * 50 - twenty * 20 - ten * 10
			- two * 2 - one - five * 5);
	amount = round(amount * 100);
	fiftycents = amount / 50;
	twentyfive = (amount - fiftycents * 50) / 25;
	tencents = (amount - fiftycents * 50 - twentyfive * 25) / 10;
	fivecents = (amount - fiftycents * 50 - twentyfive * 25 - tencents * 10)
			/ 5;
	onecent = (amount - fiftycents * 50 - twentyfive * 25 - tencents * 10
			- fivecents * 5) / 1;

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", hundreds);
	printf("%d nota(s) de R$ 50.00\n", fifty);
	printf("%d nota(s) de R$ 20.00\n", twenty);
	printf("%d nota(s) de R$ 10.00\n", ten);
	printf("%d nota(s) de R$ 5.00\n", five);
	printf("%d nota(s) de R$ 2.00\n", two);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", one);
	printf("%d moeda(s) de R$ 0.50\n", fiftycents);
	printf("%d moeda(s) de R$ 0.25\n", twentyfive);
	printf("%d moeda(s) de R$ 0.10\n", tencents);
	printf("%d moeda(s) de R$ 0.05\n", fivecents);
	printf("%d moeda(s) de R$ 0.01\n", onecent);

}
