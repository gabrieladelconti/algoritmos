#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int m[5][5], i, j;
	
	printf("Ex 01 - Informe valores inteiros para a matriz:\n\n");
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			// verificar se linha > coluna
			if(i > j)
			{
				m[i][j] = 0;
			}
			else
			{
				printf("Informe o valor da pos %d %d: ", i, j);
				scanf("%d", &m[i][j]);
			}
		}
	}
	
	printf("\n\nMatriz triangular superior gerada com sucesso!\n");
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
