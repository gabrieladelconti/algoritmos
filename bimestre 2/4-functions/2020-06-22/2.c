#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// função para o calculo da PA
int pa(int a1, int r, int n)
{
	int an = a1 + (n - 1) * r;
	
	return an;
}



int main(int argc, char *argv[]) 
{
	
	int a1, n, r, an;
	
	printf("Ex 02 - calculo de PA\n\n");
	
	printf("Qual o primeiro termo da PA? ");
	scanf("%d", &a1);
	printf("Qual a razao da PA? ");
	scanf("%d", &r);
	printf("Qual o enesimo termo que deseja encontrar? ");
	scanf("%d", &n);
	
	an = pa(a1, r, n);
	
	
	printf("\n\nO enesimo termo (%d) desta PA = %d", n, an);
	
	return 0;
}
