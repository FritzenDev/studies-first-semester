#include <stdio.h>
#include <locale.h>

/*
Faça um programa que leia uma matriz 5X5 e armazene os elementos da diagonal
secundária num Vetor. Mostre a matriz e o vetor.
*/

#define rows 5
#define cols 5

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int m[rows][cols];
		int v[rows], cont = 0;
		
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				printf("M[%i][%i]: ", i, j);
				scanf("%i", &m[i][j]);
				
				if (i + j == rows - 1) {
					v[i] = m[i][j];
					cont++;
				}
			}
		}
		
		printf("\nMATRIZ:\n");
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				printf("%i ", m[i][j]);
			}
			printf("\n");
		}
		
		printf("\nVETOR:\n");
		for (int i = 0; i < cont; i++) {
			printf("%i\n", v[i]);
		}
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


