#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que mostra os n�meros entre 200 at� 100 de 5 em 5.
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


