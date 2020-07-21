#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a[3][4], b[4][3], i, j;
	
	printf("Ex 03 - Informe 12 valores inteiros para a matriz 3x4:\n\n");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("Informe o valor da pos %d %d: ", i, j);
			scanf("%d", &a[i][j]);
			
			b[j][i] = a[i][j];
		}
	}
	
	printf("\n\nMatriz 3x4 foi gerada com sucesso!\n");
	
	system("pause");
	system("cls");
	
	printf("Exibindo matriz A (3x4):\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\n\nExibindo matriz B (4x3), transpostade A:\n");
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
