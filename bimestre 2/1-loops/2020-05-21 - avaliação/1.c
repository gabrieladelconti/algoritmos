#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	float soma = 0;
	int divisor, dividendo;
	
	
	for (divisor = 1; divisor <= 50; divisor++)
	{
		dividendo = 1 + 2 * (divisor - 1);
		
		soma += ((float)dividendo / (float)divisor);
	}
	
	printf("S = %f", soma);
	
	return 0;
}
