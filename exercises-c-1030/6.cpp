#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo que leia uma matriz 5 x 5 de números e encontre o maior e o
menor valor da matriz.
*/

#define rows 5
#define cols 5

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int m[rows][cols];
		int maior = 0, menor = 0;
		
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				printf("m[L%i][C%i]: ", i, j);
            	scanf("%i", &m[i][j]);
            	
            	if (i == 0 && j == 0) {
            		maior = m[i][j];
            		menor = m[i][j];
				}
            	
            	if (m[i][j] > maior) {
            		maior = m[i][j];
				}
				
				if (m[i][j] < menor) {
					menor = m[i][j];
				}
			}
		}
		
		printf("\n");
		
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				printf("%i ", m[i][j]);
			}
			printf("\n");
		}
		
		printf("\nMaior: %i\n", maior);
		printf("Menor: %i\n", menor);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


