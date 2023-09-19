#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo que leia um número e mostra se o número é
maior que 20.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num;
		
		printf("Digite seu número: ");
		scanf("%i", &num);
		
		if (num > 20) {
			printf("%i é maior que 20\n", num);
		}
		else {
			printf("%i é menor que 20\n", num);
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


