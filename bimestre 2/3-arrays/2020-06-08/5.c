#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a[5][2], b[5][2], i, j, soma = 0, mult = 1;
	
	printf("Informe 10 valores inteiros para a matriz 5x2:\n\n");
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("Valor para a pos %d %d: ", i, j);
			scanf("%d", &a[i][j]);
			
			soma += a[i][j];
			mult *= a[i][j];
		}
	}
	
	printf("\n\nMatriz A totalmente lida...\n\n");
	
	printf("Matriz B:\n");
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 2; j++)
		{
			if(j == 0)
			{
				b[i][j] = soma;
			}
			else
			{
				b[i][j] = mult;
			}
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
