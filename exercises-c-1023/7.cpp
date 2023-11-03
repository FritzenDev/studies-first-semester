#include <stdio.h>
#include <locale.h>

/*
Faça um programa que armazena 10 valores em um vetor X e mostra somente
os valores armazenados nos índices pares do vetor. 
*/

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int x[10], y[10], pos[10];
		int i, cont = 0;
		
		for (i = 1; i <= 10; i++) {
			printf("Digite o %i° valor: ", i);
			scanf("%i", &x[i]);
			
			if (i % 2 == 0) {
				y[cont] = x[i];
				pos[cont] = i;
				cont++;
			}
		}
		
		printf("\nValores digitados nos índices pares do vetor:\n");
		for (i = 0; i < cont; i++) {
			printf("X[%i] = %i\n", pos[i]-1, y[i]);
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


