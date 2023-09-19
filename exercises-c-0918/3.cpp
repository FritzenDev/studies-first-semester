#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo que leia um número e mostrar se ele é positivo,
negativo ou igual a zero.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {		
		int num;
		
		printf("Digite seu número: ");
		scanf("%i", &num);
		
		if (num > 0) {
			printf("%i é positivo\n", num);
		}
		else if (num == 0) {
			printf("%i é um número nulo\n", num);
		}
		else {
			printf("%i é negativo\n", num);
		}
		
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


