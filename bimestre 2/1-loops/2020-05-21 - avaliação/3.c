#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int cont, x, exp;
	float soma = 0;

	printf("Digite um valor para X: ");
	scanf("%d", &x);

	for (cont = 1; cont <= 25; cont++) 
	{
	    exp = 25 - (cont - 1);
	    soma += (pow(x, exp) / (float)cont);
	}
	
	printf("\nResultado: ");
	printf("\nS = %f", soma);
	
	return 0;
}
