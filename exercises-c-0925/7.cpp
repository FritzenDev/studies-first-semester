#include <stdio.h>
#include <locale.h>

/*
Faça um programa que receba a idade de uma pessoa e mostre na saída em qual
categoria ela se encontra:
? 10-14 infantil
? 15-17 juvenil
? 18-25 adulto
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int idd;
		
		printf("Digite sua idade: ");
		scanf("%i", &idd);
		
		switch (idd) {
			case 10 ... 14:
				printf("Infantil\n");
				break;
			case 15 ... 17:
				printf("Juvenil\n");
				break;
			case 18 ... 25:
				printf("Adulto\n");
				break;
			default:
				printf("Idade inválida\n");
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


