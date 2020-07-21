#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void baskara(float a, float b, float c)
{
	float delta, x1, x2;
	
	delta = (b * b) - (4 * a * c);
	
	if(delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		
		printf("\nHa duas raizes reais e diferentes:\n");
		printf("X1: %.1f\n", x1);
		printf("X2: %.1f\n", x2);
	}
	else if(delta == 0)
	{
		x1 = (-b + sqrt(delta)) / (2*a);
		
		printf("\nHa duas raizes reais e iguais:\n");
		printf("X1 e X2: %.1f\n", x1);
	}
	else
	{
		printf("\nNao ha raizes reais (delta negativo)\n");
	}
	
	
	
}


int main(int argc, char *argv[]) 
{
	
	float a, b, c;
	
	printf("Ex 03 - Calculo de raizes x1 e x2 (Baskara)\n\n");
	
	printf("Informe o valor de A: ");
	scanf("%f", &a);
	printf("Informe o valor de B: ");
	scanf("%f", &b);
	printf("Informe o valor de C: ");
	scanf("%f", &c);
	
	baskara(a, b, c);	
	
	return 0;
}
