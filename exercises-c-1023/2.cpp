#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que l� 10 valores e os armazena em um vetor. Mostre os
valores que s�o maiores que 50
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int num[10];
		int i;
		
		for (i = 0; i < 10; i++) {
			printf("Digite o %i� n�mero: ", i+1);
			scanf("%i", &num[i]);
		}
		
		printf("N�meros maiores que 50:\n");
		
		for (i = 0; i < 10; i++) {
			if (num[i] > 50) {
			printf("%i\n", num[i]);
			}
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


