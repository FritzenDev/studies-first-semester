#include <stdio.h>
#include <locale.h>

/*
Faça um programa que lê 10 números, calcula a média e ao final mostra
quantos valores são maiores que a média e os números. 
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num[10], numY[10];
		float media, soma = 0;
		int maior = 0, menor = 0;
		int cont = 0;
		int i;
		
		for (i = 0; i < 10; i++) {
			printf("Digite o %i° número: ", i+1);
			scanf("%i", &num[i]);
			soma += num[i];
		}
		media = soma / 10;
		
		for (i = 0; i < 10; i++) {
			if (num[i] > media) {
				numY[cont] = num[i];
				cont++;
			}
		}

		printf("\nMédia dos 10 números: %.2f\n", media);
		printf("Valores maior que a média: %i\n", cont);
		printf("Números digitados maiores que a média:\n");
		for (i = 0; i < cont; i++) {
			printf("%i ", numY[i]);
		}
		
		
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


