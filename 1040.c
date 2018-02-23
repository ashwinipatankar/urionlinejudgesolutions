/*
 * 1040.c
 *
 *  Created on: Dec 20, 2017
 *      Author: ashwini.p
 */

#include <stdio.h>

int main() {

	float x, y, z, a, exam;
	int r = 0;
	scanf("%f %f %f %f", &x, &y, &z, &a);

	float average = (2 * x + 3 * y + 4 * z + 1 * a) / (2 + 3 + 4 + 1);
	float newawerage = 0.0;

	if (average >= 7.0) {
		r = 1;
	} else if (average < 5.0) {
		r = 2;
	} else if ((average >= 5.0) && (average <= 6.9)) {

		scanf("%f", &exam);
		printf("Media: %0.1f\n", average);
		printf("Aluno em exame.\n");
		printf("Nota do exame: %0.1f\n", exam);
		newawerage = (average + exam) / 2;
		if (newawerage >= 5.0) {
			printf("Aluno aprovado.\n");
			printf("Media final: %0.1f\n", newawerage);
		} else if (newawerage < 5.0) {
			printf("Aluno reprovado.\n");
			printf("Media final: %0.1f\n", newawerage);
		}
		return 0;

	}
	printf("Media: %0.1f\n", average);
	switch (r) {
	case 1:
		printf("Aluno aprovado.\n");
		break;
	case 2:
		printf("Aluno reprovado.\n");
		break;
	}

}
