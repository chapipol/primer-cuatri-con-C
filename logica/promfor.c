#include<stdio.h>

int main () {

float i=0, n1=0, tot=0, res=0;

	for (i=0 ;i < 10; i++){
		printf("Ingrese numero:\n");
		scanf("%f", &n1);
		tot = n1 + tot;
	}
	res = tot / 10;
	printf("El promedio es: %.2f \n", res);
}
