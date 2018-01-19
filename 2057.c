/*
 * 2057.c
 *
 *  Created on: 15-Jan-2018
 *      Author: ashwinipatankar
 */


#include <stdio.h>

int main() {
	int s, t = 0;
	    signed int z = 0;

	    scanf("%d %d %d", &s, &t, &z);
	    signed int total = s + t+ z;
	    if (total < 24 && total >= 0) printf("%d\n", total);
	    else if (total < 0) printf("%d\n", 24+total);
	    else printf("%d\n", total - 24);
}
