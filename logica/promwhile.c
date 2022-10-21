#include<stdio.h>
/*promedio de 10 numeros con while*/

int main () {

float i=0, n1=0, tot=0, res=0;

	while (i!=10){
		printf("Ingrese numero:\n");
		scanf("%f", &n1);
		tot = n1 + tot;
		i = i + 1;
	}
	res = tot / 10;
	printf("El promedio es: %.2f \n", res);
}