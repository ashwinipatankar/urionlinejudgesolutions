/*
 * 1094.c
 *
 *  Created on: Dec 27, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
	int N=0;
	scanf("%d", &N);
	double cp, rp, sp = 0.0;



	int i;
	int count;
	int C, R, S, Total;
	char antype[2];
	for (i=0; i < N; i++) {
		scanf("%d%s", &count, antype);

		if (antype[0] == 'C'){
			C= C+count;
			Total+= count;
		}
		else if (antype[0] == 'S') {
			S+=count;
			Total+=count;
		}
		else if (antype[0] == 'R') {
			R+=count;
			Total+=count;
		}

	}
	printf("Total: %d cobaias\n", Total);
	printf("Total de coelhos: %d\n", C);
	printf("Total de ratos: %d\n", R);
	printf("Total de sapos: %d\n", S);
	cp = C*100.00 / Total;
	rp = R*100.00 / Total;
	sp = S*100.00 / Total;
	printf("Percentual de coelhos: %0.2f %%\n", cp);
	printf("Percentual de ratos: %0.2f %%\n", rp);
	printf("Percentual de sapos: %0.2f %%\n", sp);

}
