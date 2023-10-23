#include <stdio.h>
#include <locale.h>

/*
Faça um programa que lê 10 valores e os armazena no vetor A. Após, mostre a
soma dos valores. 
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int a[10], soma;
		int i;
		
		for (i = 0; i < 10; i++) {
			printf("Digite o %i° número: ", i+1);
			scanf("%i", &a[i]);
			soma += a[i];
		}
		printf("Soma dos números digitados: %i", soma);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


