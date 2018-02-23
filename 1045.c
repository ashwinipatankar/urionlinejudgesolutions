/*
 * 1045.c
 *
 *  Created on: Dec 21, 2017
 *      Author: ashwini.p
 */

#include <stdio.h>
#include <string.h>


#define SWAP(x,y) do \
   { unsigned char swap_temp[sizeof(x) == sizeof(y) ? (signed)sizeof(x) : -1]; \
     memcpy(swap_temp,&y,sizeof(x)); \
     memcpy(&y,&x,       sizeof(x)); \
     memcpy(&x,swap_temp,sizeof(x)); \
    } while(0)
#define SORT(a,b,c) \
     {                          \
       if((a) > (b)) { SWAP(a,b); } \
       if((a) > (c)) { SWAP(a,c); } \
       if((b) > (c)) { SWAP(b,c); } \
     }
int main(int argc, char **argv) {
	double a, b, c = 0;
	scanf("%lf%lf%lf", &a, &b, &c);


	SORT(c,b,a);

	if (a >= (b+c)){
		printf("NAO FORMA TRIANGULO\n");
		return 0;
	}

	if ((a*a) == (b*b + c*c)) printf("TRIANGULO RETANGULO\n");
	if ((a*a)>(b*b+c*c)) printf("TRIANGULO OBTUSANGULO\n");
	if ((a*a)<(b*b+c*c)) printf("TRIANGULO ACUTANGULO\n");
	if ((a == b)&&(b == c)) printf("TRIANGULO EQUILATERO\n");
	if (((a==b)&&(a != c))||((a==c)&&(a != b))||((c==b)&&(a != c))) printf("TRIANGULO ISOSCELES\n");

	return 0;
}
