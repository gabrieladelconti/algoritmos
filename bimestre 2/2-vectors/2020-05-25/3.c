#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int va[10], vb[10], i;
	
	
	printf("Informe 10 valores inteiros para o Vetor A:\n\n");
	
	for(i = 1; i <= 10; i++)
	{
		printf("Valor para a pos %d: ", i);
		scanf("%d", &va[i]);
		
		vb[i] = va[i] * 2;	
	}
	
	printf("\n\nValores armazenados no Vetor B (dobro do Vetor A): ");
	
	for(i = 1; i <= 10; i++)
	{
		printf("%d ", vb[i]);
	}
	
	
	return 0;
}
