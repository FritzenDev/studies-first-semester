#include <stdio.h>
#include <locale.h>

/*
Faça um programa para solicitar o salário e o valor da prestação. Se a
prestação for maior que 20% do salario, imprimir : “Empréstimo não
pode ser concedido !”. Senão imprimir “Empréstimo Concedido”.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int sal, val, calc;
		
		printf("Digite o salário: ");
		scanf("%i", &sal);
		
		printf("Digite o valor da prestação: ");
		scanf("%i", &val);
		
		calc = sal * 0.20;
		
		if (val > calc) {
			printf("Empréstimo não pode ser concedido!\n");
		}
		else {
			printf("Empréstimo concedido!\n");
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


