#include <stdio.h>

int main() {
	//BUCLES
	//WHILE, DO-WHILE, FOR
	int i, j, res;
	//for
	for (i = 1; i <= 10; i++) {

		printf("Tabla del %i\n", i);

		for (j = 1; j <= 10; j++) {

			printf("%i x %i : %i\n", i , j , i*j);

		}

		printf("\n\n");
	}


}