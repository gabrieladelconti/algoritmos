Jogo 1 – Par ou Ímpar
Implemente um jogo em Linguagem C em que o usuário jogue par ou ímpar com o computador por 10
turnos. Para tanto, siga os seguintes passos:
1. Crie um vetor de 10 posições de números inteiros e atribua a ele valores entre 1 e 10 distribuídos de
forma não-sequencial. Ex: int vetNumeros[10] = {1, 8, 4, 7, 10, 2, 3, 9, 6, 5};
2. Crie uma variável para que o usuário possa escolher uma opção entre par ou ímpar. Esta variável pode ser
int ou char.
3. Leia a opção digitada pelo usuário e armazene na variável criada. O valor digitado pelo usuário deve ser
validado: Pode ser apenas ‘P’ (para par) ou ‘I’ (para ímpar), se a variável for do tipo char, ou 2 ou 1 (para
representar par ou ímpar, respectivamente), se a variável for int. Enquanto o usuário informar uma opção
inválida (qualquer valor diferente de ‘P’ ou ‘I’ (para char), ou 2 ou 1 (para int)), o jogo deve solicitar que o
usuário digite novamente.
4. Após o sistema ler se o usuário escolheu par ou ímpar, o usuário deve informar um número inteiro
(armazenar o número lido numa variável do tipo int).
O número informado pelo usuário deve ser validado: não pode ser inferior a 1 ou superior a 10. Enquanto
o usuário informar um número inválido, o jogo deve solicitar a entrada de um novo número.
5. O jogo então deverá comparar o número digitado com a posição atual do vetor. Ex: se o jogo se encontra
no primeiro turno, o programa deverá comparar o número digitado com o valor armazenado na primeira
posição do vetor (índice 0). Se estiver no segundo turno, comparar o valor digitado com o valor
armazenado na segunda posição do vetor (índice 1). E assim por diante.
6. Em seguida, devem ser apresentados na tela: o número do computador (o valor armazenado na posição
atual do vetor), o número digitado pelo usuário, a soma dos números e se o resultado da soma é “par” ou
“ímpar”.
7. A opção do usuário e o seu número devem ser analisados:
• Se a opção do usuário coincida com a soma dos números do usuário (considerando par ou ímpar), o
usuário é o vencedor. Deve-se então apresentar a mensagem, “O jogador venceu este turno.”.
• Senão (se a opção do usuário não coincida com a soma dos números do usuário e do computador),
deve-se apresentar a mensagem “O Computador venceu este turno.”.
8. Deve-se repetir o processo até que os dez turnos tenham sido realizados.
9. Ao final do décimo turno, deve-se apresentar quem venceu o jogo: o jogador ou o computador. Vence o
jogo quem vencer por mais vezes após os 10 turnos. Se houver empate (jogador e computador vencerem
5 turnos cada), apresentar a mensagem: “Empate! Ninguém venceu (nem perdeu! )”.
10. Após apresentar o resultado final, deve-se questionar o usuário se ele deseja jogar novamente. Caso
afirmativo, todo o processo deve ser repetido. Caso contrário, o jogo deve ser encerrado.