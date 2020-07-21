#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	int vet[15], pos;
	float media = 0;
	
	printf("Ex 01 - Ler vetor de 15 posiçoes de inteiros\n\n");
	
	for(pos = 1; pos <= 15; pos++)
	{
		printf("Informe o valor da pos %d do vetor: ", pos);
		scanf("%d", &vet[pos]);
		// somar o valor lido com os valores qeu já tenho samado (lidos anteriormente)
		media += vet[pos];
	}
	
	// calculo do media
	media = media / pos;
	
	printf("\n\nMostrando valores no vetor que sao maiores ou iguais a media (%.2f): ", media);
	
	for(pos = 1; pos <= 15; pos++)
	{
		// se valor armazenado na posiçao atual do vetor for maior ou igual ao valor de 'media'
		if(vet[pos] >= media)
		{	
			printf("%d ", vet[pos]);
		}
	}
	
	
	return 0;
}
