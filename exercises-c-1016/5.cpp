#include <stdio.h>
#include <locale.h>

/*
Um atleta deseja se inscrever em uma escola de futebol. Fa�a um programa
que leia a idade de um atleta e mostre na sa�da em qual categoria ele se
encontra, junto com a idade. Use a tabela abaixo:
? 10-14 infantil
? 15-17 juvenil
? 18-25 adulto
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int idd;
		
		printf("Digite a sua idade: ");
		scanf("%i", &idd);
		
		if (idd >= 10 && idd <= 14) {
			printf("Voc� se encontra na categoria Infantil\n");
		} else if (idd >= 15 && idd <= 17) {
			printf("Voc� se encontra na categoria Juvenil\n");
		} else if (idd >= 18 && idd <= 25) {
			printf("Voc� se encontra na categoria Adulto\n");
		} else {
			printf("Idade inv�lida");
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


