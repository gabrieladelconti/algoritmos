#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	float notas[15], media = 0, menor, maior;
	int pos;
	
	printf("Cadastro de notas de 15 alunos:\n\n");
	
	for(pos = 0; pos < 15; pos++)
	{
		printf("Informe a %da. nota: ", pos+1);
		scanf("%f", &notas[pos]);
		
		media += notas[pos];
		
		if(pos == 0)
		{
			menor = notas[pos];
			maior = notas[pos];
		}
		else if (notas[pos] < menor)
		{
			menor = notas[pos];
		}
		else if (notas[pos] > maior)
		{
			maior = notas[pos];
		}
		
	}// fim for
	
	media = media / 15;
	
	printf("\n\nMedia das notas lidas: %.1f", media);
	printf("\nMenor nota lida: %.1f", menor);
	printf("\nMaior nota lida: %.1f", maior);
	
	
	return 0;
}
