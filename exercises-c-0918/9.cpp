#include <stdio.h>
#include <locale.h>

/*
Desenvolva um Algoritmo que leia 3 n�meros e escreve o maior.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num1, num2, num3;
		
		printf("Digite o primeiro n�mero: ");
		scanf("%i", &num1);
		
		printf("Digite o segundo n�mero: ");
		scanf("%i", &num2);
		
		printf("Digite o terceiro n�mero: ");
		scanf("%i", &num3);
		
		if (num1 > num2 && num1 > num3) {
			printf("O primeiro n�mero (%i) � maior\n", num1);
		}
		if (num2 > num1 && num2 > num3) {
			printf("O segundo n�mero (%i) � maior\n", num2);
		}
		if (num3 > num1 && num3 > num2) {
			printf("O terceiro n�mero (%i) � maior\n", num3);
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


