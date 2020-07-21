#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a[10] = {10,2,3,45,8,68,79,120,45,50};
	int b[10] = {9,12,10,13,156,74,985,2,256,1};
	int c[10], i;
	
	printf("Vetor A: ");
	for(i = 0; i < 10; i++)
	{
		printf("%d\t", a[i]);
	}
	
	printf("\nVetor B: ");
	for(i = 0; i < 10; i++)
	{
		printf("%d\t", b[i]);
	}
	
	
	printf("\nVetor C: ");
	for(i = 0; i < 10; i++)
	{
		c[i] = a[i] + b[i];
		printf("%d\t", c[i]);
	}
	
	return 0;
}
