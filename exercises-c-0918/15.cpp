#include <stdio.h>
#include <locale.h>

/*
No supermercado, as ma��s est�o custando R$0,80 se forem
compradas menos do que uma d�zia e R$0,50 se forem compradas
mais de uma d�zia.
Fa�a um algoritmo que leia a quantidade de ma��s compradas,
calcule o custo e mostre o valor total da compra.
*/

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int qnt;
    	float calc1, calc2;
    	const float m80 = 0.80, m50 = 0.50;

		printf("Digite a quantidade de ma��s compradas: ");
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

