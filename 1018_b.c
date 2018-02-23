/*
 * 1018_b.c
 *
 *  Created on: Dec 19, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>
int main() {
	int finalnumber = 0;
	scanf("%d", &finalnumber);

	int hundreds, fifty, twenty, ten, five, two, one = 0;

	hundreds = finalnumber / 100;
	fifty = (finalnumber - hundreds*100) /50;
	twenty = (finalnumber - hundreds*100 - fifty*50)/20;
	ten = (finalnumber - hundreds*100 - fifty*50 - twenty*20)/10;
	five = (finalnumber - hundreds*100 - fifty*50 - twenty*20 - ten*10)/5;
	two = (finalnumber - hundreds*100 - fifty*50 - twenty*20 - ten*10 - five*5)/2;
	one = (finalnumber - hundreds*100 - fifty*50 - twenty*20 - ten*10 - five*5 - two*2)/1;

 printf("%d\n", finalnumber);
	printf("%d nota(s) de R$ 100,00\n", hundreds);
	printf("%d nota(s) de R$ 50,00\n", fifty);
	printf("%d nota(s) de R$ 20,00\n", twenty);
	printf("%d nota(s) de R$ 10,00\n", ten);
	printf("%d nota(s) de R$ 5,00\n", five);
	printf("%d nota(s) de R$ 2,00\n", two);
	printf("%d nota(s) de R$ 1,00\n", one);
	return 0;

}
