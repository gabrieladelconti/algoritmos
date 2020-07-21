#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int m[3][4], l, c, maior, menor;
	
	printf("Informe 12 valores inteiros para a matriz:\n\n");
	for(l = 0; l < 3; l++)
	{
		for(c = 0; c < 4; c++)
		{
			printf("Valor para a pos %d %d: ", l, c);
			scanf("%d", &m[l][c]);
			
			if(l == 0 && c == 0)
			{
				menor = m[0][0];
				maior = m[0][0];
			}
			else if (m[l][c] < menor)
			{
				menor = m[l][c];
			}
			else if (m[l][c] > maior)
			{
				maior = m[l][c];
			}
		}
	}
	
	printf("\n\nOs 12 valores foram lidos!\n");
	system("pause");
	system("cls");
	
	printf("Valores da matriz:\n");
	for(l = 0; l < 3; l++)
	{
		for(c = 0; c < 4; c++)
		{
			printf("%d\t", m[l][c]);
		}
		printf("\n");
	}
	
	printf("\nMaior valor lido: %d", maior);
	printf("\nMenor valor lido: %d", menor);
	return 0;
}
