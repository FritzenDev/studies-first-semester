#include <stdio.h>
#include <locale.h>

/*
Faça um programa que lê 10 valores e os armazena em um vetor. Mostre os
valores que são maiores que 50
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num[10];
		int i;
		
		for (i = 0; i < 10; i++) {
			printf("Digite o %i° número: ", i+1);
			scanf("%i", &num[i]);
		}
		
		printf("Números maiores que 50:\n");
		
		for (i = 0; i < 10; i++) {
			if (num[i] > 50) {
			printf("%i\n", num[i]);
			}
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


