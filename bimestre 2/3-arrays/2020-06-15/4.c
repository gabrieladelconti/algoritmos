#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int m[5][5], i, j;
	
	printf("Ex 04 - Informe 25 valores inteiros para a matriz 5x5:\n\n");
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("Valor para a pos %d %d: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("\n\nMatriz 5x5 foi gerada com sucesso!\n\n");
	printf("Mostrando apenas valores dos indices pares:\n");
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(i % 2 == 0 && j % 2 == 0)
			{
				printf("%d\t", m[i][j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
