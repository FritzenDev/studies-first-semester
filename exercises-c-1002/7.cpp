#include <stdio.h>
#include <locale.h>

/*
Faça um programa que mostra os números entre 200 até 100 de 5 em 5.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num;
		
		for(num = 200; num >= 100; num=num-5) {
			printf("%i\n", num);
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


