#include <stdio.h>
#include <locale.h>

/*
Um Banco concederá um crédito especial aos seus clientes, variável com o saldo
médio no último ano. Faça um programa em C que leia o saldo médio de um
cliente e calcule o valor do crédito de acordo com a tabela abaixo (exiba a tabela
no programa). Mostre uma mensagem informando o saldo médio e o valor do
crédito.
Saldo médio Percentual
de 0 a 200,00 nenhum crédito (crédito = 0)
de 201,00 a 400,00 20% do valor do saldo médio
de 401,00 a 600,00 30% do valor do saldo médio
acima de 600,00 40% do valor do saldo médio
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		float saldo, calc;
		
		printf("Digite o saldo médio: ");
		scanf("%f", &saldo);
		
		if (saldo > 0 && saldo <= 200) {
			printf("Seu saldo é: R$%.2f e não recebe crédito\n", calc);
		}
		if (saldo >= 201 && saldo <= 400) {
			calc = saldo * 0.20;
			printf("Seu saldo médio é: R$%.2f\nValor do crédito: R$%.2f\n", saldo, calc);
		}
		if (saldo >= 401 && saldo <= 600) {
			calc = saldo * 0.30;
			printf("Seu saldo médio é: R$%.2f\nValor do crédito: R$%.2f\n", saldo, calc);
		}
		if (saldo > 600) {
			calc = saldo * 0.40;
			printf("Seu saldo médio é: R$%.2f\nValor do crédito: R$%.2f\n", saldo, calc);
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


