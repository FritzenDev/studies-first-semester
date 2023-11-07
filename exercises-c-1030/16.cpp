#include <stdio.h>
#include <locale.h>

/*
Faça um programa que leia uma matriz A (5,5) de números inteiros e cria 2 vetores
MaiorL(5) e MenorC(5), que contenham, respectivamente, o maior elemento de cada
uma das linhas e o menor elemento de cada uma das colunas. Escrever a matriz A e os
vetores MaiorL e MenorC.
*/

#define rows 5
#define cols 5

int main() {
	setlocale(LC_ALL,"Portuguese");

    char continuar;

    do {
    	int m[rows][cols];
    	int maiorR[rows], menorC[rows];

		
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				printf("m[%i][%i]: ", i, j);
				scanf("%i", &m[i][j]);
			}
		}
		
		for (int i = 0; i < rows; i++) {
			maiorR[i] = m[i][0];
			menorC[i] = m[0][i];
		}
		
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				if (m[i][j] > maiorR[i]) {
					maiorR[i] = m[i][j];
				}
				
				if (m[i][j] < menorC[j]) {
					menorC[j] = m[i][j];
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
		
		printf("\nVETOR MAIOR LINHAS:\n");
		for (int i = 0; i < rows; i++) {
			printf("%i\t", maiorR[i]);
		}
		
		printf("\n\nVETOR MENOR COLUNAS:\n");
		for (int i = 0; i < cols; i++) {
			printf("%i\t", menorC[i]);
		}

    	scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');

    return 0;
}

