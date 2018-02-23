

#include <stdio.h>

int main(int argc, char **argv) {
	int number ;
	int i ;

	scanf("%d", &number);


	for (i=1; i <= number; i++) {
		if (i %2 != 0) {
			printf("%d\n", i);
		}
	}
}
