#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int vet[10], cont, soma = 0;
	
	printf("Informe 10 valores inteiros, por favorzinho:\n\n");
	
	for(cont = 0; cont < 10; cont++)
	{
		printf("Valor para a pos %d: ", cont);
		scanf("%d", &vet[cont]);
		
		// somar valores positivos nas posicoes pares:
		if(vet[cont] > 0 && cont % 2 == 0)
		{
			soma += vet[cont];
		}
		
	}
	
	printf("\n\nSoma dos valores positivos nas posicoes pares: %d", soma);
	
	
	return 0;
}
