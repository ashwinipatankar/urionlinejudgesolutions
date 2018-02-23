/*
 * 1071.c
 *
 *  Created on: Dec 26, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>

int main(int argc, char **argv) {
	int x, y;
	signed int i=0;
	signed int sum=0;
	scanf("%d", &x);
	scanf("%d", &y);

	if (x==y) {
		printf("0\n");
		return 0;
	}

	if (x < y) {
		for(i = x+1; i < y; i++){
			if (i%2 != 0){
				sum += i;
			}
		}
	}else {
		for (i=y+1; i < x; i++) {

			if (i%2 != 0) {
				sum+= i;
			}
		}
	}

	printf("%d\n", sum);
}
