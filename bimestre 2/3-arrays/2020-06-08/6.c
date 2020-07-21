#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int m[4][4], i, j, cont1 = 0, cont2 = 0;
	
	printf("Informe 16 valores inteiros para a matriz 4x4:\n\n");
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("Valor para a pos %d %d: ", i, j);
			scanf("%d", &m[i][j]);
			
			if(i == j && m[i][j] == 1)
			{
				cont1++;
			}
			else if (i != j && m[i][j] == 0)
			{
				cont2++;
			}
		}
	}
	
	printf("\n\nMatriz 4x4 foi totalmente lida...\n\n");
	
	if(cont1 == 4 && cont2 == 12)
	{
		printf("Matriz identidade!");
	}
	else
	{
		printf("Nao e uma Matriz identidade!");
	}
	
	return 0;
}
