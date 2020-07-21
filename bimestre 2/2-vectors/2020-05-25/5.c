#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int v[5], i, n, j = 0;
	
	printf("Informe valores inteiros para o vetor V:\n\n");
	
	for(i = 1; i <= 5; i++)
	{
		printf("Valor para a pos %d: ", i);
		scanf("%d", &v[i]);
	}
	
	printf("\n\nVetor lido com sucesso!");
	printf("\nAgora informe outro valor inteiro: ");
	
	scanf("%d", &n);
	
	// percorrer o vetor 'v'
	for(i = 1; i <= 5; i++)
	{
		if(n == v[i])
		{
			j++; 
		}
	}
	
	printf("\nQuantidade de vezes que o valor %d aparece no vetor V: %d", n, j);
	
		
	return 0;
}
