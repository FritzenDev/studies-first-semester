#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que mostra na tela os n�meros de 100 at� 1.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num;
		
		for (num = 100; num >= 1; num--) {
			printf("%i\n", num);
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


