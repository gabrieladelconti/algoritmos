#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int cod, num, impar = 0, par = 0;
	
	do
	{
		
		// menu 
		printf("\nMENU:");
		printf("\n1) Digitar um numero impar");	
		printf("\n2) Digitar um numero par");
		printf("\n3) Sair");
		
		
		printf("\n\nEscolha uma opcao: ");
		scanf("%d", &cod);
		
		switch(cod)
		{
			case 1:
				//case 1: digitar um num impar para voltar ao menu
				printf("\nDigite um numero IMPAR para voltar ao menu: ");
				scanf("%d", &num);
				
				// verificar se o num é impar
				if (num % 2 != 0) {
					impar++;
				}else {
					printf("\nATENCAO: Este numero nao e impar! Tente novamente.\n\n");
				}
				
				break;
				
			case 2:
				//case 2: digitar um num par para voltar ao menu
				printf("\nDigite um numero PAR para voltar ao menu: ");
				scanf("%d", &num);
				
				// verificar se o num é par
				if (num % 2 == 0) {
					par++;
				}else {
					printf("\nATENCAO: Este numero nao e par! Tente novamente.\n\n");
				}
				
				break;
				
			case 3:
				//case 3: apresentar a qtde de numeros impares na opção 1 e os pares na opção 2
				printf("\nQuantidade de numeros IMPARES digitados na opcao 1: %d", impar);
				printf("\nQuantidade de numeros PARES digitados na opcao 2: %d", par);
				
				printf("\n\nEncerrando programa...\n\n");
				
				break;
				
			default:
				
				printf("\nATENCAO: Codigo invalido! Tente novamente.\n\n");
		}
		
		system("pause");
		system("cls");
		
	}while(cod != 3);
	
	return 0;
}
