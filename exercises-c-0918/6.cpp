#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que leia dois valores inteiros. Verifique o maior
deles e imprima na tela o resultado.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num1, num2;
		
		printf("Digite o primeiro n�mero: ");
		scanf("%i", &num1);
		
		printf("Digite o segundo n�mero: ");
		scanf("%i", &num2);
		
		if (num1 > num2) {
			printf("%i � maior\n", num1);
		}
		else {
			printf("%i � maior\n", num2);
		}
		
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


