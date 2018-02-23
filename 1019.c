/*
 * 1019.c
 *
 *  Created on: Dec 19, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>

int main(){
	int seconds = 0;
	int h, m, s = 0;


	scanf("%d", &seconds);
	h = seconds /(60*60);
	m = seconds/60  - h* 60;
	s = seconds - h* 60*60 - m*60;

	printf("%d:%d:%d\n", h,m,s);
	return 0;
}
