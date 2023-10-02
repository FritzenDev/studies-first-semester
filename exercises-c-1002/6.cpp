#include <stdio.h>
#include <locale.h>

/*
Faça um programa que mostra os números entre 121 e 201 de 3 em 3.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num;
		
		for(num = 121; num < 201; num=num+3) {
			printf("%i\n", num);
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


