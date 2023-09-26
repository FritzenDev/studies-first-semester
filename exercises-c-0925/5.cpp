#include <stdio.h>
#include <locale.h>

/*
Um Banco conceder� um cr�dito especial aos seus clientes, vari�vel com o saldo
m�dio no �ltimo ano. Fa�a um programa em C que leia o saldo m�dio de um
cliente e calcule o valor do cr�dito de acordo com a tabela abaixo (exiba a tabela
no programa). Mostre uma mensagem informando o saldo m�dio e o valor do
cr�dito.
Saldo m�dio Percentual
de 0 a 200,00 nenhum cr�dito (cr�dito = 0)
de 201,00 a 400,00 20% do valor do saldo m�dio
de 401,00 a 600,00 30% do valor do saldo m�dio
acima de 600,00 40% do valor do saldo m�dio
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		float saldo, calc;
		
		printf("Digite o saldo m�dio: ");
		scanf("%f", &saldo);
		
		if (saldo > 0 && saldo <= 200) {
			printf("Seu saldo �: R$%.2f e n�o recebe cr�dito\n", calc);
		}
		if (saldo >= 201 && saldo <= 400) {
			calc = saldo * 0.20;
			printf("Seu saldo m�dio �: R$%.2f\nValor do cr�dito: R$%.2f\n", saldo, calc);
		}
		if (saldo >= 401 && saldo <= 600) {
			calc = saldo * 0.30;
			printf("Seu saldo m�dio �: R$%.2f\nValor do cr�dito: R$%.2f\n", saldo, calc);
		}
		if (saldo > 600) {
			calc = saldo * 0.40;
			printf("Seu saldo m�dio �: R$%.2f\nValor do cr�dito: R$%.2f\n", saldo, calc);
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


