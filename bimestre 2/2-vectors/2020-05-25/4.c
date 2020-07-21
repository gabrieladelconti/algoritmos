#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int bolinho[5], n, indice;
	
	printf("Leitura de 5 valores inteiros: \n");
	
	for(indice = 1; indice <= 5; indice++)
	{
		printf("Informe o valor da pos %d: ", indice);
		scanf("%d", &bolinho[indice]);
	}
	
	printf("\n\nVetor lido com sucesso!");
	
	printf("\n\nInforme um outro valor inteiro qualquer: ");
	scanf("%d", &n);
	
	printf("\n\nMostrando indices do vetor em que o valor armazenado seja menor que %d: ", n);
	
	for(indice = 1; indice <= 5; indice++)
	{
		// verificar se o valor na pos atual é menor que o valor de 'n':
		if(bolinho[indice] < n)
		{
			printf("%d ", indice);
		}
	}
	
	return 0;
}
