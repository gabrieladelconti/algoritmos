#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void calcularFatorial()
{
	int fat, res, i;
	// ler um valor
	printf("Informe um valor para ser fatorado: ");
	scanf("%d", &fat);
	
	// calcular
	res = fat;
	for(i = fat - 1; i >= 1; i--)
	{
		res = res * i;
	}
	
	// apresentar o seu fatorial na tela
	printf("\nO fatorial do numero %d eh: %d\n", fat, res);
	
	system("pause");
  	system("cls");
}

void calcularExponenciacao()
{
	int base, exp, res;
	// ler a base e o expoente
	printf("Informe um valor para a base: ");
	scanf("%d", &base);
	printf("Informe um valor para o expoente: ");
	scanf("%d", &exp);
	
	// calcular 
	res = pow(base, exp);
	
	// aprensentar a exponenciacao na tela
	printf("\nResultado de %d ^ %d: %d\n\n", base, exp, res);
	
	system("pause");
  	system("cls");
}

void calcularProcentagem()
{
	int num, perc; 
	float res;
	// ler valor e o porcentual
	printf("Informe um valor total: ");
	scanf("%d", &num);
	printf("Informe o porcentual: ");
	scanf("%d", &perc);
	
	// calcular
	res = num * perc / 100;
	
	// apresentar o % do valor calculado
	printf("\nResultado de %d%% de %d: %2.f\n\n", perc, num, res);
	
	
	system("pause");
  	system("cls");
}

void calcularAreaTriangulo()
{
	float base, alt, res;
	// ler a base e a altura
	printf("Informe um valor para a base: ");
	scanf("%f", &base);
	printf("Informe um valor para a altura: ");
	scanf("%f", &alt);
	
	// calcular
	res = (base * alt) / 2;
	
	//apresentar a area do triangulo = (base*altura)/2
	printf("\nArea do triangulo base %2.f e altura %2.f: %2.f\n\n", base, alt, res);
	
	system("pause");
  	system("cls");
}

int main(int argc, char *argv[]) 
{
	int op;
	
	do
	{
		printf("Opercoes para calcular:\n");
		printf("1) Fatorial\n");
		printf("2) Exponenciacao\n");
		printf("3) Porcentagem\n");
		printf("4) Area do triangulo\n");
		printf("5) Sair\n");
		printf("Sua opcao: ");
		scanf("%d", &op);
		
		switch(op)
		{
			case 1:
				calcularFatorial();
				break;
			case 2:
				calcularExponenciacao();
				break;
			case 3:
				calcularProcentagem();
				break;
			case 4:
				calcularAreaTriangulo();
				break;
			case 5:
				printf("\n\nO programa sera finalizado...\n");
				break;
			default:
				printf("\n\nATENCAO: Opcao invalida!\n");
		}
		
		system("pause");
		system("cls");
		
		
	}while(op != 5);
	
	
	return 0;
}
