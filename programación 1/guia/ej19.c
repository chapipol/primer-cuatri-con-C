#include<stdio.h>
/*19. Hacer el algoritmo que imprima todos los n�meros naturales que hay desde la unidad
hasta un n�mero que introducimos por teclado.*/

int main () 
{
	int i, n, total=0;
	
	printf("Ingrese un numero entero: ");
	scanf("%i", &n);
	
	for(i=1;i<=n;i++)
	{		
		printf("%i-", i);
	}
	
}
