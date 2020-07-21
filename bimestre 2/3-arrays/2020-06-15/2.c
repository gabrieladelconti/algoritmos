#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int m[3][3], i, j, somap = 0, somas = 0, result;
	
	printf("Ex 02 - Informe 9 valores inteiros para a matriz 3x3:\n\n");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Informe o valor para a pos %d %d: ", i, j);
			scanf("%d", &m[i][j]);
			
			if(i == j)
			{
				somap += m[i][j];
			}
			
			if(i+j == 2)
			{
				somas += m[i][j];
			}
		}
	}
	
	printf("\n\nMatriz 3x3 foi gerada com sucesso!\n\n");
	
	result = somap - somas;
	printf("A subtracao entre as somas das diagonais = %d", result);
	
	
	return 0;
}
