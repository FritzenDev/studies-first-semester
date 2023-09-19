#include <stdio.h>
#include <locale.h>

/*
Desenvolva um Algoritmo que leia 3 números e escreve o maior.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num1, num2, num3;
		
		printf("Digite o primeiro número: ");
		scanf("%i", &num1);
		
		printf("Digite o segundo número: ");
		scanf("%i", &num2);
		
		printf("Digite o terceiro número: ");
		scanf("%i", &num3);
		
		if (num1 > num2 && num1 > num3) {
			printf("O primeiro número (%i) é maior\n", num1);
		}
		if (num2 > num1 && num2 > num3) {
			printf("O segundo número (%i) é maior\n", num2);
		}
		if (num3 > num1 && num3 > num2) {
			printf("O terceiro número (%i) é maior\n", num3);
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


