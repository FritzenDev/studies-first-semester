#include <stdio.h>
#include <locale.h>

/*
Faça um programa que lê 10 valores e os armazena em um vetor. Mostre o 1o
valor e o 5o valor digitado.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num[10];
		
		for (int i = 0; i < 10; i++) {
			printf("Digite o %i° número: ", i+1);
			scanf("%i", &num[i]);
		}
		
		printf("O primeiro valor: %i\n", num[0]);
		printf("O quinto valor valor: %i\n", num[4]);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


