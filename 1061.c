/*
 * 1061.c
 *
 *  Created on: Dec 26, 2017
 *      Author: ashwini.p
 */


#include <stdio.h>


int main(int argc, char **argv) {
	int startday = 0, endday  = 0;
	int totalminutes = 0;
	char dn[10], symbol[2];
	int starthour, startminute, startsecond = 0;
	int endhour, endminute, endsecond = 0;
	int dias, hora, minuto, segunda = 0;
	int i = 0;


	scanf("%s%d", dn, &startday);
	scanf("%d%s%d%s%d", &starthour, symbol, &startminute, symbol, &startsecond);

	scanf("%s%d", dn, &endday);
	scanf("%d%s%d%s%d", &endhour, symbol, &endminute, symbol, &endsecond);

	//printf("%d %d %d %d %d %d %d %d\n", startday, starthour, startminute, startsecond, endday, endhour, endminute, endsecond);

	if (startday == endday) {
		dias = 0;
		totalminutes = (endhour*60*60) + endminute*60 + endsecond;
		totalminutes = totalminutes - (starthour*60*60 + startminute*60 + startsecond) ;
		hora = totalminutes / (60*60);
		minuto = (totalminutes - hora*60*60)/60;
		segunda = (totalminutes - hora*60*60 - minuto*60);
	}
	else {
		totalminutes = 24*60*60 - (starthour*60*60 + startminute*60 + startsecond) ;
		totalminutes += (endhour*60*60) + endminute*60 + endsecond;
		for (i=1; i < (endday-startday);i++) {
			totalminutes += 24*60*60;
		}
	//	printf("The total minutes are %d\n", totalminutes);
		dias = totalminutes / (24*60*60);
		hora = (totalminutes - dias*24*60*60)/(60*60);
		minuto = (totalminutes - dias*24*60*60 - hora*60*60)/60;
		segunda = (totalminutes - dias*24*60*60 - hora*60*60 - minuto*60);

	}


	printf("%d dia(s)\n", dias);
	printf("%d hora(s)\n", hora);
	printf("%d minuto(s)\n", minuto);
	printf("%d segundo(s)\n", segunda);
}
