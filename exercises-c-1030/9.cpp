#include <stdio.h>
#include <locale.h>

/*
Escrever um algoritmo que leia uma matriz M(2,3) e divida todos os elementos de
cada uma das 2 linhas de M pelo maior elemento daquela linha. Escrever a matriz lida
e modificada.
*/

#define rows 2
#define cols 3

int main () {
	setlocale(LC_ALL,"Portuguese");

	char continuar;
	
	do {
		float m[rows][cols], maior[rows] = {0};
		
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				printf("m[L%i][C%i]: ", i, j);
				scanf("%f", &m[i][j]);
				
				if (i == 0) {
					maior[i] = m[i][j];
				}
				
				if (maior[i] < m[i][j]) {
					maior[i] = m[i][j];
				}
			}
		}
		
		printf("\nMatriz modificada: \n");
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				m[i][j] /= maior[i];
				printf("%.2f ", m[i][j]);
			}
			printf("\n");
		}

	
	    scanf("%s", &continuar);
	} while (continuar == 'S' || continuar == 's');
	
	return 0;
}


