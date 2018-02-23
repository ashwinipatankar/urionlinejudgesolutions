/*
 * 1049.c
 *
 *  Created on: Dec 26, 2017
 *      Author: ashwini.p
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void printmessage(char *typeofanimal) {
	printf("%s\n", typeofanimal);
}

int main(int argc, char **argv) {
	char one[] = { };
	char two[] = { };
	char three[] = { };

	scanf("%s", one);

	if (strcmp(one,"vertebrado" )==0) {
		scanf("%s", two);
		if (strcmp(two, "ave")==0){
			scanf("%s", three);
			if(strcmp(three, "carnivoro")==0){
				printmessage("aguia");
			}else if (strcmp(three, "onivoro")==0){
				printmessage("pomba");
			}
		}else if (strcmp(two, "mamifero")==0){
			scanf("%s", three);
			if(strcmp(three, "onivoro")==0) {
				printmessage("homem");
			}else if (strcmp(three, "herbivoro")==0) {
				printmessage("vaca");
			}
		}
	}else if (strcmp(one,"invertebrado" )==0) {
		scanf("%s", two);
		if (strcmp(two, "inseto")==0){
			scanf("%s", three);
			if(strcmp(three, "hematofago")==0){
				printmessage("pulga");
			}else if (strcmp(three, "herbivoro")==0){
				printmessage("lagarta");
			}
		}else if (strcmp(two, "anelideo")==0){
			scanf("%s", three);
			if(strcmp(three, "hematofago")==0) {
				printmessage("sanguessuga");
			}else if (strcmp(three, "onivoro")==0) {
				printmessage("minhoca");
			}
		}
	}

}
