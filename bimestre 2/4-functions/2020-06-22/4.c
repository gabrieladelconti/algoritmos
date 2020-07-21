#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float distancia(float x1, float y1, float x2, float y2)
{
	float d;
	
	d = sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2) );
	
	return d;
}

int main(int argc, char *argv[]) 
{
	float x1, y1, x2, y2, d;
	
	printf("Ex 04 - distancia entre dois pontos\n\n");
	printf("Coordenadas do ponto P1:\n");
	printf("X de P1: ");
	scanf("%f", &x1);
	printf("Y de P1: ");
	scanf("%f", &y1);
	
	printf("\nCoordenadas do ponto P2:\n");
	printf("X de P2: ");
	scanf("%f", &x2);
	printf("Y de P2: ");
	scanf("%f", &y2);
	
	d = distancia(x1, y1, x2, y2);
	
	printf("\n\nA distancia entre os pontos P1(%.1f, %.1f) e P2 (%.1f, %.1f) = %.1f", x1, y1, x2, y2, d);
	
	return 0;
}
