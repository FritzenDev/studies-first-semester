#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo que leia o número de gols marcados pelo Grêmio e número
de gols marcados pelo Inter em um Gre-nal. Mostre na tela o nome do
vencedor e quantos gols o time vencedor fez a mais. Caso não haja
vencedor, mostre na tela o total de gols de cada time com a
mensagem: EMPATE
*/

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int golG, golI;
    	
    	printf("Digite quantos gols o Grêmio fez: ");
    	scanf("%i", &golG);
    	
    	printf("Digite quantos gols o Inter fez: ");
    	scanf("%i", &golI);
    	
    	if (golG > golI) {
    		printf("O vencedor é o Grêmio!\n");
		}
		if (golI > golG) {
			printf("O vencedor é o Inter!\n");
		}
		if (golI == golG) {
			printf("EMPATE!\n");
		}
		

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}


