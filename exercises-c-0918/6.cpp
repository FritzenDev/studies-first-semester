#include <stdio.h>
#include <locale.h>

/*
Faça um programa que leia dois valores inteiros. Verifique o maior
deles e imprima na tela o resultado.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num1, num2;
		
		printf("Digite o primeiro número: ");
		scanf("%i", &num1);
		
		printf("Digite o segundo número: ");
		scanf("%i", &num2);
		
		if (num1 > num2) {
			printf("%i é maior\n", num1);
		}
		else {
			printf("%i é maior\n", num2);
		}
		
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


