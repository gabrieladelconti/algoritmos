#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int A[5][5], B[5][5], l, c;
	
	
	printf("Informe 25 valores para a matriz A 5x5:\n\n");
	for(l = 0; l < 5; l++)
	{
		for(c = 0; c < 5; c++)
		{
			printf("Valor para a pos %d %d: ", l, c);
			scanf("%d", &A[l][c]);
			
			if( l == c)
			{
				B[l][c] = A[l][c] * 3;
			}
			else
			{
				B[l][c] = A[l][c] * 2;
			}
		}
	}
	
	printf("\n\nMatriz A foir totalmente lida...\n");
	system("pause");
	system("cls");
	
	printf("Matriz B (gerada a partir da matriz A):\n");
	
	for(l = 0; l < 5; l++)
	{
		for(c = 0; c < 5; c++)
		{
			printf("%d\t", B[l][c]);
		}
		printf("\n");
	}
	
	return 0;
}
