#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que mostra na tela os n�meros de 50 at� 5 e mostra os valores
�mpares.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num;
		
		for (num = 50; num >= 5; num--) {
			if (num % 2!=0) {
				printf("%i\n", num);
			}
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


