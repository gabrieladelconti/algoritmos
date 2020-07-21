#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int pc[10] = {6, 1, 7, 4, 2, 10, 9, 3, 5, 8};
	int usuario, op, num, score_pc, score_u, soma, i;
	int rep;
	
	do
	{
		system("cls");
		
		score_u = 0;
		score_pc = 0;
		
		for(i = 0; i < 10; i++)
		{
			printf("JOGO PAR OU IMPAR");
			printf("\nRodada %d:", i+1);
			
			printf("\nEscolha '2' para PAR ou '1'para IMPAR: ");
			scanf("%d", &op);
			
			while(op != 1 && op != 2)
			{
				printf("INVALIDO - Tente novamente.");
				printf("\nEscolha '2' para PAR ou '1'para IMPAR: ");
				scanf("%d", &op);
			}
			
			printf("Agora, digite um valor inteiro entre 1 e 10: ");
			scanf("%d", &num);
			
			while(num < 1 || num > 10)
			{
				printf("\nINVALIDO - Tente novamente.");
				printf("\nDigite um valor inteiro entre 1 e 10: ");
				scanf("%d", &num);
			}
			
			soma = num + pc[i];
			printf("Resultado: %d", soma);
			
			if((op == 1 && soma % 2 != 0) || (op == 2 && soma % 2 == 0))
			{
				score_u++;
				printf("\nO Usuario ganhou este turno!");
			}
			else
			{
				score_pc++;
				printf("\nO PC ganhou este turno!");
			}
			
			printf("\n\n");
			system("pause");
			system("cls");
		}
		
		printf("PONTUACAO FINAL:\n");
		printf("Usuario: %d\n", score_u);
		printf("PC: %d\n\n", score_pc);
		
		if(score_u > score_pc)
		{
			printf("O Usuario venceu!");
		}
		else if(score_u < score_pc)
		{
			printf("O PC venceu!");
		}
		else
		{
			printf("Empate!");
		}
		
		printf("\n\nDeseja jogar novamente?");
		printf("\nSe SIM, digite '1'. Se NAO, digite '2': ");
		scanf("%d", &rep);
		
		while((rep != 1) && (rep != 2))
		{
			printf("\nINVALIDO - Tente novamente");
			printf("\nSe SIM, digite '1'. Se NAO, digite '2': ");
			scanf("%d", &rep);	
		}
		
	}while(rep == '1');
	
	return 0;
}
