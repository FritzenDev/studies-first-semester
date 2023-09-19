#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa para solicitar o sal�rio e o valor da presta��o. Se a
presta��o for maior que 20% do salario, imprimir : �Empr�stimo n�o
pode ser concedido !�. Sen�o imprimir �Empr�stimo Concedido�.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int sal, val, calc;
		
		printf("Digite o sal�rio: ");
		scanf("%i", &sal);
		
		printf("Digite o valor da presta��o: ");
		scanf("%i", &val);
		
		calc = sal * 0.20;
		
		if (val > calc) {
			printf("Empr�stimo n�o pode ser concedido!\n");
		}
		else {
			printf("Empr�stimo concedido!\n");
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


