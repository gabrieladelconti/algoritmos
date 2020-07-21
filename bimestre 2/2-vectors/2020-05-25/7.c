#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a[5], b[5], i, igual = 0;
	
	printf("Informe 5 valores inteiros para o vetor A:\n\n");
	for (i = 1; i <= 5; i++)
	{
		printf("Pos %d: ", i);
		scanf("%d", &a[i]);		
	}
	
	printf("\n\nAgora, informe 5 valores inteiros para o vetor B:\n\n");
	for (i = 1; i <= 5; i++)
	{
		printf("Pos %d: ", i);
		scanf("%d", &b[i]);	
		
		// verificar se o valor da pos 'i' do vetor A é igual a mesma pos do vetor B:
		if(a[i] == b[i])
		{
			igual++;
		}		
	}
	
	// verificar o valor de 'igual'
	if(igual == 5)
	{
		printf("\n\nSIM! Os vetores sao iguais!");
	}
	else
	{
		printf("\n\nLamento.... mas os vetores NAO sao iguais!");
	}

	
	return 0;
}
