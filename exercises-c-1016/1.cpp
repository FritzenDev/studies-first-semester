#include <stdio.h>
#include <locale.h>

/*
Uma fábrica de camisetas produz os tamanhos P, M e G, cada uma sendo
vendida respectivamente por 15, 18 e 22 Reais cada. Faça um algoritmo
que leia o código do tamanho da camiseta (P, M ou G) e a quantidade
vendida. Calcule o valor total da venda e escreva no final.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		char lenght;
		int valP = 15, valM = 18, valG = 22;
		int calc, qnt;
		
		printf("Digite o tamanho da camiseta (P | M | G): ");
		scanf(" %c", &lenght);
		
		printf("Digite a quantidade de camisetas vendidas: ");
		scanf("%i", &qnt);
		
		if (lenght == 'P') {
			calc = qnt * valP;
			printf("O valor total da venda foi de: %i\n", calc);
		} else if (lenght == 'M') {
			calc = qnt * valM;
			printf("O valor total da venda foi de: %i\n", calc);
		} else if (lenght == 'G') {
			calc = qnt * valG;
			printf("O valor total da venda foi de: %i\n", calc);
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


