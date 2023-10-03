#include <stdio.h>
#include <locale.h>

/*
Faça um programa que mostra os números entre 121 e 201 de 3 em 3 (usando DO
WHILE).
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num = 121;
		
		do {
			for (num = num; num <= 201; num+=3) {
				printf("%i\n", num);
			}
		} while (num >= 121 && num <= 201);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


