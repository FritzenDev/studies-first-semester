#include <stdio.h>

/*
Com base na tabela abaixo, escreva um programa que leia 
o código de um item e a quantidade deste item. A seguir, 
calcule e mostre o valor da conta a pagar.

1 = 4.00
2 = 4.50
3 = 5.00
4 = 2.00
5 = 1.50
*/

int main() {

    char continuar;

    do {
    	int cod, qnt;
    	float total, price;
    	
    	scanf("%i%i", &cod, &qnt);
    	
    	if (cod == 1) {
    		price = 4.00;
    		total = price * qnt;
    		printf("Total: R$ %.2f\n", total);
		}
		if (cod == 2) {
    		price = 4.50;
    		total = price * qnt;
    		printf("Total: R$ %.2f\n", total);
		}
		if (cod == 3) {
    		price = 5.00;
    		total = price * qnt;
    		printf("Total: R$ %.2f\n", total);
		}
		if (cod == 4) {
    		price = 2.00;
    		total = price * qnt;
    		printf("Total: R$ %.2f\n", total);
		}
		if (cod == 5) {
    		price = 1.50;
    		total = price * qnt;
    		printf("Total: R$ %.2f\n", total);
		}


    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}


