#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo que leia 10 números inteiros e identifique o maior e o menor.
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num, maior, menor;
		
			for (int i = 0; i < 10; i++) {
				printf("Digite um número: ");
				scanf("%i", &num);
				/*Define valor para o num*/
				if (i == 0) {
					menor = num;
					maior = num;
				} else if (num > maior) {
					maior = num;
				} else if (num < menor) {
					menor = num;
				}			
			}
			
		
		printf("Maior: %i\n", maior);
		printf("Menor: %i\n", menor);
	
		
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


