#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float soma = 0;
	int divisor, dividendo;
  	
	for (divisor = 1, dividendo = 1000; (divisor <= 50) && 
	(dividendo >= (1000 - 3 * (50 - 1))); divisor++, dividendo -= 3)
	{
		if ((divisor % 2 != 0))
		{
			soma += ((float)dividendo / (float)divisor);
		}else {
			soma -= ((float)dividendo / (float)divisor);
		}
	}
	
	printf("S = %f", soma);
	
	return 0;
}
