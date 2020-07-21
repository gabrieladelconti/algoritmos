#include <stdio.h>
#include <stdlib.h>

void ex01(int n1, int n2)
{
	int result = n1 * n2;
	printf("\nO produto entre %d e %d = %d", n1, n2, result);
}


int main(int argc, char *argv[]) 
{
	int n1, n2;
	
	printf("Ex 01 - Informe dois valores inteiros:\n\n");
	printf("Primeiro valor: ");
	scanf("%d", &n1);
	printf("Segundo valor: ");
	scanf("%d", &n2);
	
	ex01(n1, n2);
	
	return 0;
}
