#include <stdio.h>
#include <locale.h>

/*
Fa�a um algoritmo que leia o n�mero de gols marcados pelo Gr�mio e n�mero
de gols marcados pelo Inter em um Gre-nal. Mostre na tela o nome do
vencedor e quantos gols o time vencedor fez a mais. Caso n�o haja
vencedor, mostre na tela o total de gols de cada time com a
mensagem: EMPATE
*/

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int golG, golI;
    	
    	printf("Digite quantos gols o Gr�mio fez: ");
    	scanf("%i", &golG);
    	
    	printf("Digite quantos gols o Inter fez: ");
    	scanf("%i", &golI);
    	
    	if (golG > golI) {
    		printf("O vencedor � o Gr�mio!\n");
		}
		if (golI > golG) {
			printf("O vencedor � o Inter!\n");
		}
		if (golI == golG) {
			printf("EMPATE!\n");
		}
		

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}


