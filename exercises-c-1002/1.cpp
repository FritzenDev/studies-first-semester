#include <stdio.h>
#include <locale.h>

/*
Faça um programa que mostra na tela os números de 1 até 100
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num;
		
		for(num = 1; num <= 100; num++) {
			printf("%i\n", num);
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


