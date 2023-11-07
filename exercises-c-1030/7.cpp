#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo que leia uma matriz 5 x 5 de números. Calcule e mostre a soma das
linhas pares da matriz. 
*/

#define rows 5
#define cols 5

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int m[rows][cols], sum = 0;
		
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				printf("m[L%i][C%i]: ", i, j);
				scanf("%i", &m[i][j]);
				
				if (i % 2 == 0) {
					sum += m[i][j];
				}
			}
		}
		
		printf("Soma das linhas pares: %i\n", sum);
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


