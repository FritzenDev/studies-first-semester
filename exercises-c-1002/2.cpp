#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que escreva 10 vezes na tela o seu nome
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int name;
		
		for (name = 0; name < 10; name++) {
			printf("Kau�\n", name);
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


