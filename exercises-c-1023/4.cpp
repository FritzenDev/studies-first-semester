#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que l� 10 valores e os armazena no vetor A. Ap�s, mostre a
soma dos valores. 
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int a[10], soma;
		int i;
		
		for (i = 0; i < 10; i++) {
			printf("Digite o %i� n�mero: ", i+1);
			scanf("%i", &a[i]);
			soma += a[i];
		}
		printf("Soma dos n�meros digitados: %i", soma);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


