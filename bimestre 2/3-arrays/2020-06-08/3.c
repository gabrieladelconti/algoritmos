#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int m[4][5], l, c, pares = 0;
	
	printf("Informe 20 valores inteiros para a matriz A:\n\n");
	for(l = 0; l < 4; l++)
	{
		for(c = 0; c < 5; c++)
		{
			printf("Valor para a pos %d %d: ", l, c);
			scanf("%d", &m[l][c]);
			
			if(m[l][c] > 0 && m[l][c] % 2 == 0)
			{
				pares++;
			}
		}
	}
	
	printf("\n\nOs 20 valores foram lidos!\n");
	system("pause");
	system("cls");
	
	printf("Quantidade de valores pares lidos: %d ", pares);
	
	return 0;
}
