#include <stdio.h>
/* De 10 numeros ingresados indicar cuantos son mayores a
cero y cuantos son menores a cero  */
int main () {

	int n1, i, menores=0, mayores=0;

	for (i=0;i<10;i++) {

		printf("Ingrese un numero: \n");
		scanf("%i", &n1);

		if(n1>0) {
			mayores++;
		} else if (n1<0) {
			menores++;
		} else {
			printf("No ingrese 0\n");
			i--;
		}
	}

	printf("Hay %i negativos, y %i positivos\n", menores, mayores);

}