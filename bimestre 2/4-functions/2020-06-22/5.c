#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float aritmetica(float n1, float n2, float n3)
{
	float res = (n1 + n2 + n3) / 3;
	return res;
}

float ponderada(float n1, float n2, float n3)
{
	float res = ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
	return res;
}

float harmonica(float n1, float n2, float n3)
{
	float res = 3 / ( (1/n1) + (1/n2) + (1/n3) );
	return res;
}


int main(int argc, char *argv[]) 
{
	float n1, n2, n3, result;
	int op;
	
	printf("Ex 05 - Calculo de media aritmetica, ponderada ou harmonica:\n\n");
	
	printf("Informe a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Informe a segunda nota: ");
	scanf("%f", &n2);
	
	printf("Informe a terceira nota: ");
	scanf("%f", &n3);
	
	printf("\n\nInforme agora, a operacao desejada:\n");
	printf("1) Media aritmetica\n");
	printf("2) Media ponderada\n");
	printf("3) Media harmonica\n");
	printf("Sua op: ");
	scanf("%d", &op);
	
	if(op == 1)
	{
		result = aritmetica(n1, n2, n3);
		printf("\n\nA media aritmetia = %.1f", result);
	}
	else if (op == 2)
	{
		result = ponderada(n1, n2, n3);
		printf("\n\nA media ponderada = %.1f", result);
	}
	else if (op == 3)
	{
		result = harmonica(n1, n2, n3);
		printf("\n\nA media harmonica = %.1f", result);
	}
	else
	{
		printf("\n\nOpcao invalida. Calculo nao realizado!");
	}
	
		
	return 0;
}
