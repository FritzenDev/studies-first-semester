#include <stdio.h>
#include <locale.h>

/*
Faça um programa que leia uma matriz de 3 colunas e 4 linhas. Depois de lê-la, some
as colunas individualmente e acumule a soma na 5ª linha da matriz. Mostrar a matriz
já com a 5ª linha preenchida. (Lembre-se: para guardar o resultado é necessário
declarar uma matriz de 3X5).
*/

#define rows 4
#define cols 3

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		int m[rows+1][cols];
		int soma;
		
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				printf("M[%i][%i]: ", i, j);
				scanf("%i", &m[i][j]);
			}
		}
		
		for (int j = 0; j < cols; j++) {
			soma = 0;
			for (int i = 0; i < rows; i++) {
				soma += m[i][j];
			}
			m[rows][j] = soma;
		}
		
		printf("\nMATRIZ:\n");
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				printf("|%3i| ", m[i][j]);
			}
			printf("\n");
		}
		
		printf("\nMATRIZ MODIFICADA:\n");
		for (int i = 0; i <= rows; i++) {
			for (int j = 0; j < cols; j++) {
				printf("|%3i| ", m[i][j]);
			}
			printf("\n");
		}
		
		
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


