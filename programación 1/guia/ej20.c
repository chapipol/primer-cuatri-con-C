#include<stdio.h>

/*20. Hacer el algoritmo que nos permita contar los múltiplos de 3 desde la unidad hasta un
número que introducimos por teclado.*/

int main () 
{
	int i, n, cont=0;
	
	printf("Ingrese un numero: ");
	scanf("%i", &n);
	
	for(i=0;i<=n;i++)
	{		
		if(i % 3 == 0)
		{
			cont++;
		}
	}
	
	printf("los multiplos de 3 son: %i", cont);
}
