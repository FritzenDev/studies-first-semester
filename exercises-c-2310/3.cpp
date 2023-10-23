#include <stdio.h>
#include <locale.h>

/*
Faça um programa que lê 10 valores e os armazena em um vetor X. Verifique os
valores pares digitados, armazene-os em um vetor Y e mostre os valores pares
digitados e a quantidade. 
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int x[10], y[10];
		int i, cont = 0;
		
		for (i = 0; i < 10; i++) {
			printf("Digite o %i° número: ", i+1);
			scanf("%i", &x[i]);
			if (x[i] % 2 == 0) {
				y[cont] = x[i];
				cont++;
			}
		}
		
		printf("Valores pares digitados:\n");
		for (i = 0; i < cont; i++) {
			printf("%i ", y[i]);
		}
		printf("\nQuantidade de valores pares digitados: %i\n", cont);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


