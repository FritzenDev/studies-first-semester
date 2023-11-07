#include <stdio.h>
#include <locale.h>

/*
Elaborar um algoritmo que lê uma matriz M(4,4) e um valor A. Após, multiplique a
matriz M pelo valor A e coloque os valores da matriz multiplicados por A em uma
matriz N(4,4). Ao final, escreva a matriz N.
*/

#define rows 4
#define cols 4

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int m[rows][cols], n[rows][cols];
		int a;
		
		printf("Digite o valor de A: ");
		scanf("%i", &a);
		
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				printf("\nm[%i][%i]", i, j);
				scanf("%i", &m[i][j]);
				
				n[i][j] = a * m[i][j];
			}
		}
		
		printf("\n");
		
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				printf("%i ", n[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		
	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


