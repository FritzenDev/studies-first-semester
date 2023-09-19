#include <stdio.h>
#include <locale.h>

/*
No supermercado, as maçãs estão custando R$0,80 se forem
compradas menos do que uma dúzia e R$0,50 se forem compradas
mais de uma dúzia.
Faça um algoritmo que leia a quantidade de maçãs compradas,
calcule o custo e mostre o valor total da compra.
*/

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int qnt;
    	float calc1, calc2;
    	const float m80 = 0.80, m50 = 0.50;

		printf("Digite a quantidade de maçãs compradas: ");
		scanf("%i", &qnt);
		
		if (qnt < 12) {
			calc1 = qnt * m80;
			printf("Sua compra custou: R$%.2f\n", calc1);
		}
		else {
			calc2 = qnt * m50;
			printf("Sua compra custou: R$%.2f\n", calc2);
		}

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

