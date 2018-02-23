/*
 * 1038.c
 *
 *  Created on: Dec 20, 2017
 *      Author: ashwini.p
 */

#include <stdio.h>

int main(){

	float arr[]={4.0, 4.50, 5.0, 2.0, 1.5};
	int x, y;

	scanf("%d %d", &x, &y);

	printf("Total: R$ %0.2f\n", y*arr[x-1]);

}
