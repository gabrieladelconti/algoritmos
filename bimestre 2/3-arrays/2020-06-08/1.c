#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a[5][5], b[5][5], l, c;
	
	printf("Informe 25 valores inteiros para a matriz A:\n\n");
	for(l = 0; l < 5; l++)
	{
		for(c = 0; c < 5; c++)
		{
			printf("Valor para a pos %d %d: ", l, c);
			scanf("%d", &a[l][c]);
			
			b[l][c] = a[l][c] * 3;
		}
	}
	
	printf("\n\nOs 25 valores foram lidos!\n");
	system("pause");
	system("cls");
	
	printf("Valores da matriz B (triplo da mat A):\n");
	for(l = 0; l < 5; l++)
	{
		for(c = 0; c < 5; c++)
		{
			printf("%d\t", b[l][c]);
		}
		printf("\n");
	}
	
	
	return 0;
}
