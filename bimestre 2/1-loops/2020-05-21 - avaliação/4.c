#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num, num1 = -1, cont = 0, contPar = 0, contMaior = 0, soma = 0;
	float media, percentPar, percentMaior;
	
	do
	{
		
		printf("Digite um numero (numero negativo para finalizar): ");
		scanf("%d", &num);
		
		if (num >= 0)
		{
			soma += num;
			cont++;
		
			if (num % 2 == 0) {
				contPar++;
			}
			 
			if (num1 >= 0 && num > num1) {
				contMaior ++;
			}
			
			if (num1 == -1) {
				num1 = num;
			}
		}	
		
	}while(num >= 0);
	
	// percentual dos pares
	percentPar = ((float)contPar * 100) / (float)cont;
	
	//media dos numeros
	media = (float)soma / (float)cont;
	
	// percentual de numeros maiores que o primeiro num digitado
	percentMaior = ((float)contMaior * 100) / (float)cont;

	printf("\nCalculando...\n\n");	
	system("pause");
	system("cls");
	
	printf("\nPercentual de numeros pares: %.2f%%", percentPar);
	printf("\nMedia dos numeros: %.2f", media);
	printf("\nPercentual de numeros maiores que o primeiro numero digitado: %.2f%%", percentMaior);
	
	return 0;
}
