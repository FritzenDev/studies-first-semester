#include <stdio.h>
#include <locale.h>

/*
Fa�a um algoritmo que leia um n�mero e mostrar se ele � positivo,
negativo ou igual a zero.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {		
		int num;
		
		printf("Digite seu n�mero: ");
		scanf("%i", &num);
		
		if (num > 0) {
			printf("%i � positivo\n", num);
		}
		else if (num == 0) {
			printf("%i � um n�mero nulo\n", num);
		}
		else {
			printf("%i � negativo\n", num);
		}
		
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


